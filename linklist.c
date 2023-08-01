#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void display()
{
    struct node *ptr = head;
    if (head == NULL)
        printf("list is empty.....");
    else{
        while (ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");  
    }    
}

void insertend()
{
    int val;
    printf("Enter a value");
    scanf("%d", &val);
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return; 

}
 void deletend()
 {
    struct node *ptr = head;
    struct node *p;
    if (head == NULL)
        printf("list is empty");
    while (ptr->next !=NULL)
    {
      p = ptr;
      ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
 }
 void firstInsert()
{
    int val;
    printf("Enter a value");
    scanf("%d", &val);
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    temp->next=head;
    head=temp;
    return;
}
void firstDelete()
{
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
       
    }     
}
void midInsert()
{
    int val, pos;
    printf("Enter a value");
    scanf("%d", &val);   
    struct node *ptr = head, *temp = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
       
        temp->data = val;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("%d",&pos);  
        while(ptr->data != pos)
                ptr = ptr->next;
        temp ->next = ptr->next;
        ptr->next= temp;
       
    }  
    
    
    
}
void midDelete()
{
    int pos;   
    struct node *ptr = head, *temp;  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {    
        printf("\nEnter the location after which you want to insert ");  
        scanf("%d",&pos);  
        while(ptr->data != pos)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        free(ptr);
       
    }  
}

 int main()
 {
    int choice;
    printf("1.First in.......\n");
    printf("2.First delet.......\n");
    printf("3.mid in.......\n");
    printf("4.mid delet.......\n");
    printf("5.lest in.......\n");
    printf("6.lest delet.......\n");
    printf("7. display\n");
    printf("0. exit\n");
    
    do
    {
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                firstInsert();
                break;
            case 2:
                firstDelete();
                break;
            case 3:
                midInsert();
                break;
            case 4:
                midDelete();
                break;
            case 5:
                insertend();
                break;
            case 6:
                deletend();
                break;
            case 7:
                display();
                break;
            case 0: 
                break;
            default:
                printf("Wrong choice enter....\n");
                break;
        }
    } while (choice !=0);
}
