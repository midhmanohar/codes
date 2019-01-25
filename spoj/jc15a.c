
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int flag=0;
  double start,end,cspeed,wspeed;
  char direction;
  scanf("%lf",&start);
  scanf("%lf",&end);
  scanf("%lf",&cspeed);
  scanf("%lf",&wspeed);
  scanf("%s",&direction);
  double ans=0;
  if(direction == 'L'){
      wspeed*=-1;
  }
  if(end < start){
      cspeed *= -1;
  }
  double dist = end-start;
  if(dist == 0)
  {
    printf("0.000000\n");
    return 0;
  }
  if(cspeed +wspeed == 0)
    flag=1;
  ans = dist/(cspeed+wspeed);
  if(ans<0 || flag)
    printf("Impossible\n");
  else
    printf("%.6lf\n",ans);
  return 0;
}