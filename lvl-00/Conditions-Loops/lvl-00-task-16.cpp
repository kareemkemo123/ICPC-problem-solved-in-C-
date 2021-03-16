#include <iostream>

using namespace std;

int main()
{
    int m=0, n=0;
    while(true)
    {
        cin >> m >> n;
        if(m <= 0 || n <= 0)
        {
            cout << endl;
            break;
        }
        int big, small;
        if(m > n)
        {
            big = m;
            small = n;
        }
        else
        {
            big = n;
            small = m;
        }
        cout << endl;
        int sum = 0;
        for(int i = small; i <= big; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum;
    }
    cout << endl;

    return 0;
}