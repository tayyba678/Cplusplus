#include<iostream>
using namespace std;
void reverseOrder(int num,int n1,int n2,int n3);
int main(){
cout<<"Enter the number of elements: ";
int number n1,n2,n3;
cin>>number;
int numb[number];
cout<<"Enter "<<number<<" numbers, one per line: ";
cin>>n1<<endl;
cin>>n2<<endl;
cin>>n1<<endl;
reverseOrder(n1,n2,n3);
}
void reverseOrder(int num,int n1,int n2,int n3){
if (num>0)
{
cout<<"Numbers in reverse order: ";
for(int x=num;numb[x]!='\0';x--)
{
cout<<numb[x];
}
}
if(num<=0)
{
cout<<"Invalid input. Number ofelements must be greater than 0.";
}
}