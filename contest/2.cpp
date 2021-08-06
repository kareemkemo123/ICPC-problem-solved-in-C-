#include <iostream>
#include <string>
#include <vector>

#define forn(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
    int n;
    cin >> n;
    char temp;
    vector<char> arr;
    cin >> arr[0];
    int res = 0;
    forn(i, n - 1){
        bool f = 0;
        cin >> temp;
        for(auto it : arr){
            if(it == temp){
                f = 1;
                break;
            }
        }
        if(!f){
            arr.push_back(temp);
        }
        else{
            res++;
        }
    }

    cout << res << endl;

    return 0;
}