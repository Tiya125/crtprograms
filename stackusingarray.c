#include <stdio.h>

#define MAX 50

void push(int x);

void pop();

void display();

void peek();
int a[MAX];
int top=-1;

int main()

{

    int a[MAX];

    int ch,x;
    do{

    printf("1.push 2.pop 3.peek 4.display 5.exit");

    printf("enter the choice:");
 
   scanf("%d",&ch);
 
   switch(ch)

    {
 
       case 1:printf("enter the num to insertt:");
 
       scanf("%d",&x);

        push(x);
        break;

        case 2: 
  
      pop();
      break;
 
       case 3:peek();break;

       // case 4:display();
    
    case 4:exit(0);
    
    default:printf("invalid choice");
  
      }
    }while(ch!=5);


    return 0;

}

void push(int x)

{

    if(top==MAX-1)
 
   printf("stack overflow");

    else
 
   {
 
       a[++top]=x;

    }

}

void pop()

{

    if(top==-1)

    printf("stack underflow");

    else

    {

    printf("del num is %d",a[top]);

    top--;
   
 }

}
void peek()
{
        if(top==-1)
    printf("stack is empty");
    else
    printf("the top element is:%d",a[top]);
}
