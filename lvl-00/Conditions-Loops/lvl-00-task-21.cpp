#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
    int n;
    if(n < 0)
        return 1;
    cin >> n;
    int arr[n][2];
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i = 0; i < n; i++){
        int st = (arr[i][0] + arr[i][1]) / 2;
        int nd = arr[i][0] - st;
        
        if(st < 0 || nd < 0 || arr[i][0] < 0 || arr[i][1] < 0 || (arr[i][0] + arr[i][1]) % 2 == 1)
            cout << "impossible" << endl;
        else
        {
            if(st > nd)
                cout << st << ' ' << nd << endl;
            else
            {
                cout << nd << ' ' << st << endl;
            }
        }
        
    }

    return 0;
}