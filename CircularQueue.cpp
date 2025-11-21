#include<iostream>
using namespace std;
class CircularQueue{
  //  int size=5;
    int queue[5],rear=-1,front=-1;
    public:
    void Enqueue(int x){
         if(isFull()==1)
         cout<<"\nQueue is full"<<endl;
        else
        {
            if(front==-1)
                front=0;
             if(rear==4)
                rear=-1;

                rear++;
                queue[rear]=x;
        }
    }
    void Dequeue(){
        if(isEmpty()==1)
        cout<<"\nQueue is empty"<<endl;
        else{
            queue[front]='\0';
            front++;
            if(front==5)
            front=0;
        }
    }
    int isFull(){
          if((rear==4&&front==0)||(rear==front-1))
          return 1;
          else
          return 0;
    }
    int isEmpty(){
         if(front==rear)
         return 1;
         else
         return 0;
    }
    void display(){
          for(int i=0;i<5;i++)
          cout<<queue[i]<<" "; 
    }
};
int main(){
    CircularQueue c;
    c.Enqueue(5);
    c.Enqueue(1);
    c.Enqueue(3);
   c.Enqueue(6);
    c.Enqueue(7);
    c.Dequeue();
    c.Dequeue();
    c.Dequeue();
    c.Enqueue(3);
   c.Enqueue(6);
      c.Enqueue(3);
       c.Dequeue();
    c.Dequeue();
      c.Enqueue(6);
         c.Dequeue();
    c.Dequeue();
      c.Enqueue(3);
   c.Enqueue(6);
    c.display();

    





    return 0;
}