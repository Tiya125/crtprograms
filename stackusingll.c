#include <stdio.h>
//#define MAX 50
void push(int x);
void pop();
//void display();
void peek();
//int top=-1;
//int a[MAX];
struct node
{
  int data;
  struct node *next;
}*top=NULL;
int main()
{
   // int a[MAX];
    int ch,x;
    do
    {
    printf("1.push 2.pop 3.peek  4.exit");
    printf("enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter the num to insertt:");
        scanf("%d",&x);
        push(x);
        break;
        case 2: 
        pop();break;
        case 3:peek();break;
    
        case 4:exit(0);
        default:printf("invalid choice");
        exit(0);
        }
    }while(ch!=4);

    return 0;
}
void push(int x)
{
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL)
  printf("stack overflow");
  else
  {
    newnode->data=x;
    newnode->next=top;
    top=newnode;

  }
    
}
void pop()
{
  struct node *temp=top;
    if(top==NULL)
    printf("stack underflow");
    else
    {
    printf("del num is %d",temp->data);
    top=top->next;
    free(temp);
    }
}
void peek()
{
  struct node *temp=top;
        if(top==NULL)
    printf("stack is empty");
    else
    printf("the top element is:%d",temp->data);
}
