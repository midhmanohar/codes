#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct{
  char dname[10],fname[10][10];
  int fcnt;
}dir;

void main(){
  dir.fcnt = 0;
  char command[20];
  printf("Enter name of directory :");
  scanf("%s",dir.dname);
  strcpy(command,"mkdir ");
  strcat(command,dir.dname);
  system(command);
  int choice,i;
  char f[30];
  while(1)
  {
    printf("\n1.create file\n2.delete file\n3.search file\n");
    printf("4.display files\n5.exit\nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:printf("Enter the name of file:\n");
      scanf("%s",dir.fname[dir.fcnt]);
      strcpy(command,"cd ");
      strcat(command,dir.dname);
      strcat(command,";touch ");
      strcat(command,dir.fname[dir.fcnt]);
      system(command);
      dir.fcnt++;
      break;
      case 2:
      printf("enter the name of file:\n");
      scanf("%s",&f);
      for(i=0;i<dir.fcnt;i++){
          if(strcmp(f,dir.fname[i])==0){
              printf("%s file deleted\n",f);
              strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
              break;
          }
      }
      if(i==dir.fcnt){
          printf("file not found\n");
      }
      else{
          dir.fcnt--;
          break;
      }
      case 3:
      printf("Enter the name of file:\n");
      scanf("%s",&f);
      for(i=0;i<dir.fcnt;i++){
          if(strcmp(f,dir.fname[i])==0){
              printf("file %s found\n",f);
          }
      }
      if(i==dir.fcnt){
          printf("file %s not found\n",f);
      }
      break;
      case 4:
      if(dir.fcnt == 0){
          printf("directory empty\n");
      }
      else{
          printf("files are\n");
          for(i=0;i<dir.fcnt;i++){
              printf("\t%s",dir.fname[i]);
          }
      }
      break;
      default:exit(0);
    }
  }  
}