void reverse(char *str)
{
    int lenght = strlen(str);
    // create the stack
    Stack *stack = createStack(lenght);
    // push all characters to the stack
    for(int i = 0; i < lenght; i++)
    {
        push(stack, str[i]);
    }
    // pop all chars in revesed order
    for (int i = 0; i < lenght; i++)
    {
        str[i] = pop(stack);
    }
}