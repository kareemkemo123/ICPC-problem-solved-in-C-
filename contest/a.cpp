#include <iostream>
#include <algorithm>
#include <cmath>

#define ll long long
#define forn(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
    int q;
    cin >> q;
    ll res[q];
    forn(i, q){
        int n;
        cin >> n;
        long long sum = 0;
        forn(j, n){
            int temp;
            cin >> temp;
            sum += temp;
        }
        int rem = sum % n;
        if(rem == 0){
            res[i] = sum/n;
        }
        else{
            res[i] = (sum+n-rem)/n;
        }
    }

    forn(i, q){
        cout << res[i] << endl;
    }

    return 0;
}