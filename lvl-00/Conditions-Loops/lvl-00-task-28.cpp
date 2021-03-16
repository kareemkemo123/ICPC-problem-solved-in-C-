#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int s = S.length();

    for(int i = 0; i < s; i++){
        if(S[i] == 'H' || S[i] == 'Q' || S[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}