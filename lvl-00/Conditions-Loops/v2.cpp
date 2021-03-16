#include <iostream>

using namespace std;

int main()
{
    int arr[1000][2];
    bool chck = 0;
    int i = 0;
    for(; i < 1000; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] <= 0)
                chck = 1;
        }
        if(chck)
            break;
    }
    for(int j = 0; j < i; j++)
    {
        if(arr[j][0] < arr[j][1])
        {
            int temp = arr[j][0];
            arr[j][0] = arr[j][1];
            arr[j][1] = temp;
        }
        int sum = 0;
        for(int k = arr[j][1]; k <= arr[j][0]; k++)
        {
            cout << k << " ";
            sum += k;
        }
        cout << "Sum=" << sum << endl;
    }

    return 0;
}