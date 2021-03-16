#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << "MEDIA = ";
    printf("%.1f\n", (double)(a*2+b*3+c*5)/10);
    
    return 0;
}