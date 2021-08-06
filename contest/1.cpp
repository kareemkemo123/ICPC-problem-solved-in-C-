#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int q;
    cin >> q;
    long long res[q];
    for(int i = 0, n; i < q; i++){
        cin >> n;
        long long sum = 0;
        for(int j = 0; j < n; j++){
            long long temp;
            cin >> temp;
            sum += temp;
        }

        res[i] = (long long)((double)sum/n + 0.5);
    }

    for(int i = 0; i < q; i++){
        cout << res[i] << endl;
    }

    return 0;
}