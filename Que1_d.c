#include<stdio.h>
int main(){
    int n;
    printf("Enter number of element=");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers=");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n-1;i+=2)
    {
       a[i]=a[i]+a[i+1];
       a[i+1]=a[i]-a[i+1];
       a[i]=a[i]-a[i+1];
    }
    printf("Element are=");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}