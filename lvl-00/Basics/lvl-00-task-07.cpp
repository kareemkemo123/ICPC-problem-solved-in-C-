#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    cin >> name;
    double fSal, sS; //fixed salary, sales sold
    cin >> fSal >> sS;
    printf("TOTAL = R$ %.2f\n", fSal + sS*15/100);
    
    return 0;
}