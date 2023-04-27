#include <bits/stdc++.h>
using namespace std;

void binary_eq(int decimal_num)
{
    if (decimal_num == 0)
        return;
    binary_eq(decimal_num / 2);
    cout<<decimal_num % 2;
     
}
int main()
{
    int num, t;
    cin>>t;
    while(t--)
    {
        cin>>num;
        binary_eq(num);
        cout<<endl;
    }
    
    return 0;
}
