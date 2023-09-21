#include<iostream>
using namespace std;
main(){
cout<<"Enter the current world population: ";
int n;
cin>> n;
cout<<"Enter the monthly birth rate (number of births per month): ";
int m;
cin>> m;
int d;
d=n+m*12*30;
cout<<"The population in three decades will be: "<<d;
}