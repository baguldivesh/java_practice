#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

//PUSH Operaton
void push(int value)
{
	if (top == MAX - 1)
	{
		printf("Stack Overflow!\n");
    }
     else
     {
     	  top++;
     	  stack[top] = value;
     	  printf("%d pushed into stack\n", value);
}
}

//POP Operation
void pop()
{
      if(top == -1)
      {
      	  printf("Stack Underflow!\n");
      }
      else
      {
      	 printf("Popped element: %d\n",stack[top]);
      	 top--;
      }
  }
  
  //PEEK Operation
  void peek()
  {
  	if(top == -1)
  	{
  		printf("Stack is Empty!\n");
  	}
  	else
  	{
  		printf("Top elements: %d\n",stack[top]);
  }
}

//DISPLAY operation
 void display()
 {
 	int i;
 	
 	if(top == -1)
 	{
 		printf("Stack is empty!\n");
 }
 else
 {
 	  printf("Stack elements are:\n");
 	  
 	  for (i = top; i >= 0; i--)
 	  {
 	  	 printf("%d\n", stack[i]);
 	  }
 }
}

int main()
{
	push(10);
	push(20);
	push(30);
	
	display();
	
	peek();
	
	pop();
	
	display();
	
	return 0;
}

