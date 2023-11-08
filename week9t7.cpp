#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);
int main(){
cout<<"Enter the number of resistors in the series circuit: ";
int num;
double sum, n[num];
cin>>num;
cout<<"Enter the resistance values (in ohms) of the "<<num<<" resistors, one per line:";
for(int x=0;x<num;x++)
{
cin>>n[x];
}
cout<<endl;
sum=calculateTotalResistance(n,num);
cout<<"The total resistance of the series circuit is "<<sum<< " ohms.";
}

double calculateTotalResistance(double resistance[], int size)
{
double sum;
for(int l=0;resistance[l]<size;l++)
{
sum=sum+resistance[l];
}
return sum;
}