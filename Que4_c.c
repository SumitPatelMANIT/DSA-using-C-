#include<stdio.h>
int main(){
    char str[50];
    
    printf("Enter the string=");
    fgets(str,50,stdin);
    for(int i=0;str[i]!='\0';i++)
        str[i]='*';
    printf("String is=%s",str);
    return 0;
}