#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void recursiveCall(int i);

int main(int argc, char const *argv[])
{   
    int i = 1;
    recursiveCall(i);
    return 0;
}

void recursiveCall(int i)
{   
    printf("Recursive call: %d \n", i);
    i++;
    recursiveCall(i);
}   
