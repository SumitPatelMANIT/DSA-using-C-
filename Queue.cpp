#include<iostream>
using namespace std;
class Queue{
    int queue[5],rear=-1,front=-1;
    public:
    void Enqueue(int x){
         if(isFull()==1)
         cout<<"\nQueue is full"<<endl;
        else
        {
            if(front==-1)
                front=0;
            
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
        }
    }
    int isFull(){
          if(rear>=5)
          return 1;
          else
          return 0;
    }
    int isEmpty(){
         if(front>rear)
         return 1;
         else
         return 0;
    }
    void display(){
          for(int i=front;i<=rear;i++)
          cout<<queue[i]<<" "; 
    }
};
int main(){
    Queue q;
    cout<<"Insert Display Queue"<<endl;
    q.Enqueue(5);
    q.Enqueue(3);
      q.Enqueue(10);
       q.Enqueue(20);
        q.Enqueue(2);
     q.display();
     cout<<"\nDeletion of element"<<endl;
     q.Dequeue();
     q.Dequeue();
     q.Dequeue();
      q.display();

    return 0;
}