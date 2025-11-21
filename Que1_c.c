#include<stdio.h>
int main(){
    int n,small;
    printf("Enter number of element=");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers=");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    small=a[0];
    for(int i=0;i<n;i++)
        if(a[0]>=a[i] && small>=a[i])
             small=a[i];
    for(int i=0;i<n;i++)
        if(a[i]%small==0)
         a[i]+=3;
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}