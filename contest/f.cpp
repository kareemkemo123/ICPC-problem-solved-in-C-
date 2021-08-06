#include <iostream>
#include <string>
#include <vector>
#include <map>

#define forn(i, n) for(int i = 0; i < n; i++)

using namespace std;


int main(){
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    map<int, int> m;
    forn(i, r){
        forn(j, c){
            cin >> arr[i][j];
            if(arr[i][j] == 'o'){
                m[i] = j;
            }
        }
    }
    if(m.size()){
        for(auto it : m){
            if(it.first && it.second){
                arr[it.first][it.second] = 'x';
                arr[it.first - 1][it.second] = 'x';
                arr[it.first][it.second - 1] = 'x';
                arr[it.first - 1][it.second - 1] = 'x';
                arr[it.first + 1][it.second + 1] = 'x';
                arr[it.first + 1][it.second] = 'x';
                arr[it.first][it.second + 1] = 'x';
                arr[it.first + 1][it.second - 1] = 'x';
                arr[it.first - 1][it.second + 1] = 'x';
            }
            else if(!it.first && it.second){
                arr[it.first][it.second] = 'x';
                arr[it.first][it.second - 1] = 'x';
                arr[it.first + 1][it.second + 1] = 'x';
                arr[it.first + 1][it.second] = 'x';
                arr[it.first][it.second + 1] = 'x';
                arr[it.first + 1][it.second - 1] = 'x';
            }
            else if(!it.second && it.first){
                arr[it.first][it.second] = 'x';
                arr[it.first - 1][it.second] = 'x';
                arr[it.first + 1][it.second + 1] = 'x';
                arr[it.first + 1][it.second] = 'x';
                arr[it.first][it.second + 1] = 'x';
                arr[it.first - 1][it.second + 1] = 'x';
            }
            else{
                arr[it.first][it.second] = 'x';
                arr[it.first + 1][it.second + 1] = 'x';
                arr[it.first + 1][it.second] = 'x';
                arr[it.first][it.second + 1] = 'x';
            }
        }
    }

    forn(i, r){
        forn(j, c){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}