#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int absME(int n)
{
    if(n < 0)
        return n * -1;
    else
        return n;
    
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int great = (a + b + absME(a - b)) / 2;
    int greatest = (great + c + absME(great - c)) / 2;

    cout << greatest << " eh o maior" << endl;
    
    return 0;
}