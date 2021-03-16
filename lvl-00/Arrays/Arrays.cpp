#include <iostream>
#include <assert.h>
#include <iomanip>
#include <cmath>

using namespace std;

/**************Data Structure (Unknown Linked list)*************/

typedef struct listnode{
    int i;
    struct listnode* next;
}ListNode;
typedef struct list{
    ListNode* f;
    int s;
}List;
void iniList(List *pl){
    pl->f = NULL;
    pl->s = 0;
}
//pushing to the rear (back of the list)
void Push(List *pl, int e){
    ListNode *pe = (ListNode *)malloc(sizeof(ListNode));
    pe->i = e;
    pe->next = NULL;
    ListNode *pn = pl->f;
    if(pn){
        while(pn->next){
            pn = pn->next;
        }
        pn->next = pe;
    }
    else{
        pl->f = pe;
    }
    pl->s++;
}
//poping from the front of the list (Default)
void Pop(List *pl, int *pe){
    ListNode *pn = (ListNode *)malloc(sizeof(ListNode));
    *pe = pl->f->i;
    pn = pl->f;
    pl->f = pl->f->next;
    free(pn);
    pl->s--;
}
//if con equal to 0 funct pop from the front of the list
//if con equal to 1 funct pop from the rear of the list
void Pop(List *pl, int *pe, bool con){
    ListNode *pn = (ListNode *)malloc(sizeof(ListNode));
    if(!con){
        *pe = pl->f->i;
        pn = pl->f;
        pl->f = pl->f->next;
        free(pn);
    }
    else{
        pn = pl->f;
        ListNode *pb = (ListNode *)malloc(sizeof(ListNode));
        pb = pn;
        while(pn->next){
            pb = pn;
            pn = pn->next;
        }
        *pe = pn->i;
        free(pn);
        pb->next = NULL;
    }
    pl->s--;
}
int Size(List *pl){
    return pl->s;
}
/*************************End of Structure************************/

