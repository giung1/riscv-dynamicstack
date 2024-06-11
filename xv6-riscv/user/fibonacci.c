#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int fibonacci(int num);


int main(int argc, char const *argv[])
{   
    int n = 70;
    int result = fibonacci(n);
    printf("Result of fibonacci of %d: %d",n, result);
    return 0;
}



int
fibonacci(int num)
{
    if (num <2)
        return num;
    else
        return fibonacci(num-1) +  fibonacci(num-2);
}   
