#include<stdio.h>
int main(){
    char str[50];
    int size=-1;
    printf("Enter the string=");
    fgets(str,50,stdin);
    for(int i=0;str[i]!='\0';i++)
      size++; 
      for(int i=0;i<=size/2;i++)
      {
        char ch;
        ch=str[i];
        str[i]=str[size-i];
        str[size-i]=ch;
      }
        printf("%s",str);
    return 0;
}