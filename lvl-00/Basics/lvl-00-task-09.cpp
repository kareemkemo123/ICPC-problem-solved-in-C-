#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double des = b*b - 4*a*c;
    if(a == 0.0 || des < 0.0)
        cout << "Impossivel calcular" << endl;
    else
    {
        printf("R1 = %.5f\nR2 = %.5f\n", (-b+sqrt(des))/(2*a), (-b-sqrt(des))/(2*a));
    }
    
    return 0;
}