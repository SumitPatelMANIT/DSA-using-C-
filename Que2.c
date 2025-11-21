#include<stdio.h>
int main()
{
    int matrix[3][3],TrMatrix[3][3];
    printf("Enter element in matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        scanf("%d",&matrix[i][j]);
     for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        TrMatrix[j][i]=matrix[i][j];
    printf("Transpose of Matrix:\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",TrMatrix[i][j]);
       printf("\n");
    }
    return 0;
}