#include<stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int x,s=0,key=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    key=a[0];
    for(int i=0;i<x;i++)
    {
        if(key>a[i])
        {  
            s=key;
            key=a[i];
            
        }
    }
    printf("%d",key);
    return 0;
}