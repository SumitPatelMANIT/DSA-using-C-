#include<stdio.h>
int main(){
    char str[50];
    int count=0;
    printf("Enter the string=");
    fgets(str,50,stdin);
    for(int i=0;str[i]!='\0';i++)
    count++;
    printf("Number of Charecter=%d",count-1);
    return 0;
}