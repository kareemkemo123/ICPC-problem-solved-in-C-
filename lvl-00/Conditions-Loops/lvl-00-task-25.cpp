#include <iostream>

using namespace std;

char CHESS(char *pc, int n){
    int ant = 0;
    for(int i = 0; i < n; i++){
        if(pc[i] == 'A'){
            ant++;
        }
    }

    if(ant > (n / 2))
        return 'a';
    else if(ant == (n / 2.0)) //divide as a double because if n is odd the equavilent equal to false
        return (char)NULL;
    else
        return 'd';
    
}

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(CHESS(arr, n))
    {
        if(CHESS(arr, n) == 'a')
            cout << "Anton\n";
        else
            cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }
    

    return 0;
}