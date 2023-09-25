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

struct Node * delete_first(struct Node * head)
{
    struct Node * p = head;
    head = head -> next;
    free(p) ;
    return head;
}

struct Node * delete_index(struct Node * head, int index)
{   
    struct Node * p = head;
    int i = 0;
    while(i != index - 1)
    {
        p = p -> next;
        i++;
    }
    struct Node * q = p->next;
    p -> next = q->next;
    free(q);
    return head;
}

struct Node * delete_end(struct Node * head)
{   
    struct Node * p = head;
    struct Node * q = p-> next;
    while(q->next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    return head;
}

struct Node * delete_after(struct Node * head, struct Node * prevNode)
{   
    struct Node * p = prevNode -> next;
    prevNode -> next = p -> next;
    free(p);
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
    //head= delete_first(head);
    // head= delete_index(head,1);
    //head= delete_end(head);
    head= delete_after(head,head);
    printf("\n");
    traverse(head);

    return 0;
}