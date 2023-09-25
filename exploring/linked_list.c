#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct Node
{
    int data;
    struct Node * next;
};

struct Node * insert_first(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    head = ptr; 
}

struct Node * insert_index(struct Node * head, int data, int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!= index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next= p->next;
    ptr->data = data;
    p->next = ptr;
    return head;
}

struct Node * insert_end(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr -> next = NULL;
    p -> next = ptr;
    return head;
}

struct Node * insert_after(struct Node * head,struct Node * prevNode, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

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

//Allocate memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

//link first and second node
    head->data = 7;
    head->next = second;
    
    second->data = 11;
    second->next = third;
    
    third->data = 66;
    third->next = NULL;
    
    traverse(head);

    //head = insert_first(head,22);
    // head = insert_index(head, 56,2);
    //head = insert_end(head, 56);
    head = insert_after(head,third, 24);
    printf("\n");
    traverse(head);

    return 0;
}