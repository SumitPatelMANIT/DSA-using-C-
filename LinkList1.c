#include<stdio.h>
#include<stdlib.h>
struct Node{
    int scholar;
    struct Node *next;
} *first,*l1,*l2,*l3;
int main(){
  l1=(struct Node*)malloc(sizeof(struct Node));
  l1->scholar=137;
  l1->next=NULL;
  first=l1;
  l2=(struct Node*)malloc(sizeof(struct Node));
  l2->scholar=138;
  l2->next=NULL;
  l1->next=l2;
  l3=(struct Node*)malloc(sizeof(struct Node));
  l3->scholar=139;
  l3->next=NULL;
  l2->next=l3;
  while(first!=NULL)
  {
    printf("Scholar No=%d\n",first->scholar);
     first=first->next;
  }
   return 0;
}