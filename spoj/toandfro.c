#include <stdio.h>
#include <string.h>
int main(){
    int n,l;
    char str[200];
    while(1){
        scanf("%d",&n);
        if(n == 0){
            return 0;
        }
        scanf("%s",str);
        l = strlen(str)/n;
        int ans[l][n];
        int i,j,count;
        count = 0;
        for(i=0;i<l;++i){
            if(i%2==0){
                for(j=0;j<n;++j){
                    ans[i][j] = str[count++];
                }
            }else{
                for(j=n-1;j>=0;--j){
                    ans[i][j] = str[count++];
                }
            }
        }
        for(i=0;i<n;++i){
        for(j=0;j<l;++j){
            printf("%c",ans[j][i]);
            }
        }
        printf("\n");
    }
}