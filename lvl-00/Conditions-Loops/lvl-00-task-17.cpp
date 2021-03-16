#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    for(int i = 1; i <= input; i++)
    {
        cout << i << ' ' << i*i << ' ' << i*i*i << endl;
        cout << i << ' ' << i*i + 1 << ' ' << i*i*i + 1 << endl;
    }
}