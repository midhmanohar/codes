//Round robin

#include<stdio.h>
typedef struct
{
    int pid;
    int bt;
    int tt;
    int wt;
    int rt;
}
Process;
Process readProcess(int i)
{
    Process process = {i+1,0,0,0,0};
    printf("\nEnter burst time of process : ");
    scanf("%d",&process.bt);
    process.rt = process.bt;
    return process;
}
void main()
{
    int i,n,tq,t=0;
    float wtsum=0, ttsum=0;
    printf("\nEnter the number of processes : ");
    scanf("%d",&n);
    Process process[n];
    for(i=0;i<n;i++)
    {
        process[i] = readProcess(i);
    }
    printf("\nEnter time quantum : ");
    scanf("%d",&tq);
    while(1)
    {
        int done = 1;
        for(i=0;i<n;i++)
        {
            if(process[i].rt==0)
                continue;
            if(process[i].rt > tq)
            {
                t+=tq;
                process[i].rt-=tq;
                done = 0;
            }
            else
            {
                t+=process[i].rt;
                process[i].rt=0;
                ttsum=ttsum+(process[i].tt = t);
                wtsum+=(process[i].wt = t - process[i].bt);
            }
        }
        if(done)
            break;
    }
    printf("\nProcess ID\tBurst  Time\tTurnaround Time      Waiting Time\n");
    for(i=0;i<n;i++)
        printf("%5d %16d %17d %19d\n",process[i].pid,process[i].bt,process[i].tt,process[i].wt);
        printf("\nAverage Waiting time : %.2f",wtsum/n);
        printf("\nAverage Turnaround time : %.2f\n",ttsum/n);
}
