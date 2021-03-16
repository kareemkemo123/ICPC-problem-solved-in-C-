#include <iostream>

using namespace std;

int main()
{
    int iNum, iHeightOfHence;
    cin >> iNum >> iHeightOfHence;
    int iPerHeight[iNum];
    for(int c = 0; c < iNum; c++)
    {
        cin >> iPerHeight[c];
    }
    int iWidth = 0;
    for(int c = 0; c < iNum; c++)
    {
        if(iPerHeight[c] > iHeightOfHence)
            iWidth += 2;
        else
            iWidth++;
    }

    cout << iWidth << endl;

    return 0;
}