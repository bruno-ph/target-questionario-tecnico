#include <stdio.h>

int main()
{
    int input_number, previous_fib, current_fib, tmp;
    scanf("%d", &input_number);
    if (input_number == 0 or input_number == 1)
    {
        printf("Pertence!\n");
        return 0;
    }
    previous_fib = 1;
    current_fib = 1;
    while (current_fib < input_number)
    {
        tmp = current_fib;
        current_fib += previous_fib;
        previous_fib = tmp;
    }
    if (current_fib == input_number)
    {
        printf("Pertence!\n");
        return 0;
    }
    printf("Não pertence!\n");
    return 0;
}