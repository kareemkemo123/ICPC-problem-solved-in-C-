#include <iostream>
#include <vector>

using namespace std;

/**------> line means the number of line in the sheet <------**/

int line12(){
    int n;
    cin >> n;
    vector<char> vS;
    char temp = ' ';
    for(int i = 0; i < n; i++){
        cin >> temp;
        vS.push_back(temp);
    }

    int res = 0;
    if(n > 26){
        res = -1;
    }
    else{
        int changes = 0;
        for(int i = 97; i < 123; i++){
            int count = 0;
            for(auto j = vS.begin(); j != vS.end(); j++){
                if((int)*j == i){
                    count++;
                }
            }
            if(count == 0)  continue;
            else changes += count - 1;
        }
        res = changes;
    }
    cout << res << endl;
    
    return 0;
}

int main(void){
    if(line12()){
        return 1;
    }
    
    return 0;
}