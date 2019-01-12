#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct{
    char dname[30],fname[30][30];
    int fcnt;
}dir[10];

void main(){
    int dcnt = 0,choice,i,j;
    char d[30],f[30],command[30];
    while(1){
        printf("1.create directory\n2.create file\n3.delete file\n4.search file\n5.display files\n6.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the name of directory\n");
            scanf("%s",dir[dcnt].dname);
            dir[dcnt].fcnt = 0;
            dcnt++;
            printf("directory created\n");
            break;
            case 2:
            printf("enter the name of directory\n");
            scanf("%s",d);
            for(i=0;i<dcnt;i++){
                if(strcmp(d,dir[i].dname)==0){
                    printf("enter name of file\n");
                    scanf("%s",dir[i].fname[dir[i].fcnt]);
                    dir[i].fcnt++;
                    printf("file created");
                    break;
                }
                
            }
            if(i==dcnt){
                printf("directory not exists\n");
            }
            break;
            case 3:
            printf("enter the name of directory\n");
            scanf("%s",d);
            for(i=0;i<dcnt;i++){
                if(strcmp(d,dir[i].dname)==0){
                    printf("enter name of file\n");
                    scanf("%s",f);
                    for(j=0;j<dir[i].fcnt;j++){
                        if(strcmp(f,dir[i].fname[j])==0){
                            printf("file deleted\n");
                            strcpy(dir[i].fname[j],dir[i].fname[dir[i].fcnt-1]);
                            dir[i].fcnt--;
                            break;
                        }
                    }
                }
                
            }
            if(i==dcnt){
                printf("directory not exists\n");
            }
            break;
            case 4:
            printf("enter the name of directory\n");
            scanf("%s",d);
            for(i=0;i<dcnt;i++){
                if(strcmp(d,dir[i].dname)==0){
                    printf("enter name of file\n");
                    scanf("%s",f);
                    for(j=0;j<dir[i].fcnt;j++){
                        if(strcmp(f,dir[i].fname[j])==0){
                          printf("file found\n");
                          break;
                        }
                    }
                    if(j==dir[i].fcnt){
                        printf("file not found\n");
                        break;
                    }
                }
                
            }
            if(i==dcnt){
                printf("directory not exists\n");
            }
            break;
            case 5:
            if(dcnt==0){
                printf("No directory exists\n");
                break;
            }
            for(i=0;i<dcnt;i++){
                printf("\n%s",dir[i].dname);
                for(j=0;j<dir[i].fcnt;j++){
                    printf("\t%s",dir[i].fname[j]);
                }
            }
            break;
            default:exit(0);

        }
    }
}