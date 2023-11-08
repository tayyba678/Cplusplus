#include<iostream>
using namespace std;
void nextLetter(string alpha);
int main(){
cout<<"Enter a string: ";
string alphabet;
cin >>alphabet;
nextLetter(alphabet);
}
void nextLetter(string alpha)
{
int a, asciiCode ;
char b;
cout<<"Shifted string: ";
for(int c=0;alpha[c]!='\0';c++){
 asciiCode=alpha[c];
a=asciiCode+1;
b=a;
cout<<b;
}
}
