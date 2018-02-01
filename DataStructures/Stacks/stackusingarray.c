#include<stdio.h>

int stk[50];
int top;
void push();
void pop();
void max();
void display();


int main()
{
	//Stck stack;
	top=-1;
	int c;
	do{
  printf("Enter the operation You want to Perform:\n");
  printf("\n1.PUSH\n");
  printf("\n2.POP\n");
  printf("\n3.DISPLAY\n");
  printf("\n4.Maximum element");
  int choice;
  scanf("%d",&choice);
  switch(choice)
  {
  	case 1: push();
  	        break;
  	case 2: pop();
  	       break;
  	case 3: display();
  	        break;
  	case 4: max();
  	        break;
  }
  printf("\nDo you wanna perform more(1 for Y||2 for N)");
  scanf("%d",&c);
  }while(c==1);
  return 0;
}

void push()
{
	int x;
	printf("Enter the Item You want to Push:\n");
	scanf("%d",&x);

	if(top>49)
	{
		printf("Stack OverFlow\n");
		return;
	}
	else
	{
		top++;
		stk[top]=x;
	}
}

void max()
{
	int largest;
	largest=stk[0];
	for(int i=0;i<=top;i++)
	{
      if(largest<stk[i])
      largest=stk[i];   
	}
	printf("\nThe largest element is:%d",largest);
}

void display()
{

	if(top<0)
	{
		printf("\nStack is Empty");
		return;
	}
   else
   {
   	for(int i=top;i>=0;i--)
   	{
   		printf("%d\n",stk[i]);
   	}
   }
}
void pop()
{
	if(top<=-1)
	{
		printf("Stack UnderFlow\n");
		return;
	}
	else
	{
		printf("\nThe popped elements are:%d",stk[top]);
		top--;
	}
}


