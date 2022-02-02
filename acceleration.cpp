#include <iostream>
using namespace std;
main(){
float vf,vi,a,t;

cout << "Enter final velocity :- ";
cin >> vf;
cout << "Enter initial velocity :- ";
cin >> vi;
cout << "Enter time :- ";
cin >> t;
a= (vf-vi);
a=a/t;

cout << "Acceleration :- " << a << " meter per second square";

}