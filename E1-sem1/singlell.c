#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void insertion();
void deletion();
void display();
int choice,i,pos,item;
struct node
{
int data;
struct node*link;
}*header,*ptr,*ptr1,*new;
void main()
{
header=NULL;
ptr=header;
printf("***menu**");
printf("1.insertion,2.deletion,3.display,4.display\n");
while(1)
{
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1: insertion();
break;
case 2: deletion();
break;
case 3: display();
break;
case 4: exit(0);
break;
default:printf("invalid choice");
}
}
void insertion()
{
new=malloc(sizeof(struct node));
printf("enter the elements to be inserted");
scanf("%d",&item);
new->data=item;
if(header==NULL)
{
new->link=NULL;
header=new;
}
else
{
printf("enter the place to insert");
printf("1.start\n 2.middle\n 3.end\n");
scanf("%d",&choice);
if(choice==1)
{
new->link=header;
header=new;
}
if(choice==2)
{
ptr=header;
printf("enter the position where we have to insert");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
ptr=ptr->link;
new->link=ptr->link;
ptr->link=new;
}
if(choice==3)
{
ptr=header;
while(ptr->link!=NULL)
ptr=ptr->link;
new->link=NULL;
ptr->link=new;
}
}
}
void deletion()
{
ptr=header;
if(header==NULL)
printf("the list is empty");
else
{
printf("\n1 start\n2.middle\n3.end");
printf("enter the deleted element");
scanf("%d",&choice);
if(choice==1)
{
printf("deleted list:%d",ptr->data);
header=header->link;
}
if(choice==2)
{
printf("enter the position to be deleted");
scanf("%d",&pos);
for(i=0;i<pos-1;i++)
{
ptr1=ptr;
ptr=ptr->link;
}
printf("the deleted element:%d",ptr->data);
ptr1->link=ptr->link;
}
if(choice==3)
{
while(ptr->link!=NULL)
{
ptr1=ptr;
ptr=ptr->link;
}
printf("the deleted element list:%d",ptr->data);
ptr1->link=NULL;
}
}}
}
}
void display()
{
if(header=NULL)
printf("list is empty");
else
{
printf("the elements list");
for(ptr=header;ptr!=NULL;ptr=ptr->link)
printf("%d",ptr->data);
}
}


