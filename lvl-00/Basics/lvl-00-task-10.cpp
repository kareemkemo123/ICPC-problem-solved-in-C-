#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int iniH, iniM, endH, endM;
    cin >> iniH >> iniM >> endH >> endM;

    double resH = 0, resM = 0;
    if(endH > iniH)
    {
        if(iniM > endM)
        {
            resH = endH - iniH - 1;
            resM = 60 - (iniM - endM);
        }
        else
        {
            resH = endH - iniH;
            resM = endM - iniM;
        }
        
    }
    else if(iniH > endH)
    {
        if(iniM > endM)
        {
            resH = 24 - (iniH - endH) - 1;
            resM = 60 - (iniM - endM);
        }
        else
        {
            resH = 24 - (endH - iniH);
            resM = endM - iniM;
        }
    }
    else
    {
        if(iniM == endM)
        {
            resH = 24;
            resM = 0;
        }
        else if(iniM > endM)
        {
            resH = 24 - 1;
            resM = 60 - (iniM - endM);
        }
        else
        {
            resH = 0;
            resM = endM - iniM;
        }
    }

    cout << "O JOGO DUROU " << resH << " HORA(S) E " << resM << " MINUTO(S)" << endl;
    
    
    return 0;
}