#include<iostream>
using namespace std;
int findLargestNumber(int arr[], int size);
int main()
{cout<<"Enter the number of elements: ";
int num,b;
int n1[num];
cin>>num;
cout<<"Enter "<<num<<" numbers, one per line:";
for(int i=0;i<num;i++)
{
cin>>n1[i];
}
cout<<endl;
b=findLargestNumber(n1,num);
cout<<"The largest number entered is: "<<b;
}
int findLargestNumber(int arr[], int size)
{
int largest =arr[0];
for(int x=0;arr[x]>size;x++)
{
if(arr[x]>largest){
largest=arr[x];
}
return largest ;
}
}