#include <iostream>
//#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", 0.5*c*a, c*c*3.14159, ((a+b)/2)*c, b*b, a*b);
    
    return 0;
}