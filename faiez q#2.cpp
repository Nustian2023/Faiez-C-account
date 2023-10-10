#include<iostream>
using namespace std;
int main() {
cout<<"Question NO 02"<<endl;
//declaring x and res as two variables
int x,res;
cout<<"enter the value of x \n";
cin>>x;
res=x%5;
if (res!=0) 
cout<< "x is not divisible by 5"<<endl;
else if (res==0 && x%2!=0) 
cout<<"x is not even and divisible by 5"<<endl;
else 
cout<<"x is even and divisible by 5"<<endl;
return 0;
}