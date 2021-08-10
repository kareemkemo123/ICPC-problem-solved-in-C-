#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    int i = n - 1;
    while((int)s[i] == (int)'9' && i >= 0){
        s[i] = '0';
        i--;
    }

    if(i >= 0){
        int temp = (int)s[i];
        temp++;
        s[i] = (char)temp;
    }
    else{
        s.insert(0, 1, '1');
    }

    cout << s << endl;

    return 0;
}