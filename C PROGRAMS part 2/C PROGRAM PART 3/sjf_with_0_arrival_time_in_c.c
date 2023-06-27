#include <stdio.h>

void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int i,j,n;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    int at[n],bt[n],ct[n],tat[n],wt[n],rt[n],p[n];
    float ttat=0.0,twt=0;
    float atat,awt;
    for(i=1; i<=n; i++)
    {
        p[i]=i;
        at[i]=0;
        printf("Enter the burst time of %d:",p[i]);
        scanf("%d",&bt[i]);
    }
    printf("Before sorting the given data is:");
    printf("\nProcesses\tArrival time\tBurst time\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t\t%d\t\t%d\n",p[i],at[i],bt[i]);
    }
    printf("After sorting the given data is w.r.t Burst time:");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            if(bt[j] > bt[j+1])
            {
                swap(&at[j],&at[j+1]);
                swap(&bt[j],&bt[j+1]);
                swap(&p[j],&p[j+1]);
            }
        }
    }
    ct[0]=bt[0];
    int temp=ct[0];
    for(i=1; i<=n; i++)
    {
        ct[i]=temp+bt[i];
        temp=ct[i];
        tat[i]=ct[i]-at[i];
        ttat+=tat[i];
        wt[i]=tat[i]-bt[i];
        twt+=wt[i];
    }
    printf("\nProcesses\tArrival time\tBurst time\tWaiting time\tCompletions time\tTurn arround time\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n",p[i],at[i],bt[i],wt[i],ct[i],tat[i]);
    }
    atat=(ttat/n);
    awt=(twt/n);
    printf("\t\t\t\t\tAverage WT:%.2f\t\t\t\tAverage TAT:%.2f",awt,atat);
}