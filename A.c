#include<stdio.h>
 
void Rec(int a)
{
   if(a==0)
      return;
   printf("I love Recursion\n");
   return Rec(a-1);
}
 
 
int main()
{
   int n;
   scanf("%d", &n);
   Rec(n);
}
