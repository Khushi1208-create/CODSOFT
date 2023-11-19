/*Develop a calculator program that performs basic arithmetic
 operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

#include <iostream>
using namespace std;
int main(){
double a,b,result;
int q;
char w;
cout<<"Enter the first number: "<<endl;
cin>>a;
cout<<"Enter the second number: "<<endl;
cin>>b;
do{
cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication or 4 for division"<<endl;
cin>>q;
switch(q){
case 1:
   result=a+b;
   break;
case 2:
    result=a-b;
    break;
 case 3:
     result=a*b;
     break;
 case 4:
      if(a!=0){
      result=a/b;
      }else{
         cout<<"Division by zero not possible"<<endl;
         }
       break;
 default:
       cout<<"Invalid case"<<endl;
       }
 cout<<"Result :"<<result<<endl;
 cout<<"Do you want to continue(Y/N)"<<endl;
 cin>>w;
}while(w=='Y');
 return 0;
 }
