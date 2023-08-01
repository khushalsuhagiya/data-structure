#include<stdio.h>
#define n 5
int a[n];
int f=-1,r=-1,i;
void display()
{
    if(f==-1)
       printf("Array is Empty...");
    if(f<=r)
    {
       for(i=f;i<=r;i++)
       {
        printf("%d \t",a[i]);
       }
    }
    else{
        for(i=f;i<n;i++)
         {
        printf("%d \t",a[i]);
         }
          for(i=0;i<=r;i++)
         {
        printf("%d \t",a[i]);
         }
    }
    printf("\n");
}
void efront(int val)
{
    if(f==0 && r==n-1 || (r==f-1) % (n-1))
       printf("Quue is full");
    else if(f==-1)
    {
        f=0;
        r=0;
    } 
    else if(f==0) 
    { 
      f=n-1;
    }
    else
    {
        f=f-1;
        a[f]=val;
        
    }  
     a[f]=val;
}
void erear(int val)
{
     if(f==0 && r==n-1 || (r==f-1) % (n-1))
       printf("Quue is full"); 
      else if(f==-1)
    {
        f=0;
        r=0;
    } 
    else if(r==n-1)  
    {
        r=0;
    }
    else
    {
        r=r+1;
    }
     a[f]=val;
}
void dfront()
{
   int v;
   if(f==-1)
     printf("Queue is empty");
   v=a[f];
   if(f==r)
   {
    f=r=-1;

   }
   else if(f==n-1)
   {
    f=0;
   }
   else
   {
    f=f+1;
   }
}
void drear()
{
    int v;
   if(f==-1)
     printf("Queue is empty");
   v=a[f];
    if(f==r)
   {
    f=r=-1;

   }
   else if(r==0)
   {
    r=n-1;
   }
   else
   {
    r=r-1;
   }
}
void main()
{
  
    display();
    erear(40);
      display();
      dfront();
      display();
}