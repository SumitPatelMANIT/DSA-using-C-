#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int scholar;
  struct Node *next;
} *Head = NULL, *Current = NULL, *Previous = NULL, *NewNode = NULL, *Temp = NULL;

int main()
{
  int x, y, sch, element;

  while (1)
  {
    printf("Enter choice:\n");
    printf("1. Insert    2. Delete    3.Display    4. Exit   :");
    scanf("%d", &x);
    if (x != 4)
    {
      switch (x)
      {
      case 1:
        printf("Enter choice:\n");
        printf("1. Insert First    2. In Between    3.Last  :");
        scanf("%d", &y);
        switch (y)
        {
        case 1: // Insertion at first Node;
          printf("Enter scholar number:");
          scanf("%d", &sch);
          NewNode = (struct Node *)malloc(sizeof(struct Node));
          NewNode->scholar = sch;
          NewNode->next = NULL;

          if (Head == NULL)
          {
            Head = NewNode;
            Current = Head;
            Previous = NULL;
          }
          else
          {
            Current = Head;
            Previous = Head;
            Head = NewNode;
            NewNode->next = Current;
          }
          break;
        case 2: // Insertion at In Between Node;
        Ilable:
          printf("Enter element where we have to insert :");
          scanf("%d", &element);
          printf("Enter scholar number :");
          scanf("%d", &sch);
          NewNode = (struct Node *)malloc(sizeof(struct Node));
          NewNode->scholar = sch;
          NewNode->next = NULL;
          Previous = NULL;
          Current = Head;
          while (Current->scholar != element)
          {
            Previous = Current;
            Current = Current->next;
            // If entered element not found in the linklist.
            if (Current->next == NULL && Current->scholar != element)
            {
              printf("Element not found Enter Correct element:\n");
              goto Ilable;
            }
          }
          if (Previous == NULL)
          {
            Current = Head;
            Head = NewNode;
            NewNode->next = Current;
          }
          else
          {
            Previous->next = NewNode;
            NewNode->next = Current;
          }
          break;
        case 3: // Insetion at Last Node;
          printf("Enter scholar number :");
          scanf("%d", &sch);
          NewNode = (struct Node *)malloc(sizeof(struct Node));
          NewNode->scholar = sch;
          NewNode->next = NULL;
          Previous = NULL;
          Current = Head;
          while (Current->next != NULL)
          {
            Previous = Current;
            Current = Current->next;
          }
          Current->next = NewNode;
          Previous = Current;
          Current = Current->next;

          break;
        default:
          printf("Enter valid choice\n");
          break;
        }
        // Break of Insertion
        break;

      case 2:
        printf("Enter choice:\n");
        printf("1. Delete First    2. In Between    3.Delete Last  :");
        scanf("%d", &y);
        switch (y)
        {
        case 1: // Delet First element.
          Previous = NULL;
          Current = Head->next;
          Temp = Head;
          Head = Current;
          free(Temp);
          break;
        case 2: // Delete In Between element.
        Dlable:
          printf("Enter element where we have to Delete :");
          scanf("%d", &element);
          Previous = NULL;
          Current = Head;
          while (Current->scholar != element)
          {
            Previous = Current;
            Current = Current->next;
            // If entered element not found in the linklist.
            if (Current->next == NULL && Current->scholar != element)
            {
              printf("Element not found Enter Correct element:\n");
              goto Dlable;
            }
          }
          if (Previous == NULL)
          {
            Current = Current->next;
            Temp = Head;
            Head = Current;
            free(Temp);
          }
          else if (Current->next == NULL)
          {
            Temp = Current;
            Previous->next = NULL;
            free(Temp);
          }
          else
          {
            Temp = Current;
            Current = Current->next;
            Previous->next = Current;
            free(Temp);
          }
          break;
        case 3: // Deletion of element;
          Previous = NULL;
          Current = Head;
          while (Current->next != NULL)
          {
            Previous = Current;
            Current = Current->next;
          }
          Temp = Current;
          Previous->next = NULL;
          free(Temp);

          break;
        default:
          printf("Enter valid choice\n");
          break;
        }

        break;

      case 3: // Display element
        NewNode = Head;
        printf("Display Data:\n");
        while (NewNode != NULL)
        {

          printf("Scholar Number=%d\n", NewNode->scholar);
          NewNode = NewNode->next;
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
