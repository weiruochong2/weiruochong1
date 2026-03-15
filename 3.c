#include "temperature.h"
int main()
{
  int *p=malloc(16);
  p[0]=1;
  p[1]=2;
  p[2]=3;
  p[3]=4;
  int temp=get_america_temperature(p,4);
  printf("%d",temp);
  free(p); 
  p=NULL;  
} sdfsdfdf
tyasdfasdfasdfasdf