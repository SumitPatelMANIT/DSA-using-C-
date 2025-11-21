#include<stdio.h>
int main(){
    int a[4][4];
    printf("Enter the matrix of 4x4\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            scanf("%d",&a[i][j]);

    }
    printf("Interchange row 1 and 2 Matrix\n");
     for(int i=0;i<4;i++)
       {
          for(int j=0;j<4;j++)
          {
            if(i==0)
            
            printf("%d ",a[1][j]);
            else if(i==1)
            printf("%d ",a[0][j]);
            else
            printf("%d ",a[i][j]);

          }
         printf("\n");
       }
      printf("Interchange row 3 and 4 Matrix\n");
     for(int i=0;i<4;i++)
       {
          for(int j=0;j<4;j++)
          {
            if(i==2)
            printf("%d ",a[3][j]);
            else if(i==3)
            printf("%d ",a[2][j]);
            else
            printf("%d ",a[i][j]);

          }
         printf("\n");
       }
}