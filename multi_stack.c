#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
int size,*a;
int top1,top2;
void create_size(int s)
{
	size=s;
	a=malloc(sizeof(size));
}
bool isempty()
{
	if(top1==-1 && top2==size)
		return true;
	else
		return false;
}
bool isfull()
{
	if(top1==top2-1)
		return true;
	else
		return false;
}
void push_stack1(int data)
{	
	if(isfull())
		printf("stack full:");
	else
		a[++top1]=data;
}
void push_stack2(int data)
{	
	if(isfull())
		printf("stack full:");
	else
		a[--top2]=data;
}
int pop_stack1()
{
	if(isempty())
		printf("empty stack:");
	else
		return a[top1--];		
		
}
int pop_stack2()
{
	if(isempty())
		printf("empty stack:");
	else
		return a[top2++];		
		
}
