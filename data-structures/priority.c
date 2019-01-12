//priority
#include <stdio.h>

typedef struct process
{
int p_id;
int burst_time;
int priority;
int wt,tt;
}proc;
int main(void)
{
proc p[50];
proc temp;
int i,n;
printf("enter no.of process:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter pid:\n");
scanf("%d",&p[i].p_id);
printf("enter burst time:\n");
scanf("%d",&p[i].burst_time);
printf("enter priority:\n");
scanf("%d",&p[i].priority);
}
int j;
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
       if(p[i].priority > p[j].priority)
       {
       temp=p[i];
       p[i]=p[j];
       p[j]=temp;
       }
 }
}
p[0].wt=0;
p[0].tt=p[0].burst_time;
float avgwt=p[0].wt;
float avgtt=p[0].tt;
for(i=1;i<n;i++)
{
p[i].wt=p[i-1].burst_time+p[i-1].wt;
avgwt+=p[i].wt;
p[i].tt=p[i].wt+p[i].burst_time;
avgtt+=p[i].tt;
}
printf("p_id \t bt \t priority \t wt \t tt\n");
for(i=0;i<n;i++)
{
printf("%d\t",p[i].p_id);
printf("%d\t",p[i].burst_time);
printf("%d\t\t\t",p[i].priority);
printf("%d\t",p[i].wt);
printf("%d\t",p[i].tt);
printf("\n");
}

printf("average wt: %f\n",avgwt/n);
printf("average tt: %f\n",avgtt/n);
}
