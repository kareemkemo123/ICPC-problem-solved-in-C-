#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double sal;
    cin >> sal;

    double nSal = 0, mEarned = 0; int inPrec = 0;
    if(sal >= 0.00 && sal <= 2000.00)
    {
        if(sal < 400.01)
        {
            inPrec = 15;
            mEarned = sal*15/100;
            nSal = sal + mEarned;
        }
        else if(sal >= 400.01 && sal < 800.01)
        {
            inPrec = 12;
            mEarned = sal*12/100;
            nSal = mEarned + sal;
        }
        else if(sal >= 800.01 && sal < 1200.01) 
        {
            inPrec = 10;
            mEarned = sal*10/100;
            nSal = mEarned + sal;
        }
        else
        {
            inPrec = 7;
            mEarned = sal*7/100;
            nSal = mEarned + sal;
        }
    }
    else
    {
        inPrec = 4;
        mEarned = sal*4/100;
        nSal = mEarned + sal;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %i \%\n", nSal, mEarned, inPrec);
    
    return 0;
}