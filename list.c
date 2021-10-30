#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,m,flag=0;int a[10];
  clrscr();
  printf("enter the number of elements");
  scanf("%d",&n);
  print("enter the elements in array");
  for(i=0;i<n;i++);
  scanf("%d",&m);
  for(i=0;i<n;i++)
  {
    if(a[i]==m)
    {
    flag=1;
    break;
    }
  }
  if(flag==0)
  printf("not present");
  else
  printf("present");
  getch();
}  
