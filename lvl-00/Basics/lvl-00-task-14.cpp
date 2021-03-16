#include <iostream>


using namespace std;

int main()
{
    long long n;
    cin >> n;

    if(n % 2 == 0)
    {
        cout << n/2 << endl;
    }
    else
    {
        cout << ((n-1)/2) - n << endl; //n is a odd number so [(-1)^n] * n = -n
    }

    return 0;
}