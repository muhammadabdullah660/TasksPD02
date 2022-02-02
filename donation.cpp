#include <iostream>
using namespace std;
main(){
string mName;
float atp,ctp,numAt,numCt,perct,perctAmount,totalAmount,profit;
cout << "Enter Movie Name :-";
cin >> mName;
cout << "Enter Adult Ticket price :- ";
cin >> atp;
cout << "Enter Child Ticket price :- ";
cin >> ctp;
cout << "Enter number of Adults Tickets sold :- ";
cin >> numAt;
cout << "Enter number of children Tickets sold :- ";
cin >> numCt;
cout << "Percentage of Amount to be donated :- ";
cin >> perct;
totalAmount = (numAt*atp)+(numCt*ctp);
perctAmount= (totalAmount*perct)/100;
profit = totalAmount-perctAmount;
cout << " Total Amount :- " << totalAmount <<endl;
cout << " Profit :- " << profit <<endl;
}