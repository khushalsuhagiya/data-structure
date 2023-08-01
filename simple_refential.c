#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main(){
    struct node a,b;
    a.data = 10;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 20;
    b.ch = 'Z';
    b.ptr = NULL;

    // printf("A data : %d  \tchar : %c", a.data,a.ch);
    // printf("\nb data : %d  \tchar : %c", b.data,b.ch);

    b.ptr = &a;
    printf("data: %d \tchar: %c", b.ptr->data, b.ptr->ch);

    a.ptr = &b;
    printf("\n\ndata: %d \tchar: %c", a.ptr->data, a.ptr->ch);
}