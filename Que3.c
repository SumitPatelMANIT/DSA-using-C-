#include<stdio.h>
int main(){
    int matrix[5][5];
    printf("Memory location:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        printf("%d ",&matrix[i][j]);
        printf("\n");
    }
    return 0;
}