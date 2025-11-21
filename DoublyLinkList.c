#include<stdio.h>
#include<stdlib.h>
struct Node{
    int scholar;
    struct Node *far;
    struct Node *back;
}*First,*L1,*L2,*L3,*L4,*L5,*L6,*Temp;
int main(){
    //Constructing 5 Nodes
   L1=(struct Node*)malloc(sizeof(struct Node));
   L1->scholar=37;
   L1->back=NULL;
   L1->far=NULL;
   First=L1;

   L2=(struct Node*)malloc(sizeof(struct Node));
   L2->scholar=38;
   L2->back=L1;
   L2->far=NULL;
   L1->far=L2;

   L3=(struct Node*)malloc(sizeof(struct Node));
   L3->scholar=39;
   L3->back=L2;
   L3->far=NULL;
   L2->far=L3;
   
   L4=(struct Node*)malloc(sizeof(struct Node));
   L4->scholar=40;
   L4->back=L3;
   L4->far=NULL;
   L3->far=L4;
 
   L5=(struct Node*)malloc(sizeof(struct Node));
   L5->scholar=41;
   L5->back=L4;
   L5->far=NULL;
   L4->far=L5;
   //Display Data in 5 Nodes
   Temp=First;
   while(Temp!=NULL)
   {
    printf("%d<=>",Temp->scholar);
    Temp=Temp->far;
   }
   printf("\nAfter insertion one element\n");
   //Insert One Node;
     L6=(struct Node*)malloc(sizeof(struct Node));
     L6->scholar=42;
     L3->far=L6;
     L6->back=L3;
     L6->far=L4;
     L4->back=L6;

      Temp=First;
   while(Temp!=NULL)
   {
    printf("%d<=>",Temp->scholar);
    Temp=Temp->far;
   }
   //Delete One Node;
   Temp=L6;
   L3->far=L4;
   L4->back=L3;
   free(Temp);

printf("\nAfter Deletion of element:\n");
   Temp=First;
   while(Temp!=NULL)
   {
    printf("%d<=>",Temp->scholar);
    Temp=Temp->far;
   }
    return 0;
}