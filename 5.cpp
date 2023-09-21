#include<iostream>
using namespace std;
int  main(){
cout<<"Enter the Charge (Q) in Coulombs: ";
float Q,T;
cin>> Q;
cout<<"Enter the time (T) in seconds: ";
cin>> T;
float I;
I=Q/T;
cout<<"The current (I) is: "<<I<<" Amperes";
}
