#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers=");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Reverse order Numbers=");
    for(int i=n-1;i>=0;i--)
    printf("%d ",a[i]);
    return 0;
}