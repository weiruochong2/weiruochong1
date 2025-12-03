#include<stdio.h>
int sum(int a,int b);
int sub(int*p1,int*p2);
int sum(int a,int b)
{

  int z=a+b;
  return z;

}

int sub(int*p1,int*p2)
{
   int z=*p1-*p2;
   return z;
}

