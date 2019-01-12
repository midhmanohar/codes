// sjfs

#include <stdio.h>

typedef struct process
{
    int bt,wt,tt;

}proc;
int main(void)
{
proc p[50],temp;
int n;
printf("Enter no.of process : ");
scanf("%d",&n);
int i;

for(i=0;i<n;i++)
{
    printf("Enter burst time : ");
    scanf("%d",&p[i].bt);
}

int j;

for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(p[i].bt>p[j].bt)
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
    }
}

p[0].wt=0;
p[0].tt=p[0].bt;
float avgwt=p[0].wt;
float avgtt=p[0].tt;
for(i=1;i<n;i++)
{
  p[i].wt=p[i-1].bt+p[i-1].wt;
  avgwt+=p[i].wt;
  p[i].tt=p[i].bt+p[i].wt;
  avgtt+=p[i].tt;
}

printf("\n pid \t bt \t wt \t tt\n");

for(i=0;i<n;i++)
{
    printf("%d\t",i+1);
    printf("%d\t",p[i].bt);
    printf("%d\t",p[i].wt);
    printf("%d\t",p[i].tt);
    printf("\n");
}

printf("\nAverage Waiting time : %.2f\n",avgwt/n);
printf("Average Turn around time : %.2f\n",avgtt/n);

}
