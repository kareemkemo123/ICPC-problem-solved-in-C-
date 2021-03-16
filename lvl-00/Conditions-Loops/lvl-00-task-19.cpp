#include <iostream>

using namespace std;

int SUM_ODD(int start, int end)
{
    int sum = 0;
    int i = start;
    if(i % 2 == 0){
        i++;
    }
    for(int j = 0; j < end; j++, i++){
        sum += i + j;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    for(int i = 0; i < n; i++)
    {
        int sum = SUM_ODD(arr[i][0], arr[i][1]);
        /* int k = arr[i][0];
        if(k % 2 == 0)
        {
            k++;
        }
        for(int j = 0; j < arr[i][1]; j++, k++)
        {
            sum += (k + j);
        }*/
        cout << sum << endl;
    }


    return 0;
}