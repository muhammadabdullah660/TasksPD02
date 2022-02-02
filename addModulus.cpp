#include <iostream>
using namespace std;
main(){

int num,num1,num2,num3,num4;
cout << "Enter a Number :- ";
cin >> num;
num1= (num%10) ;
num2=((num%100)-num1)/10;
num3=((num%1000)-num1-num2)/100;
num4=num/1000;
num=num1+num2+num3+num4;
cout << " Total Amount :- " << num <<endl;
}