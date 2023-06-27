#include <stdio.h>

void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int i,j,n,at_temp,bt_temp,p_temp;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    int at[n],bt[n],ct[n],tat[n],wt[n],rt[n],p[n];
    float ttat=0.0,twt=0.0;
    float atat,awt;
    for(i=1; i<=n; i++)
    {
        p[i]=i;
        printf("Enter the arrival time of %d:",p[i]);
        scanf("%d",&at[i]);
        printf("Enter the burst time of %d:",p[i]);
        scanf("%d",&bt[i]);
    }
    printf("Before sorting the given data is:");
    printf("\nProcesses\tArrival time\tBurst time\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t\t%d\t\t%d\n",p[i],at[i],bt[i]);
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            if(at[j] > at[j+1])
            {
                swap(&at[j],&at[j+1]);
                swap(&bt[j],&bt[j+1]);
                swap(&p[j],&p[j+1]);
            }
            else if(at[j] == at[j+1])
            {
                if(p[j]>p[j+1])
                {
                    swap(&at[j],&at[j+1]);
                    swap(&bt[j],&bt[j+1]);
                    swap(&p[j],&p[j+1]);
                }
            }
        }
    }
    int temp=0;
    ct[0]=0;
    for(i=1; i<=n; i++)
    {
        if(at[i]<=ct[i-1])
        {
            ct[i]=temp+bt[i];
            temp=ct[i];
            tat[i]=ct[i]-at[i];
            ttat+=tat[i];
            wt[i]=tat[i]-bt[i];
            twt+=tat[i];
        }
        else if(at[i]>ct[i-1])
        {
            ct[i]=at[i]+bt[i];
            temp=ct[i];
            tat[i]=ct[i]-at[i];
            ttat+=tat[i];
            wt[i]=tat[i]-bt[i];
            twt+=tat[i];
        }
    }
    printf("After sorting the given data is w.r.t Burst time:\n");
    printf("\nProcesses\tArrival time\tBurst time\tCompletion time\tTurn arround time\tWaiting time\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t\t%d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    atat=(ttat/n);
    awt=(twt/n);
    printf("\t\t\t\t\t\t\t  Average TAT:%.2f \t  Average WT:%.2f",atat,awt);
}