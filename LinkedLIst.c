#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*Head = NULL;

void insert(int x){
     struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
     newNode->data = x;
     newNode->next = NULL;
    if(Head == NULL){
        Head = newNode;     
     }
     else{
         struct Node *curr = Head;
         while(curr->next != NULL){
             curr = curr->next;
         }
         curr->next = newNode;
     }       
}
void display(){
       int count = 1;
       struct Node *curr = Head;
       while(curr != NULL){
            if(count % 2 == 1){
                printf("%d->", curr->data);
            }
            else{
                printf(" ->");
            }
            count++;
            curr = curr->next;
       }
}
int main(){
      int n;
      printf("Enter nuber of element to insert: ");
      scanf("%d", &n);
      printf("Enter numbers : ");
      for(int i = 0; i < n; i++){
          int x;
          scanf("%d", &x);
          insert(x);
      } 
      display();
    return 0;
}