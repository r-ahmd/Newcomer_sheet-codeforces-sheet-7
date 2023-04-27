#include <iostream>
using namespace std;
int input;

void Pyramid(int n)
{
   if (n == 0)
      return;
   Pyramid(n - 1);
   for(int i=1; i<=input-n; i++)
      cout<<" ";
   for(int i=1; i<=n*2-1; i++)
      cout<<"*";
   cout<<endl;
}
int main(){
   int n;
   cin>>n;
   input=n;
   Pyramid(n);
   return 0;
}
