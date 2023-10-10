#include<iostream>
using namespace std;
int main() {
int score;
cout<<"enter students score\n ";
cin>>score;
if (score==100&&score>=90) //for A grade
cout<<"the grade of student is A" <<endl;
else if (score>=75&&score<90)//for B grade
cout<<"the grade of student is B"<<endl;
else if (score>=60&&score<75)//for C grade
cout<<"The grade of student is C"<<endl;
else if(score>=45&&score<60)//for D grade
cout<<"The grade of student is D"<<endl;
else //for F grade
cout<<"The grade of student is F"<<endl;
return 0;
}