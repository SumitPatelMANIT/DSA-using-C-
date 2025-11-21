#include<stdio.h>
int main(){
    int a[4][4];
    printf("Enter the matrix of 4x4\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            scanf("%d",&a[i][j]);
          
    }
    printf("Interchange column 1 and 4 Matrix\n");
     for(int i=0;i<4;i++)
       {
          for(int j=0;j<4;j++)
          {
            if(j==0)
            
            printf("%d ",a[i][3]);
            else if(j==3)
            printf("%d ",a[i][0]);
            else
            printf("%d ",a[i][j]);

          }
         printf("\n");
       }
      printf("Interchange column 3 and 1 Matrix\n");
     for(int i=0;i<4;i++)
       {
          for(int j=0;j<4;j++)
          {
            if(j==0)
            
            printf("%d ",a[i][2]);
            else if(j==2)
            printf("%d ",a[i][0]);
            else
            printf("%d ",a[i][j]);

          }
         printf("\n");
       }
}