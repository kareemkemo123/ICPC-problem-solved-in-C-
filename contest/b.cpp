#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <cmath>

#define forn(i, n) for(int i = 0; i < n; i++)
#define ll long long

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    forn(i, n){
        cin >> arr[i];
    }

    if(n%k){
        cout << -1 << endl;
    }
    else{
        sort(arr.begin(), arr.end());
        int sizeOfGroup = n/k;
        ll sum = 0;
        for(int i = 0; i < n; i+=sizeOfGroup){
            sum += abs(arr[i] - arr[i + sizeOfGroup - 1]);
        }
        cout << sum << endl;
    }

    return 0;
}