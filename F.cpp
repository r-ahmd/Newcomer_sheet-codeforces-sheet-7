#include <iostream>
using namespace std;
 
void separateNum (int Array[], int size, int index)
{
	if(index > size-1)
	    return;
	
	separateNum(Array,size,index+2);
	cout<<Array[index]<<" ";
}
 
int main()
{
	int size;
	cin>>size;
	int arr[size];
 
	for(int i=0; i<size; i++)
		cin>>arr[i];
 
	separateNum (arr, size, 0);
	
	return 0;
}
