#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>

#define forn(i, n) for(int i = 0; i < n; i++)

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    forn(i, n){
        cin >> arr[i];
    }

    int current = 0;
    while(current != n - 1){
        if(current == n - 2){
            if(abs(arr[current]) >= arr[current + 1]){
                arr[current] *= -1;
                arr[++current] *= -1;
            }
            else{
                current++;
            }
        }
        else{
           if(arr[current] < 0){
                arr[current] *= -1;
                arr[++current] *= -1;
           }
           else{
               current++;
           }
        }
    }

    int sum = 0;
    forn(i, n){
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}