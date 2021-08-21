#include <iostream>
#include <string>
#include <algorithm>

#define forn(i, n) for(int i = 0; i < n; i++)
#define ll long long

using namespace std;

int main(){
    int arr[9][9];

    forn(i, 9){
        forn(j, 9){
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    bool valid = 1;
    forn(i, 9){
        sum = 0;
        forn(j, 9){
            sum += arr[i][j];
        }
        if(sum != 45){
            valid = 0;
            break;
        }
    }

    forn(i, 9){
        sum = 0;
        forn(j, 9){
            sum += arr[j][i];
        }
        if(sum != 45){
            valid = 0;
            break;
        }
    }

    int i = 0, j = 0, k = 0;
    for( ; k < 3; k++){
        sum = 0;
        for(i = 0 ; i < 3; i++){
            for(j = 3 * k ; j < 3 * (k + 1); j++){
                sum += arr[i][j];
            }
        }
        if(sum != 45){
            valid = 0;
            break;
        }
    }

    j = 0, i += 3;
    for( ; k < 6; k++){
        sum = 0;
        for(i = 3 ; i < 6; i++){
            for(j = 3 * (k - 3) ; j < 3 * (k - 2); j++){
                sum += arr[i][j];
            }
        }
        if(sum != 45){
            valid = 0;
            break;
        }
    }

    j = 0, i += 3;
    for( ; k < 9; k++){
        sum = 0;
        for(i = 6 ; i < 9; i++){
            for(j = 3 * (k - 6) ; j < 3 * (k - 5); j++){
                sum += arr[i][j];
            }
        }
        if(sum != 45){
            valid = 0;
            break;
        }
    }

    if(valid){
        cout << "VALID" << endl;
    }
    else{
        cout << "INVALID" << endl;
    }

    return 0;
}