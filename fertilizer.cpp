#include <iostream>
using namespace std;
main(){
float size,bagCost,area,costpp,costf;
cout << "Enter Size of bag in pounds :-";
cin >> size;
cout << "Enter Cost of bag :- ";
cin >> bagCost;
cout << "Enter Area in square feet :- ";
cin >> area;

costpp = bagCost/size;
costf= bagCost/area;
cout << " Cost Per Pound :- " << costpp <<endl;
cout << " Cost of Fertilizer per square feet :- " << costf <<endl;
}