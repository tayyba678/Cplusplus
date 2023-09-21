#include<iostream>
using namespace std;
main(){
cout<<"Enter the student's name: ";
string n;
int m,i,e;
float a,ar;
cin>> n;
cout<<"Enter matriculation marks (out of 1100): ";
cin>>m;
cout<<"Enter intermediate marks (out of 550): ";
cin>>i;
cout<<"Enter Ecat marks (out of 400): ";
cin>>e;
a=(e/400*0.1)+(m/1100*0.4)+(i/550*0.5);
ar=a*100;
cout<<"Aggregate score for "<<n<<" in UET is: "<<ar<<"%";
}