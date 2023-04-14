#include <bits/stdc++.h>
using namespace std;

int index=0;

void print_num(string num)
{
   if(index==num.size())
      return;
   cout<<num[index]<<" ";
   index++;
   return print_num(num);
}

int main()
{
   int n;
   cin>>n;
   while(n--)
   {
      string s;
      cin>>s;
      print_num(s);
      cout<<endl;
      index=0;
   }
}
