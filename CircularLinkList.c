#include<stdio.h>
#include<stdlib.h>

struct Node{
        int scholar;
        struct Node *next;
}*Head=NULL,*Current=NULL,*Previous=NULL,*NewNode=NULL,*Temp=NULL,*Last=NULL;

int main()
{
   int x,y,sch,element;
  
   while(1){
      printf("Enter choice:\n");
      printf("1. Insert    2. Delete    3.Display    4. Exit   :");
      scanf("%d",&x);
      if(x!=4)
      {
      switch(x)
      {
        case 1: printf("Enter choice:\n"); 
                printf("1. Insert First    2. In Between    3.Last  :");
                scanf("%d",&y);
                switch(y)
                {
                   case 1:   //Insertion at first Node;
                             NewNode=(struct Node*)malloc(sizeof(struct Node));
                             printf("Enther the scholar number:");
                             scanf("%d",&x);
                             NewNode->scholar=x;
                             if(Head==NULL)
                             {
                                Head=NewNode;
                                Current=NewNode;
                                Last=Head;
                                Last->next=Head;
                             }
                             else{   
                                    if(Current==Head)
                                    {
                                        Previous=NewNode;
                                    }
                                   NewNode->next=Head;
                                   Head=NewNode;
                                   Last->next=Head;
                             }
                             break;
                   case 2:   //Insertion at In Between Node;
                             Ilable:
                             printf("Enter the element where want to insert:");
                             scanf("%d",&element);
                             printf("Enter the scholar number:");
                             scanf("%d",&x);
                             NewNode=(struct Node*)malloc(sizeof(struct Node));
                             NewNode->scholar=x;
                             struct Node *Position=Current;
                             while(Current->scholar!=element)
                             {
                                Previous=Current;
                                Current=Current->next;
                                if(Current==Position)
                                {
                                    printf("Element not fount enter right element:\n");
                                    goto Ilable;
                                }
                             }
                            Previous->next=NewNode;
                            NewNode->next=Current;
                             break;
                   case 3:   //Insetion at Last Node;
                             printf("Enter the scholar number:");
                             scanf("%d",&x);
                             NewNode=(struct Node*)malloc(sizeof(struct Node));
                             NewNode->scholar=x;
                             if(Previous==NULL)
                             {
                                Current->next=NewNode;
                                Last=NewNode;
                                Last->next=Head;
                                Current=Current->next;
                                Previous=Head;
                             }
                             else{
                             while(Current->next!=Last->next)
                             {
                                Current=Current->next;
                                Previous=Previous->next;
                             }
                              Previous=Previous->next;
                              Current->next=NewNode;
                              NewNode->next=Head;
                              Last=Current=Current->next;
                            }
                              break;
                   default:   printf("Enter valid choice\n"); 
                             break;                    
                            
                }
                //Break of Insertion
                break;
                
        case 2:  printf("Enter choice:\n"); 
                 printf("1. Delete First    2. In Between    3.Delete Last  :");
                 scanf("%d",&y);
                 switch(y){
                  case 1:  // Delet First element.
                            while(Current!=Head)
                            {
                                Previous=Current;
                                Current=Current->next;
                            }
                            Temp=Head;
                            Head=Current=Current->next;
                            Last->next=Current;
                            free(Temp);
                             break;
                  case 2:    // Delete In Between element.
                             Dlable:
                             printf("Enter element for deletion :");
                             scanf("%d",&element);
                            struct Node *Position=Current;
                               while(Current->scholar!=element)
                            {
                                Previous=Current;
                                Current=Current->next;
                               if(Current==Position)
                                {
                                    printf("Element not fount enter right element:\n");
                                    goto Dlable;
                                }
                            }  
                            if(Current==Head){
                               Temp=Head;
                            Head=Current=Current->next;
                            Last->next=Current;
                            free(Temp);
                            }
                            else if(Current==Last){
                              Temp=Current;
                            Current=Head;
                            Previous->next=Head;
                            Last=Previous;
                            free(Temp);
                            }
                            else{
                                Temp=Current;
                                Current=Current->next;
                                Previous->next=Current;
                                 free(Temp);
                            }
                             
                           break;
                  case 3:  // Deletion of element;
                              while(Current!=Last)
                            {
                                Previous=Current;
                                Current=Current->next;
                            }    
                            Temp=Current;
                            Current=Head;
                            Previous->next=Head;
                            Last=Previous;
                            free(Temp);
                               
                           break;
                  default: printf("Enter valid choice\n");
                           break;
                           }
        
        
                break;
        case 3:  //Display 
                 Current=Head;
                 printf("Display Data:\n");
                 do
                 { 
                   
                    printf("Scholar Number=%d\n",Current->scholar);
                      Current=Current->next;
                 }while(Current!=Head); 
                  break;
        case 4: // Out Side of loop;
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