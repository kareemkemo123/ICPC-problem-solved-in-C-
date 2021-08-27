#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", arr+i);
        }

        sort(arr, arr+n);

        if(arr[0] > 1){
            cout << 0 << endl;
        }
        else{
            int start = 0, i = 0;
            while(arr[start] == 1){
                start++;
            }

            long long res = 0;
            if(arr[start] > arr[start - 1] + 1){
                cout << res << endl;
            }
            else{
                res += start; // start = no of ones!
                int temp = start;
                while(arr[start] == arr[start - 1] + 1 && start < n){
                    start++;
                }
                
                res += (start - temp) * temp;

                cout << res << endl;
            }
            
        }
    }

    return 0;
}