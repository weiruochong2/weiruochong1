#include <stdio.h>
#include <iostream>
int main()
{
   using namespace std;
   char ch;
   unsigned int count=0;
   cin.get(ch);
   cin.clear();
   while(cin.get()!=0)
   {
     cout<<ch;
     count++;
     cin.get(ch);
   }
  cout<<count;
}