/*******************Arrays Functions***********************/
void cinArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
void cinArr(int **arr, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
}
void iniArr(int *arr, int n){
    for(int i = 0; i < n; i++)
        arr[i] = 0;
}
void iniArr(int **arr, int n, int m){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            arr[i][j] = 0;
}
void Display(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
//Inserion algorithm
void Sorting(int *arr, int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int j = i - 1;
        for( ; j >= 0; j--){
            if(arr[j] > curr){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = curr;
    }
}

int arrSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
//precond: e <= n && s > 0
long long arrSum(int *arr, int s, int e){
    long long sum = 0;
    for(int i = s - 1; i < e; i++){
        sum += arr[i];
    }
    return sum;
}
void arrCpy(int *arr, int *cpy, int n){
    for(int i = 0; i < n; i++){
        cpy[i] = arr[i];
    }
}
/******************End Of Arrays Functions******************/
int lvl_00_task_01(){
    char op;
    cin >> op;
    if(op != 'S' && op != 'M')    //assert(op == 'S' || op == 'M');
        return 1;

    int n = 12;
    double a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    double sum = 0.0;
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            sum += a[i][j];

    if(op == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum/(n*(n-1) / 2));

    return 0;
}

int lvl_00_task_02(){
    char op;
    cin >> op;
    if(op != 'S' && op != 'M')    //assert(op == 'S' || op == 'M');
        return 1;

    int n = 12;
    double a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    double sum = 0.0;
    for(int i = n - 2; i >= 0; i--)
        for(int j = i; j >= 0; j--)
            sum += a[n - i - 2][j];

    if(op == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum/(n*(n-1) / 2));

    return 0;
}

int lvl_00_task_03(){
    int dim[1000];
    int i = 0;
    for( ; i < 1000; i++){
        cin >> dim[i];
        if(dim[i] <= 0)
            break;
    }

    for(int j = 0; j < i; j++){
        int N = dim[j];
        int num = 1;
        for(int k = 0; k < N - 1; k++)
            num *= 2;
        num = num * num;
        int count = 0;
        while(num != 0){
            count++;
            num /= 10;
        }

        cout << setw(count) << 1;
        int s = 1;
        for(int k = 1; k < N; k++){
            s *= 2;
            cout << ' ' << setw(count) << s;
        }
        for(int k = 1, s1 = 1; k < N; k++, s1*=2){
            cout << endl;
            s = s1;
            for (int e = 0; e < N; e++)
            {
                s *= 2;
                if(e == N - 1){
                    cout << setw(count) << s;
                    break;
                }
                else
                    cout << setw(count) << s << ' ';
            }
        }
        if(j == i - 1){
            break;
        }
        else
        {
            cout << endl << endl;
        }
    }
    return 0;
}

int lvl_00_task_04(int n){
    int arr[n][n];

    for(int i = 0; i < n/3; i++){
        for(int j = i + 1; j < n - i - 1; j++)
            arr[i][j] = 0;
    }
    for(int i = 1; i < n - 1; i++){
        if(i < n/3)
            for(int j = 0; j < i; j++)
                arr[i][j] = 0;
        else if(i >= n/3 && i < n - n/3)
            for(int j = 0; j < n/3; j++)
                arr[i][j] = 0;
        else if(i >= n - n/3)
        {
            for(int j = 0; j < i - n/3; j++)
                arr[i][j] = 0;
        }
    }
    for(int i = n-n/3, t = 0; i < n; i++, t++){
        for(int j = n/3 - t; j < n - n/3 + t; j++)
            arr[i][j] = 0;
    }
    for(int i = n-n/3, t = 0; i < n; i++, t++){
        for(int j = n/3 - t; j < n - n/3 + t; j++)
            arr[j][i] = 0;
    }
    

    /* for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            arr[i][j] = 0;
    } */
    for(int i = 0; i < n; i++){
        if(i == n / 3)
        {
            i = n - (n/3);
        }
        arr[i][i] = 2;
    }
    for(int i = n - 1; i >= 0; i--){
        if(i == n - 1 - n/3)
            i = n/3 - 1;
        
        arr[n - i - 1][i] = 3;
    }
    for(int i = n/3; i <= n - 1 - n / 3; i++){
        for(int j = n/3; j <= n - 1 - n / 3; j++)
            arr[i][j] = 1;
    }
    arr[n/2][n/2] = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << arr[i][j];
        cout << endl;
    }
    cout << endl;
    
    return 0;
}

int lvl_00_task_05(){
    /**********INPUT**********/
    int wn; //wires number
    cin >> wn;
    int wb[wn]; //number of birds in i-th wire
    for(int i = 0; i < wn; i++){
        cin >> wb[i];
    }
    int shn; //shoots number
    cin >> shn;
    int shoots[shn][2]; //position of the bird died in th i-th shoot [#wire][its position in its row]
    for(int i = 0; i < shn; i++){
        cin >> shoots[i][0] >> shoots[i][1];
    }
    /********************Processing*************************/
    for(int i = 0; i < shn; i++){
        int wIndex = shoots[i][0] - 1; //wire-shooted number
        int bIndex = shoots[i][1] - 1; //bird-shooted index in its row
        if(wIndex != 0){ //the wire-shooted is NOT the first wire!
            wb[wIndex - 1] += bIndex; //the left birds flew to the previous wire
/*                                    //#birdsInThePreviousWire += #birdsInTheLeftOftheDiedBird    */
        }
        
        if(wIndex != wn - 1){ //the wire-shooted is NOT the last wire!
            wb[wIndex + 1] += wb[wIndex] - (bIndex + 1); //the right birds flew to the next wire
        }
        wb[wIndex] = 0; //the shooted wire has NO birds on it!!
    }
    /**************OUTPUT***************/
    for(int i = 0; i < wn; i++)
        cout << wb[i] << endl;

    return 0;
}

int lvl_00_task_06(){
    int n;
    cin >> n;
    int cards[n];
    for(int i = 0; i < n; i++)
        cin >> cards[i];
    int ser = 0, dim = 0;
    for(int j = 0, i = 0, e = n - 1; j < n; j++){
        if(cards[i] > cards[e]){
            if(j % 2 == 0)
            {
                ser += cards[i];
                i++;
            }
            else
            {
                dim += cards[i];
                i++;
            }
        }
        else
        {
            if(j % 2 == 0)
            {
                ser += cards[e];
                e--;
            }
            else
            {
                dim += cards[e];
                e--;
            }
        }
    }
    cout << ser << ' ' << dim << endl;

    return 0;
}

int lvl_00_task_07(){
    int n;
    cin >> n;
    int arr[n][2];
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][0] == arr[j][1])
                count++;
        }
    }

    cout << count << endl;
    return 0;
}

