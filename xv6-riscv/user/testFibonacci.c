#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int fibonacci(int num, int i);

int main(int argc, char const *argv[])
{   
    int n = 500;
    int i = 1;
    int result = fibonacci(n, i);
    printf("Result of fibonacci of %d: %d \n", n, result);
    return 0;
}

int fibonacci(int num, int i)
{
    printf("Recursive call: %d \n", i);
    i++;
    if (num <2)
        return num;
    else
        return fibonacci(num-1, i) + fibonacci(num-2, i);
}   
