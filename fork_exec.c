#include<stdio.h>
#include<unistd.h>
int main()
{
 pid_t ret_value;
 printf("\nThe process id is %d\n",getpid());

 ret_value=fork();
 if(ret_value<0)
 {
 //fork has failed

    printf("\nFork failure\n");
  }
  else if (ret_value==0)
  {
   //child process

   printf("\nChild process\n");
   printf("\nThe process id is %d\n",getpid());  
   printf("\ncall hello.c from child process\n");
   char *args[]={"./hello",NULL};
   execv(args[0],args);
   printf("\n Coming back to child process\n");
  }
   else
    {
~         //parent process
    printf("\nParent process\n");
    printf("\nThe process id is %d\n",getpid()); 
    }
  return 0;
 }