int lvl_00_task_08(){
    char s[8][8];
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            cin >> s[i][j];
    int r = 8, c = 8;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(s[i][j] == 'W')
                r = i;
            if(s[j][i] == 'W')
                c = i;
        }
    }
    int counter = 0;
    if(r == 8 || c == 8){
        counter = 8;
    }
    else{
        for(int i = 0; i < 8; i++){
            if(s[r][i] == 'B')
                counter++;
            if(s[i][c] == 'B')
                counter++;
        }
    }

    cout << counter << endl;
    
    return 0;
}

int lvl_00_task_09(){
    int n;
    cin >> n;
    List lNeg, lPos;
    iniList(&lNeg);
    iniList(&lPos);
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        if(t < 0){
            Push(&lNeg, t);
        }
        else if(t > 0){
            Push(&lPos, t);
        }
        else
        {
            continue;
        }
    }
    int cNeg = Size(&lNeg), cPos = Size(&lPos);

    if(cNeg % 2 != 0){
        if(cPos){
            cout << cNeg << ' ';
            for(int i = 0, e = 0; i < cNeg; i++){
                Pop(&lNeg, &e);
                if(i == cNeg - 1){
                    cout << e;
                    break;
                }
                cout << e << ' ';
            }
            cout << endl << cPos << ' ';
            for(int i = 0, e = 0; i < cPos; i++){
                Pop(&lPos, &e);
                if(i == cPos - 1){
                    cout << e;
                    break;
                }
                cout << e << ' ';
            }
            cout << endl;
        }
        else
        {
            int aa[2];
            Pop(&lNeg, &aa[0]);
            Pop(&lNeg, &aa[1]);
            cNeg = Size(&lNeg);
            cout << cNeg << ' ';
            for(int i = 0, e = 0; i < cNeg; i++){
                Pop(&lNeg, &e);
                if(i == cNeg - 1){
                    cout << e;
                    break;
                }
                cout << e << ' ';
            }
            cout << endl << 2 << ' ' << aa[0] << ' ' << aa[1] << endl;
        }
        cout << 1 << ' ' << 0 << endl;
    }
    else{
        int e;
        Pop(&lNeg, &e, 1);
        cNeg = Size(&lNeg);
        if(cPos){
            cout << cNeg << ' ';
            for(int i = 0, e = 0; i < cNeg; i++){
                Pop(&lNeg, &e);
                if(i == cNeg - 1){
                    cout << e;
                    break;
                }
                cout << e << ' ';
            }
            cout << endl << cPos << ' ';
            for(int i = 0, e = 0; i < cPos; i++){
                Pop(&lPos, &e);
                if(i == cPos - 1){
                    cout << e;
                    break;
                }
                cout << e << ' ';
            }
            cout << endl;
        }
        else
        {
            int aa[2];
            Pop(&lNeg, &aa[0]);
            Pop(&lNeg, &aa[1]);
            cNeg = Size(&lNeg);
            cout << cNeg << ' ';
            for(int i = 0, e = 0; i < cNeg; i++){
                Pop(&lNeg, &e);
                if(i == cNeg - 1){
                    cout << e;
                    break;
                }
                cout << e << ' ';
            }
            cout << endl << 2 << ' ' << aa[0] << ' ' << aa[1] << endl;
        }
        cout << 2 << ' ' << 0 << ' ' << e << endl;
    }
    return 0;
}

