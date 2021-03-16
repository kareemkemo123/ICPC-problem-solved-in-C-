#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    cout << 1 << endl;
    for(int i = 2; i <= input; i++)
    {
        if(input % i == 0){
            cout << i << endl;
        }
        else
        {
            continue;
        }
        
    }
}