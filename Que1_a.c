#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers=");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Alternate Numbers=");
    for(int i=0;i<n;i+=2)
    printf("%d ",a[i]);
    return 0;
}