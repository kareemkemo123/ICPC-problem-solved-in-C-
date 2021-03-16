#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char nums[9][6] = {"one","two","three","four","five","six","seven","eight","nine"};
    if(n >= 1 && n <= 9)
    {
        cout << nums[n-1] << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }
    
    
    return 0;
}