#include<iostream>
using namespace std;
string stuna(string n);
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float ce);
float c;
main()
{
string name;
float EM,MM,CM,SM,BM,q;
cout<<"Enter student name: ";
cin>> name;
cout<<"Enter marks for English: ";
cin>>EM;
cout<<"Enter marks for Maths: ";
cin >>MM;
cout<<"Enter marks for Chemistry: ";
cin >>CM;
cout<<"Enter marks for Social Science: ";
cin >>SM;
cout<<"Enter marks for Biology: ";
cin >>BM;
stuna(name);
c=calculateAverage(EM,MM,CM,SM,BM);
cout<<"Percentage: "<<c;
q=calculateGrade(c);
cout<<"Grade: "<<q;
}
string stuna(string n)
{
cout<<"Student Name: "<<n<<endl;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{

float a,b;
a=marksEnglish+marksMaths+marksChemistry+ marksSocialScience+marksBiology;
b=a/500;
c=b*100;
return c;
}
string calculateGrade(float ce)
{
string b;
if(c<=100 && c>=90)
{
b="A+";
}
if(c<90 && c>=80)
{
b="A";
}
if(c<80 && c>=70)
{
b="B+";
}
if(c<70 && c>=60)
{
b="B";
}
if(c<60 && c>=50)
{
b="C";
}
if(c<50 && c>=40)
{
b="D";
}
if(c<30)
{
b="F";
}
return b;
}










