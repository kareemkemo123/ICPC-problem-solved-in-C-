#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    assert(n > 1 && n < 1000);
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[min]){
            min = i;
        }
    }
    cout << "Menor valor: " << arr[min] << endl;
    cout << "Posicao: " << min << endl;

    return 0;
}