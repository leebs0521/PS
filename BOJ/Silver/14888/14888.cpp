/*
    BOJ 14888 -  연산자 끼어넣기
    url: https://www.acmicpc.net/problem/14888
    Silver 1
    date: 2022. 8. 6
*/

#include <iostream>
#include <climits>

#define endl "\n"

using namespace std;

int n, num[11], op[4], oper[10];
int min_val = INT_MAX, max_val = INT_MIN;

int Cal(){
    int res = num[0];

    for(int i=1;i<n;i++){
        
        if(oper[i-1] == 0){
            res = res + num[i];
        }
        else if(oper[i-1] == 1)
            res -= num[i];
        else if(oper[i-1] == 2)
            res *= num[i];
        else
            res /= num[i];
    }

    return res;
}

void ChooseOp(int curr_n){
    if(curr_n == n-1){
        int temp = Cal();
        max_val = max(max_val, temp);
        min_val = min(min_val, temp);
    }
    else{
        for(int i=0;i<4;i++){
            if(op[i] != 0){
                op[i]--;
                oper[curr_n] = i;
                ChooseOp(curr_n+1);
                op[i]++;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=0;i<n;i++)    cin >> num[i];
    for(int i=0;i<4;i++)    cin >> op[i];

    ChooseOp(0);
    
    cout << max_val << endl << min_val;
    return 0;  
}