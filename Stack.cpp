#include<iostream>
using namespace std;
class Stack
{   
   int size=5;
    int stack[5],top=-1;
    public:
    void push(int x)
    {
       if(isFull()==1)
        cout<<"Stack is Overflow";
       else
       {
        top++;
        stack[top]=x;
       }
    }
    void pop()
    {
        if(isEmpty()==1)
            cout<<"Stack is Underflow";
        else
        {
          stack[top]='\0';
          top--;
        }

    }
    int peek()
    {
       return top;
    }
    int isEmpty()
    {
       if(top==-1)
       return 1;
       else
       return 0;
    }
    int isFull()
    {
       if(top>=size)
       return 1;
       else
       return 0;
    }
    void display()
    {
      for(int i=top;i>=0;i--)
        cout<<stack[i]<<endl;
    }
};
int main()
{
  Stack s;
     s.push(1);
     s.push(2);
     s.push(4);
     s.display();
     cout<<"Deletion of element:"<<endl;
     s.pop();
     s.pop();
     s.pop();
     s.display();
      return 0;
}