#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int SumFirstN(int n, int i);

int main(int argc, char const *argv[])
{   
    int n = 400;
    int i= 1;
    long res = SumFirstN(n,i);
    printf("Result of sum of the first %d naturals is: %d \n", n, res);
    return 0;
}

int SumFirstN(int n, int i)
{
    printf("Recursive call: %d \n", i);
    i++;
    if (n == 0)
        return 0;
    else
        return n + SumFirstN(n-1, i);
}