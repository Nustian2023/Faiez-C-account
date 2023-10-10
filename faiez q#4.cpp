#include<iostream>
using namespace std;
int main(){
cout<<"Question No.04"<<endl;
double GPA;
cout<<"Enter GPA of student\n ";
cin>>GPA;
double attendance;
cout<<"enter attendance of student in percentage\n ";
cin>>attendance;
if (GPA>=3.5&&attendance>=80)
cout<<"the student is eligible for scholarship"<<endl;
else 
cout<<"the student is not eligible for scholarship"<<endl;
return 0;
}