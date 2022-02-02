#include <iostream>
using namespace std;
main()
{
    int gross, net;
    float hra = 0.1;
    float ma = 0.15;
    float tax = 0.05;
    gross = ((4550 * 0.1) + (4550 * 0.15)) + 4450;
    net = gross - (4550 * 0.05);

    cout << "Gross :- " << gross << endl;
    cout << "net :- " << net;
}