#include<stdio.h>
     int stack[5],top=-1;

    void push(int x){
        if(top==5)
        printf("Stack is Overflow:\n");
        else
        top++;
        stack[top]=x;
    }
    void pop(){
        if(top==-1)
        printf("Stack is Underflow:\n");
        else
       x=stack[top]='\0';
        top--;
    }
    int peek(){
    return top;
    }
    void display(){
       for(int i=top;i>=0;i--)
       {
        printf("%d\n",stack[i]);
       }
 }
 