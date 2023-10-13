#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
int d;
string m,a;
cout<<"Enter the day of  birth: ";
cin>> d;
cout<<"Enter the month of birth(e.g., January, February): ";
cin>> m;
a=findZodiacSign(d,m);
cout<<"Zodiac Sign: "<<a;
}
string findZodiacSign(int day, string month)
{
string a;
if(month=="march"&& (day>=21||day<=31))
{
a="Aries";
}
if(month=="april"&& (day>=1||day<=19))
{
a="Aries";
}
if(month=="may"&& (day>=1||day<=20))
{
a="Taurus";
}
if(month=="april"&& (day>=20||day<=30))
{
a="Taurus";
}
if((month=="may"&& (day>=21||day<=31))||(month=="june"&& (day>=1||day<=20)))
{
a="Gemini";
}
if((month=="june"&& (day>=21||day<=30))||(month=="july"&& (day>=1||day<=22)))
{
a="Cancer";
}
if((month=="july"&& (day>=23||day<=31))||(month=="august"&& (day>=1||day<=22)))
{
a="Leo";
}
if((month=="august"&& (day>=23||day<=31))||(month=="september"&& (day>=1||day<=22)))
{
a="Virgo";
}
if((month=="september"&& (day>=23||day<=30))||(month=="october"&& (day>=1||day<=22)))
{
a="Libra";
}
if((month=="october"&& (day>=23||day<=31))||(month=="november"&& (day>=1||day<=21)))
{
a="Scorpio";
}
if((month=="november"&& (day>=22||day<=30))||(month=="december"&& (day>=1||day<=21)))
{
a="Sagittarius";
}
if((month=="december"&& (day>=22||day<=31))||(month=="january"&& (day>=1||day<=19)))
{
a="Capricorn";
}
if((month=="january"&& (day>=20||day<=31))||(month=="february"&& (day>=1||day<=18)))
{
a="Aquaris";
}
return a;
}










