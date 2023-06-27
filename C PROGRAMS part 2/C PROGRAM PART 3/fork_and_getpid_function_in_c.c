#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    int id,k;
    k=getpid();
    printf("ORIGINAL PROCESS id=%d\n",k);
    id=fork();
    printf("When id=%d\n",id);
    if(id==0)
    {
        printf("Child :- Hello I am child process\n");
        printf("Child :- Child's PID = %d\n",getpid());
        printf("Child :- Parents's PID = %d\n",getppid());
    }
    else
    {
        printf("Parent :- Hello I am parent process\n");
        printf("Parent :- parent's PID = %d\n",getpid());
        printf("Parent :- child's PID = %d\n",id);
    }
    return 0;
}
