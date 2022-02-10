#include<stdio.h>
#include<unistd.h>
int main()
{
    fork();
    printf("The process id is \n PID=%d\n",getpid());
    return 0;
}
