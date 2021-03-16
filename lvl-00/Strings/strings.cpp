#include <iostream>
#include <cmath>

using namespace std;

int task01(){
    string ber, bir;
    cin >> ber >> bir;

    int n = ber.size();
    bool isTrue = false;
    if(n != bir.size());
    else {
        for(int i = 0; i < n; i++){
            if(ber[i] != bir[n - i - 1]){
                isTrue = 0;
                break;
            }
            else{
                isTrue = 1;
            }
        }
    }
    if(isTrue){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}

int task02(){
    string s, h = "hello";
    cin >> s;
    
    int n = s.length(), hn = h.length(), j = 0;
    for(int i = 0; i < n && j < hn; i++){
        if(s[i] == h[j]){
            j++;            //count how many words of "hello" in s sequencely
        }
    }
    if(j == hn){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}

int task03(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int res = 0;
    for(int i = 0; i < n; i++){
        if(s1[i] <= 'Z')
            s1[i] += ('a' - 'A');
        if(s2[i] <= 'Z')
            s2[i] += ('a' - 'A');

        if(s1[i] == s2[i]);
        else if(s1[i] > s2[i]){
            res = 1;
            break;
        }
        else{
            res = -1;
            break;
        }
    }
    cout << res << endl;
    
    return 0;
}

int task04(){
    string s, vowels = {'a', 'o', 'e', 'u', 'i', 'y'};
    cin >> s;
    
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] <= 'Z'){
            s[i] += ('a' - 'A');
        }

        for(int j = 0; j < 6; j++){
            if(s[i] == vowels[j]){
                s[i] = ' ';
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(s[i] != ' '){
            cout << "." << s[i];
        }
    }
    cout << endl;

    return 0;
}

int task05(){
    int t;
    cin >> t;
    string s[t];
    for(int i = 0; i < t; i++)
        cin >> s[i];
    
    for(int i = 0; i < t; i++){
        int n = s[i].length();
        cout << s[i][0];
        for(int j = 1; j < n; j+=2){
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}

int task06(){
    int t;
    cin >> t;
    string s[t];
    for(int i = 0; i < t; i++)
        cin >> s[i];
    
    for(int i = 0; i < t; i++){
        int n = s[i].length(), c = 0;
        for(int j = n - 1; j >= 0; j--){
            if(s[i][j] == '1')
                break;
            else
                s[i][j] = ' ';
        }
        for(int j = 0; j < n; j++){
            if(s[i][j] == '1')
                break;
            else
                s[i][j] = ' ';
        }
        for(int j = 0; j < n; j++){
            if(s[i][j] == '0')
                c++;
        }
        cout << c << endl;
    }

    return 0;
}

int task07(){
    int n;
    cin >> n;
    string *s = new string[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++){
        int n = s[i].length();
        if(n <= 10){
            cout << s[i] << endl;
        }
        else{
            cout << s[i][0] << n - 2 << s[i][n-1] << endl;
        }
    }

    return 0;
}

int task08(){
    bool alpha[123];
    for(int i = 0; i < 123; i++)
        alpha[i] = 0;
    
    string s;
    cin >> s;
    int n = s.length(), count = 0;
    for(int i = 0; i < n; i++){
        if(alpha[(int)s[i]])
            continue;
        else{
            count++;
            alpha[(int)s[i]] = 1;
        }
    }
    
    if(count % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}

int task09(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char res[n];
    bool op = !(n % 2); //if n even op = 1 so the first operation in add
    for(int i = 0, j = (n - 1) / 2; i < n; i++, op = !op){
        res[j] = s[i];
        if(op){
            j += i + 1;
        }
        else{
            j -= (i + 1);
            if(j < 0){
                j = n - 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << res[i];
    }
    cout << endl;
    
    return 0;
}
//NOT Accepted => k-string problem
int task10(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.length();
    //sorting
    /* for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(s[j] < s[min])
                min = j;
        }
        char temp = s[i];
        s[i] = s[min];
        s[min] = temp;
    } */
    if(n % k != 0){
        cout << -1 << endl;
        return 0;
    }
    if(n == k){
        for(int i = 1; i < n; i++){
            if(s[i] != s[0]){
                cout << -1 << endl;
                return 0;
            }
        }
        cout << s << endl;
        return 0;
    }
    int arr[123];
    for(int i = 97; i < 123; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        arr[(int)s[i]]++;
    }
    for(int i = 97; i < 123; i++){
        if(arr[i] == 0)
            continue;
        else{
            if(arr[i] % (n/k) != 0){
                cout << -1 << endl;
                return 0;
            }
        }
    }
    int l = 0;
    while(l < n/k){
        for(int i = 97; i < 123; i++){
            if(arr[i] != 0){
                for(int j = 0; j < arr[i]/(n/k); j++){
                    cout << (char)i;
                }
            }
        }
        l++;
    }
    cout << endl;
    /*char res[n];
    for(int j = 0; j < n/k; j++){
        char con = s[j * (n / k)];
        for(int i = j * (n / k), t = j; i < (n / k) * (j+1); i++, t += (n/k)){
            if(s[i] != con){
                con = ' ';
                break;
            }
            res[t] = s[i];
        }
        if(con == ' '){
            cout << -1 << endl;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        cout << res[i];
    }
    cout << endl;*/

    return 0;
}
//the last problem
int task11(){
    int n;
    cin >> n;
    string s[n];
    getline(cin, s[0]);
    for(int i = 0; i < n; i++){
        getline(cin, s[i]);
    }

    int alpha[26];
    for(int i = 0; i < 15; i++)
        alpha[i] = i % 3;
    for(int i = 15; i < 19; i++)
        alpha[i] = i - 15;
    for(int i = 19; i < 22; i++)
        alpha[i] = i - 19;
    for(int i = 22; i < 26; i++)
        alpha[i] = i - 22;
    for(int i = 0; i < n; i++){
        int m = s[i].length();
        int sum = 0;
        for(int j = 0; j < m; j++){
            if(s[i][j] == ' ')
                sum++;
            else{
                sum += alpha[(int)(s[i][j] - 'a')] + 1;
            }
        }
        cout << "Case #" << i + 1 << ": " << sum << endl;
    }

    return 0;
}

int task12(){
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++){
        int len = s[i].length();
        if(len == 3){
            string one = "one";
            int count = 0;
            for(int j = 0; j < 3; j++){
                if(s[i][j] == one[j])
                    count++;
            }
            if(count >= 2)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
            cout << 3 << endl;
    }

    return 0;
}

int task13(){
    string s;
    cin >> s;
    int n = s.length();
    char p = 'a';
    int count = 0;
    for(int i = 0; i < n; i++){
        if(abs(s[i] - p) > 13){
            if(p - 'a' > 13){
                count += (25 - (p - 'a')) + (25 - ('z' - s[i]) + 1);
            }
            else{
                count += (p - 'a') + ('z' - s[i] + 1);
            }
        }
        else {
            count += abs(s[i] - p);
        }
        p = s[i];
    }
    cout << count << endl;

    return 0;
}

int task14(){
    string h, m;
    getline(cin, h, ':');
    getline(cin, m);

    if(h[0] != '2'){
        if(h[0] == m[1] && h[1] == m[0]){
            if(h[1] < '5')
                cout << h[0] << (char)(h[1] + 1) << ':' << (char)(m[0] + 1) << m[1] << endl;
            else
                cout << (char)++h[0] << "0:0" << (char)h[0] << endl;
        }
        else{
            if(h[1] < '5'){
                if(m[0] < h[1])
                    cout << h << ':' << h[1] << h[0] << endl;
                else if(m[0] == h[1]){
                    if(m[1] < h[0])
                        cout << h << ':' << h[1] << h[0] << endl;
                    else{
                        cout << h[0] << (char)++h[1] << ':' << h[1] << h[0] << endl;
                    }
                }
                else{
                    cout << h[0] << ++h[1] << ':' << h[1] << h[0] << endl;
                }
            }
            else if(h[1] == '5'){
                if(m[0] < h[1])
                    cout << h << ':' << h[1] << h[0] << endl;
                else{
                    if(m[1] < h[0])
                        cout << h << ':' << h[1] << h[0] << endl;
                    else{
                        cout << ++h[0] << "0:0" << h[0] << endl;
                    }
                }
            }
            else{
                cout << ++h[0] << "0:0" << h[0] << endl;
            }
        }
    }
    else{
        if(h[0] == m[1] && h[1] == m[0]){
            if(h[1] < '3'){
                cout << h[0] << ++h[1] << ':' << h[1] << h[0] << endl;
            }
            else{
                cout << "00:00" << endl;
            }
        }
        else{
            if(h[1] < '3'){
                if(m[0] < h[1])
                    cout << h << ':' << h[1] << h[0] << endl;
                else if(m[0] == h[1]){
                    if(m[1] < h[0])
                        cout << h << ':' << h[1] << h[0] << endl;
                    else{
                        cout << h[0] << (char)++h[1] << ':' << h[1] << h[0] << endl;
                    }
                }
                else{
                    h[1] = m[0];
                    cout << h << ':' << h[1] << h[0] << endl;
                }
            }
            else{
                if(m[0] < h[1])
                    cout << h << ':' << h[1] << h[0] << endl;
                else if(m[0] == h[1]){
                    if(m[1] < h[0])
                        cout << h << ':' << h[1] << h[0] << endl;
                    else{
                        cout << "00:00" << endl;
                    }
                }
                else{
                    cout << "00:00" << endl;
                }
            }
        }
    }
    
    return 0;
}

int countZeros(string a){
    int n = a.length(), zeros = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '0'){
            zeros++;
        }
        else{
            break;
        }
    }

    return zeros;
}
int testString(string a, string b, int n1,int z1, int n2,int z2){
    int i1 = z1, i2 = z2;
    for(int i = 0; i < n1 - z1; i++, i1++, i2++){
        if(a[i1] == b[i2]){
            continue;
        }
        else if(a[i1] > b[i2]){
            return 1;
        }
        else{
            return -1;
        }
    }

    return 0;
}
int task15(){
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int n1 = a.length(), n2 = b.length(), z1 = countZeros(a), z2 = countZeros(b);
    int realLen1 = n1 - z1, realLen2 = n2 - z2;
    if(realLen1 > realLen2){
        printf(">\n");
    }
    else if(realLen1 < realLen2){
        printf("<\n");
    }
    else{
        int res = testString(a, b, n1,z1 , n2,z2);
        switch(res){
            case 1 : 
                printf(">\n"); break;
            case -1: 
                printf("<\n"); break;
            case 0 : 
                printf("=\n"); break;
            default: 
                return 1; break;
        }
    }

    return 0;
}

int task16(){
    string s;
    getline(cin, s);
    string ss[10];
    int arr[10];
    for(int i = 0; i < 10; i++){
        getline(cin, ss[i]);
    }
    for(int i = 0; i < 10; i++){
        arr[i] = 0;
        for(int j = 9, c = 1; j >= 0; j--, c *= 2){
            if(ss[i][j] == '0')
                continue;
            arr[i] += (1 * c);
        }
    }
    int res[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 79; i >= 9; i -= 10){
        int p = i / 10;
        for(int j = i, c = 1; j >= i - 9; j--, c *= 2){
            if(s[j] == '0')
                continue;
            res[p] += (1 * c);
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 10; j++){
            if(res[i] == arr[j]){
                cout << j;
                break;
            }
        }
    }

    cout << endl;

    return 0;
}

int main(){
    if(task16()){
        return 1;
    }

    return 0;
}