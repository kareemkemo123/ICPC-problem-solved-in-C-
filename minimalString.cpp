#include <iostream>
#include <string>

#define forn(i, n) for(int i = 0; i < n; i++)

using namespace std;

bool isMinChar(char c, string s, int start, int size){
    if(size - start == 0)
        return 0;
    
    for(int i = start; i < size; i++){
        if(s[i] < c)
            return 0;
    }

    return 1;
}

int main(){
    string s, t, u;
    cin >> s;
    int n = s.length();
    forn(i, n){
        if(isMinChar(s[i], s, i + 1, n)){
            u.push_back(s[i]);
        }
        else{
            t.push_back(s[i]);
        }
    }
    int Len = t.length();
    while(Len--){
        u.push_back(t.back());
        t.pop_back();
    }

    cout << u << endl;

    return 0;
}