#include<stdio.h>
int d=0;
void digit(int);
int main(){
    int x;
    printf("Enter a number=");
    scanf("%d",&x);
    digit(x);
    if(d==4)
    printf("yes 4 digit number");
    else
     printf("Not 4 digit number");
    return 0;

}
void digit(int x)
{
    if(x==0)
        return;
    else
    {
        digit(x/10);
        d++;
    }
}