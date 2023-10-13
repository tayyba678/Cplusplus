#include<iostream>
using namespace std;
string serviceCode(char a);
flaot minutes(char d,int mi);

main()
{
char s,t;
int m;
cout<<"Enterb the service code (R/r for regular, P/p for premium): ";
cin>>s;
cout<<"Enter time of thr call (D/d for day, N/n for night): ";
cin>>t;
cout<<"Enter thr number of minutes used: ";
cin >>m;
k=rviceCode(s);
cout<<"Service Type: "<<k;
minutes(t,m);

}
string serviceCode(char a)
{
string h;
if(a='P'||a='p)
{
h="Premium";
}
if(a='R||a='r')
{
h="Regular";
}
return h;
}
flaot minutes(char d,int mi)
{
float u;
if(d=='D'||d=='d')
{
if(mi>75)
{
u=mi*0.10;
}
}
if(d=='N'||d=='n')
{
if(mi>100)
{
u=mi*0.05;
}
}
return u;
}