int lvl_00_task_10(){
    int n;
    cin >> n;
    int *arr = new int[n];
    cinArr(arr, n);
    Sorting(arr, n);
    int count = 0;
    int sum = 0;
    for(int i = n - 1; i >= 0; i--){
        sum += arr[i];
        count++;
        if(sum > arrSum(arr, i)){
            break;
        }
    }
    cout << count << endl;

    return 0;
}

int lvl_00_task_11(){
    int n;
    cin >> n;
    int arr[n][n];
    arr[0][0] = 1;
    for(int i = 1; i < n; i++){
        arr[i][0] = 1;
        arr[0][i] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    cout << arr[n-1][n-1] << endl;

    return 0;
}

int lvl_00_task_12(){
    int n, m;
    cin >> n >> m;
    int **arr = new int *[m];
    for(int i = 0; i < m; i++){
        arr[i] = new int[3];
    }
    cinArr(arr, m, 3);
    if(m == 0){
        cout << 0 << endl;
        return 0;
    }
    int a[n];
    iniArr(a, n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < m; j++){
            if(i == arr[j][0]){
                a[i - 1] += arr[j][2];
            }
            if(i == arr[j][1]){
                a[i - 1] -= arr[j][2];
            }
        }
    }
    bool flag = 0;
    int res = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            res += a[i];
        }
        if(a[i] > 0){
            flag = 1;
        }
    }
    cout << abs(res) << endl;
    return 0;
}

int lvl_00_task_13(){
    int nV;
    cin >> nV;
    int arrV[nV];
    cinArr(arrV, nV);
    int nQ;
    cin >> nQ;
    int **arrQ = new int*[nQ];
    for(int i = 0; i < nQ; i++){
        arrQ[i] = new int[3];
    }
    cinArr(arrQ, nQ, 3);
    int arr[nV];
    arrCpy(arrV, arr, nV);
    Sorting(arr, nV);
    for(int i = 0; i < nQ; i++){
        if(arrQ[i][0] == 1){
            long long sum = arrSum(arrV, arrQ[i][1], arrQ[i][2]);
            cout << sum << endl;
        }
        else{
            long long sum = arrSum(arr, arrQ[i][1], arrQ[i][2]);
            cout << sum << endl;
        }
    }

    return 0;
}

int lvl_00_task_14(){
    int n, k, q;
    cin >> n >> k >> q;
    int **recipes = new int *[n];
    for(int i = 0; i < n; i++){
        recipes[i] = new int[2];
    }
    cinArr(recipes, n, 2);
    int **ques = new int *[q];
    for(int i = 0; i < q; i++){
        ques[i] = new int[2];
    }
    cinArr(ques, q, 2);

    for(int i = 0; i < q; i++)
    {
        int count = 0;
        for(int j = ques[i][0]; j <= ques[i][1]; j++){
            int c = 0;
            for(int a = 0; a < n && c < k; a++){
                if(j >= recipes[a][0] && j <= recipes[a][1])
                    c++;
            }
            if(c >= k)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}

int main()
{
    if(lvl_00_task_14())
        return 1;

    /***************Prob 4***************/
    /* int arr[1000];
    int i = 0;
    for( ; arr[i] != EOF; i++) cin >> arr[i];
    for(int j = 0; arr[j] <= 101 && arr[j] >= 5; j++)
        if(lvl_00_task_04(arr[j]))
            return 1; */

    return 0;
}