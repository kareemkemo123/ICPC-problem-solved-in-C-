#include <iostream>
#include <string>
#include <vector>

#define forn(i, n) for(int i = 0; i < n; i++)

using namespace std;

bool beautifulString(string s, int n){
    int start = 0, end = n - 1;
    while(start < end){
        if(s[start] != s[end]){
            return 0;
        }
        start++, end--;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    forn(i, t){

        int n, m, res = 0;
        cin >> n >> m;
        string s;
        cin >> s;
        forn(j, m){
            int pos; char c;
            cin >> pos >> c;
            s[pos-1] = c;
            if(beautifulString(s, n)){
                res++;
            }
        }

        cout << res << endl;

    }

    return 0;
}