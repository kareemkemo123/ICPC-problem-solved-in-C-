#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int test;
    int manCount = 0, crimeUntreated = 0;
    for(int i = 0; i < n; ++i)
    {
        cin >> test;
        if(test != -1){
            manCount += test;
        }
        else{
            if(manCount == 0){
                crimeUntreated++;
            }
            else{
                manCount--;
            }
        }
    }
    cout << crimeUntreated << endl;

    return 0;
}