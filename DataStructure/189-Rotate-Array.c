void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if(k == 0)
    {
        return;
    }
    int *tempArr = malloc(sizeof(int) * k);
    
    // store last k elements
    for(int i = 0; i < k; i++)
    {
        tempArr[i] = nums[numsSize - k + i];
    }
    // shift the elements
    for (int i = numsSize - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    // copy the remaining elements
    for (int i = 0; i < k; i++) {
        nums[i] = tempArr[i];
    }

    free(tempArr);
}