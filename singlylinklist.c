#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void deleteStart(struct node **head)
{
    struct node *temp=*head;
    if(*head==NULL)
    {
        printf("linkedlist empty");
        return;
    }
    *head=(*head)->next;
    printf("\n%d deleted\n", temp->data);
    free(temp);
    }
    void insertStart(struct node **head,int data)
    {
        struct node *newnode=(struct node *) malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=*head;
        *head=newnode;
        printf("\n%d Inserted\n",newnode->data);
    }



     void display(struct node *node)
     {
        printf("\nLinked List:");
        while (node !=NULL)
        {
            printf("%d",node->data);
            node=node->next;
        }   
    printf("\n");
    } 
    int main()
    {
        struct node *head=NULL;
        insertStart (&head,100);
        insertStart (&head,80);
        insertStart (&head,50);
        insertStart (&head,40);
        insertStart (&head,30);
        display (head);
        deleteStart(&head);
        deleteStart(&head);
        display(head);
        return 0;
}