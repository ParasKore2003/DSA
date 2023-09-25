#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

struct Node * counter(struct Node * head)
{
    struct Node * p = head;
    int i = 1;
    while (p->next != NULL)
    {
        p = p->next;
        i++;
    }
    return i;
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
    int value;
    value = counter(head);
    printf("%d",value);
    return 0;
}