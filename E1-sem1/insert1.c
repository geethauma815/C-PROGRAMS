#include<stdio.h>
#include<stdlib.h>
void insertbeg();
void insertend();
void insertpos();
void display();
struct node
{
int data;
struct node *next;
}*header,*new,*ptr;
void main()
{
header=NULL;
ptr=header;
printf("1.insertbeg\n 2.insertend\n 3.insertend\n 4.display\n 5.exit\n");
int ch;
printf("enter the choice\n");
scanf("%d",&ch);
while(ch)
{
new=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
new->next=NULL;
if(header==NULL)
{
ptr=header=new;
}
else
{
ptr->next=new;
ptr=new;
}
printf("do you want countinue\n);
scanf("%d",&ch);
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
while(ch!=5)
{
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insertbeg();
break;
case 2:insertend();
break;
case 3:insertpos();
break;
case 4:display();
break;
case 5:printf("exit");
break;
defult:printf("invallid choice");
}
}
}
}
void insertbeg()
{
new=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
if(header==NULL)
{
new->next=NULL;
header=new;
}
else
{
new->next=header;
header=new;
}
}
void insertend()
{
ptr=header;
new=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
new->next=NULL;
if(header==NULL)
{
new->next=NULL;
header=new;
}
else
{
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
new->next=NULL;
ptr->next=new;
}
}
void insertpos()
{
ptr=header;
int i,pos;
printf("enter the position where we insert the newnode\n");
scanf("%d",&pos);
new=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
if(header==NULL)
{
new->next=NULL;
header=new;
}
else
{
for(i=1;i<pos-1;i++)
{
ptr=ptr->next;
}
new->next=ptr->next;
ptr->next=new;
}
}
void display()
{
if(header==NULL)
{
printf("list is empty\n");
}
else
{
for(ptr=header;ptr->next!=NULL;ptr=ptr->next)
{
printf("%d",ptr->data);
}
}
}
