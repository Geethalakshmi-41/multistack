#include<stdio.h>
#include"multi_stack.h"
int main()
{
	int n,ch,size;
	printf("enter the size:");
	scanf("%d",&size);
	create_size(size);
	do
		{
			printf("\nenter the choice\n1.push to stack1\n2.push to stack2\n3.pop from stack1\n4.pop from stack2\n");
			scanf("%d",&ch);
			switch(ch)
				{
					case 1:
						{
							printf("enter the value to be pushed in stack1:");
							scanf("%d",&n);
							push_stack1(n);
							break;
						}
					case 2:
						{
							printf("enter the value to be pushed in stack2:");
							scanf("%d",&n);
							push_stack2(n);
							break;
						}
					case 3:
						{
							pop_stack1();
							break;
						}
					case 4:
						{
							push_stack2(n);
							break;
						}
					default: printf("entered wrong choice");
				}
		}while(ch!=4);
}
