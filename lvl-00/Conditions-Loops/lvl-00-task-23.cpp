#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //============input=============
    int tcoor[1000][1000][2];
    int div[1000][2];
    int n = 1;
    int i = 0;
    int narr[1000];
    while(true)
    {
        cin >> n;/*---->>*/if(n <= 0) break;
        cin >> div[i][0] >> div[i][1];
        for(int j = 0; j < n; j++)
        {
            cin >> tcoor[i][j][0] >> tcoor[i][j][1];
        }
        narr[i] = n;
        i++;
    }
    //============Processing=============
    for(int a = 0; a < i; a++)
    {
        for(int b = 0; b < narr[a]; b++){
            if(tcoor[a][b][0] == div[a][0] || tcoor[a][b][1] == div[a][1]){
                cout << "divisa" << endl;
            }
            else if(tcoor[a][b][0] > div[a][0] && tcoor[a][b][1] > div[a][1]){
                cout << "NE" << endl;
            }
            else if(tcoor[a][b][0] < div[a][0] && tcoor[a][b][1] > div[a][1]){
                cout << "NO" << endl;
            }
            else if(tcoor[a][b][0] < div[a][0] && tcoor[a][b][1] < div[a][1]){
                cout << "SO" << endl;
            }
            else
            {
                cout << "SE" << endl;
            }
        }
    }

    return 0;
}