#include<stdio.h>
#include<stdlib.h>

/// NODE STRUCTURE
/// This structure represents a single node in the linked list.
/// It contains 'data' and a pointer 'next' pointing to the next node.
struct Node{
    int data;
    struct Node *next;
}*Head = NULL;   // Head pointer initially NULL (list is empty)


/// INSERT FUNCTION
/// This function inserts a node at the END of the linked list.
void insert(int x){

     // Creating a new node using dynamic memory allocation
     struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

     // Storing value in node
     newNode->data = x;
     newNode->next = NULL;

     // If linked list is empty, make newNode as Head
     if(Head == NULL){
        Head = newNode;     
     }
     else{
         // Otherwise, traverse to the last node
         struct Node *curr = Head;
         while(curr->next != NULL){
             curr = curr->next;   // Move forward in list
         }
         // Connect new node to the last node
         curr->next = newNode;
     }       
}


/// DISPLAY FUNCTION
/// This function prints nodes in style: 5-> ->3-> ->7-> ...
void display(){
       int count = 1;                 // Used to print arrows in pattern
       struct Node *curr = Head;      // Start from head

       // Traverse till end of list
       while(curr != NULL){

            // Print number only on odd count
            if(count % 2 == 1){
                printf("%d->", curr->data);
            }
            else{
                // Print just arrow on even count for design purpose
                printf(" ->");
            }

            count++;            // Increment position counter
            curr = curr->next;  // Move ahead
       }
}


int main(){

      int n;
      printf("Enter number of elements to insert: ");
      scanf("%d", &n);

      printf("Enter numbers: ");
      for(int i = 0; i < n; i++){
          int x;
          scanf("%d", &x);
          insert(x);   // Insert each entered number into linked list
      } 

      // Display the linked list
      display();
    return 0;
}
