#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length(), n2 = s2.length();
    if(n1 != n2)
    {
        cout << "NO" << endl;
    }
    else
    {
        for(int i = 0; i < n1; i++){
            if(s1[i] != s2[n1 - i - 1]){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }

    return 0;
}