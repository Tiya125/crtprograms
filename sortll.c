#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*start=NULL;
int count=0;
void create();
//void delete4(int val);
//void insert(int pos);
//int search(int val);
void display();
 //void sort();
 void swap(struct node *a, struct node *b);
void bubbleSort(struct node *start) ;
void main()
{
  int ch,pos,val,found;
  while(1)
{
  printf("1.create 2.display enter your choice:");
  scanf("%d",&ch);
  switch(ch)
{
  case 1: create();
  bubbleSort(start);
  break;
  case 2: display();
  break;
  default:exit(0);
 /* case 2: printf("enter the val:");
  scanf("%d",&pos);
  delete4(pos);
  break;
  
  case 5: printf("enter the pval:");
  scanf("%d",&pos);
  found=search(pos);
  if(found==-1)
  printf("not found");
  else
  printf("%d",found);
  break;
  case 4:printf("enter the pos:");
  scanf("%d",&pos);
  insert(pos);
  break;*/
}
}
}
void create()
{
  int ch;//count=0;
  struct node *newnode,*temp;
  do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    count++;
    if(start==NULL)
    {
      start=newnode;
    }
    else
    {
      temp=start;
      while(temp->next!=NULL)
      temp=temp->next;
      temp->next=newnode;

    }
    printf("1 to continue:");
    scanf("%d",&ch);

  }while(ch==1);

}
void display()
{
struct node *temp=start;
if(start==NULL)
printf("empty sll");
do{
  printf("%d \t",temp->data);
  temp=temp->next;

}while(temp!=NULL);
}

void bubbleSort(struct node *start) 
{ 
    int swapped, i; 
    struct node *ptr1; 
    struct node *lptr = NULL; 
  
    /* Checking for empty list */
    if (start == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 
  
/* function to swap data of two nodes a and b*/
void swap(struct node *a, struct node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 
