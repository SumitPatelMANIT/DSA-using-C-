#include<stdio.h>
#include<stdlib.h>
struct Node{
    int scholar;
    struct Node *far;
    struct Node *back;
}*First,*NewNode,*Current,*Privious,*Temp;
int main(){
    //Constructing 5 Nodes
   NewNode=(struct Node*)malloc(sizeof(struct Node));
   NewNode->scholar=37;
   NewNode->back=NULL;
   NewNode->far=NULL;
   Privious=NULL;
   Current=First=NewNode;

   NewNode=(struct Node*)malloc(sizeof(struct Node));
   NewNode->scholar=38;
   NewNode->back=Current;
   NewNode->far=NULL;
   Current->far=NewNode;
   Privious=NULL;
   Current=NewNode;

   NewNode=(struct Node*)malloc(sizeof(struct Node));
   NewNode->scholar=39;
   NewNode->back=Current;
   NewNode->far=NULL;
   Current->far=NewNode;
   Privious=NULL;
   Current=NewNode;

   NewNode=(struct Node*)malloc(sizeof(struct Node));
   NewNode->scholar=40;
   NewNode->back=Current;
   NewNode->far=NULL;
   Current->far=NewNode;
   Privious=NULL;
   Current=NewNode;

   NewNode=(struct Node*)malloc(sizeof(struct Node));
   NewNode->scholar=41;
   NewNode->back=Current;
   NewNode->far=NULL;
   Current->far=NewNode;
   Privious=NULL;
   Current=NewNode;

   //Display Data in 5 Nodes
   Temp=First;
   while(Temp!=NULL)
   {
    printf("%d<=>",Temp->scholar);
    Temp=Temp->far;
   }
//    printf("\nAfter insertion one element\n");
//    //Insert One Node;
//      L6=(struct Node*)malloc(sizeof(struct Node));
//      L6->scholar=42;
//      L3->far=L6;
//      L6->back=L3;
//      L6->far=L4;
//      L4->back=L6;

//       Temp=First;
//    while(Temp!=NULL)
//    {
//     printf("%d<=>",Temp->scholar);
//     Temp=Temp->far;
//    }
//    //Delete One Node;
//    Temp=L6;
//    L3->far=L4;
//    L4->back=L3;
//    free(Temp);

// printf("\nAfter Deletion of element:\n");
//    Temp=First;
//    while(Temp!=NULL)
//    {
//     printf("%d<=>",Temp->scholar);
//     Temp=Temp->far;
//    }
    return 0;
}