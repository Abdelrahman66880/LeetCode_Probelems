// #include <cmath>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// class Solution {
// public:
//     vector<int> tmp;
//     vector<int> plusOne(vector<int>& digits) {
//         long int target_number = 0;
//         long int size = digits.size();
//         for(long int i = 0; i < size ; i++)
//         {
//             target_number += pow(10, size - i -1) * digits[i];
//         }
//         target_number = target_number + 1;
//         while(target_number > 0){
//             long int digit = target_number % 10;
//             tmp.push_back(digit);
//             target_number /= 10;
//         }
//         reverse(tmp.begin(), tmp.end());
//         return tmp;
//     }
// };


#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        for (int i = size - 1; i >= 0; i--)
        {
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        // if one or all of digits are 9 
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
