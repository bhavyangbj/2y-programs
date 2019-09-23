#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int a[SIZE];
int top1 = -1;
int top2 = SIZE;
void push1(int data);
void push2(int data);
void pop1();
void pop2();
void display1();
void display2();

int main()
{
  int a[SIZE];
  int i;
  int elements;
  int n;
  int opt;
  i:
  printf ("::::: We can push a total of 10 values :::::\n");
  printf("Operations: 0.Display Stack\n");
  printf("            1.push in stack1\n");
  printf("            2.push in stack2\n");
  printf("            3.pop from stack1\n");
  printf("            4.pop from stack2\n");
  printf("            9.exit");
  printf("\n Enter Operation: ");
  scanf("%d",&opt);
  switch(opt)
  {
      case 0:   display1();
                display2();
                break;
      case 1:   printf("Enter integer in stack1: ");
                scanf("%d",&n);
                push1(n);
                printf ("Value Pushed in Stack 1 : %d\n",n);
                break;
      case 2:   printf("Enter integer in stack2: ");
                scanf("%d",&n);
                push2(n);
                printf ("Value Pushed in Stack 2 : %d\n", n);
                break;
      case 3:   pop1();
                break;
      case 4:   pop2();
                break;
      case 9: exit(0);
  }
  goto i;
  return 0;
}

void push1(int data)
{
  if(top1!=top2-1)
  {
      a[++top1] = data;
  }
  else
    printf ("Stack Overflow !!!\n");
}
void push2(int data)
{
  if(top1!=top2-1)
  {
      a[--top2] = data;
  }
  else
    printf ("Stack Overflow !!!\n");
}

void pop1()
{
  if (top1 >= 0)
  {
    int value1 = a[top1--];
    printf("%d is being popped from Stack 1\n", value1);
  }
  else
    printf ("Stack Underflow on  stack1 !!!\n");
}
void pop2()
{
  if (top2 < SIZE)
  {
    int value2 = a[top2++];
    printf ("%d is being popped from Stack 2\n", value2);
  }
  else
    printf ("Stack Underflow on stack2 !!!\n");
}
void display1()
{
  int i;
  printf("Stack 1:  ");
  for(i=0; i<=top1; i++)
    printf ("  %d ", a[i]);
  printf ("\n");
}

void display2 ()
{
  int i;
  printf("Stack 2:  ");
  for(i=SIZE-1; i>=top2; i--)
    printf ("  %d ", a[i]);
  printf ("\n");
}
