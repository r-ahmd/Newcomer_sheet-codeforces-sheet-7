#include<stdio.h>
int flag=0;
void NToOne(int a)
{
    if(a==0)
        return;
    if(flag)
        printf(" ");
    printf("%d", a--);
    flag=1;
    return NToOne(a);
}

int main()
{
   int n;
   scanf("%d", &n);
   NToOne(n);
}
