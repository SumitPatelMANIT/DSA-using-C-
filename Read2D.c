#include<stdio.h>
int main(){
    int a[3][3];
    printf("Enter the element in Matrix\n");
    for(int i=0;i<3;i++)
    { 
       for(int j=0;j<3;j++)
         scanf("%d",&a[i][j]);
        
    }
    printf("\nMatrix is\n");
     for(int i=0;i<3;i++)
    { 
       for(int j=0;j<3;j++)
         printf("%d ",a[i][j]);
        printf("\n");
    }
       
}