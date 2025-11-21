#include<stdio.h>
#include<stdlib.h>

struct Node{
        int scholar;
        struct Node *next;
}*Head=NULL,*Current=NULL,*Previous=NULL,*NewNode=NULL,*Temp=NULL;

int main()
{
   int x,y,sch,element;
  
   while(1){
      printf("Enter choice:\n");
      printf("1. PUSH    2. POP    3.Display    4. Exit   :");
      scanf("%d",&x);
      if(x!=4)
      {
      switch(x)
      {
        case 1:    //PUSH element on TOP.
                             printf("Enter scholar number:");
                             scanf("%d",&sch);
                             NewNode=(struct Node*)malloc(sizeof(struct Node)); 
                             if(NewNode==NULL)
                             {
                                printf("Stach is overflow:\n");
                             }
                             else {
                             NewNode->scholar=sch;
                             NewNode->next=NULL;

                             if(Head==NULL)
                             {
                             Head=NewNode;
                             Current=Head;
                             Previous=NULL;
                             }
                             else
                             {
                              Current=Head;
                              Previous=Head;
                              Head=NewNode;
                              NewNode->next=Current;
                             }
                            }
                           //Break of  PUSH
                             break;
                
        case 2:           // POP of TOP element
                            if(Current==NULL)
                            {
                                printf("Stach is Underflow:\n");
                            } 
                            else if(Head->next==NULL)
                             {
                                 Temp=Head;
                                Head=NULL;
                                 Current=NULL;
                                 Previous=NULL;
                                 free(Temp);
                             }
                             else{
                             Previous=NULL;
                             Current=Head->next;
                             Temp=Head;
                             Head=Current;
                              free(Temp);
                             }
                              break;
                             

        case 3: //Display element
                  NewNode=Head;
                 printf("Display Data:\n");
                  while(NewNode!=NULL)
                  { 
                   
                    printf("Scholar Number=%d\n",NewNode->scholar);
                     NewNode=NewNode->next;

                  }
                  break;
        case 4: // outside loop.
                 return 0;
                 break;
      }
    }
    else
    {
        break;
    }

   }
}   




