#include<stdio.h>
 
int count=1;
void OneToN(int a)
{
    if(a==0)
        return;
    printf("%d\n", count++);
    
    return OneToN(a-1);
}
 
int main()
{
   int n;
   scanf("%d", &n);
   OneToN(n);
}
