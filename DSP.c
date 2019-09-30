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
int peep1(int i);
int peep2(int i);
void change1(int i,int x);
void change2(int i,int x);
void display1();
void display2();

int main()
{
  int a[SIZE];
  int elements;
  int n, i;
  int opt;
  n:
  printf ("::::: We can push a total of 10 values :::::\n");
  printf("Operations: 0.Display Stack\n");
  printf("            1.push in stack1\n");
  printf("            2.push in stack2\n");
  printf("            3.pop from stack1\n");
  printf("            4.pop from stack2\n");
  printf("            5.peep from stack1\n");
  printf("            6.peep from stack2\n");
  printf("            7.change in stack1\n");
  printf("            8.change in stack2\n");
  printf("            9.exit\n");
  printf(" Enter Operation: ");
  scanf("%d",&opt);
  switch(opt)
  {
        case 0: display1();
                display2();
                break;
        case 1: printf("Enter integer in stack1: ");
                scanf("%d",&n);
                push1(n);
                break;
        case 2: printf("Enter integer in stack2: ");
                scanf("%d",&n);
                push2(n);
                break;
        case 3: pop1();
                break;
        case 4: pop2();
                break;
        case 5: printf("\n Enter index to peep from stack1: ");
                scanf("%d",&i);
                n=peep1(i);
                if(n!=-1)
                    printf(" peeped element: %d \n",n);
                break;
        case 6: printf("\n Enter index to peep from stack2: ");
                scanf("%d",&i);
                n=peep2(i);
                if(n!=-1)
                    printf(" peeped element: %d \n",n);
                break;
        case 7: printf("\n Enter index: ");
                scanf("%d",&i);
                printf("\n Enter new element: ");
                scanf("%d",&n);
                change1(i,n);
                break;
        case 8: printf("\n Enter index: ");
                scanf("%d",&i);
                printf("\n Enter new element: ");
                scanf("%d",&n);
                change2(i,n);
                break;

        case 9: exit(0);
  }
  goto n;
  return 0;
}

void push1(int data)
{
  if(top1!=top2-1)
  {
      a[++top1] = data;
      printf ("Value Pushed in Stack 1 : %d\n", a[top1]);
  }
  else
    printf ("Stack Overflow !!!\n");
}
void push2(int data)
{
  if(top1!=top2-1)
  {
      a[--top2] = data;
      printf ("Value Pushed in Stack 2 : %d\n", a[top2]);
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
int peep1(int i)
{
    if(top1-i+1<0)
    {
        printf(" stack underflow on peep1 \n");
    	return -1;
    }
    else{
        return a[top1-i+1];
    }
}
void change1(int i,int x)
{
	if(top1-i+1<0)
		printf(" stack underflow on change \n");
	else
		a[top1-i+1]=x;
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
int peep2(int i)
{
    if(top2+i > SIZE)
    {
    	printf(" stack underflow on peep2 \n");
    	return -1;
    }
    else{
        return a[top2+i-1];
    }
}
void change2(int i,int x)
{
	if(top2+i-1 > SIZE-1)
		printf(" stack underflow on change \n");
	else
		a[top2+i-1]=x;
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
