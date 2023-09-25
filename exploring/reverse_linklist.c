#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

struct Node* Reverse(struct Node * head)
{
    struct Node *prev = NULL;
    struct Node *forw = NULL;
    while (head != NULL)
    {
        forw = head -> next;
        head -> next = prev;
        prev = head;
        head = forw;
    }
    head = prev;
    return head;    
};


void traverse(struct Node * ptr)
{
    while(ptr != NULL)
    {printf("%d ",(ptr->data));
    ptr = ptr-> next;}
}

int main()
{   
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

//Allocate memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

//link first and second node
    head->data = 7;
    head->next = second;
    
    second->data = 11;
    second->next = third;
    
    third->data = 66;
    third->next = fourth;

    fourth->data = 77;
    fourth->next = NULL;

    traverse(head);
    printf("\n");
    head = Reverse(head);
    traverse(head);
}