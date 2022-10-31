/*
    BOJ 15652 - N과 M (4)
    url: https://www.acmicpc.net/problem/15652
    Silver 3 
    date: 2022. 8. 5
*/

#include <iostream>

#define endl "\n"

using namespace std;

int n, m, arr[8];

void Print(){
    for(int i=0;i<m;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}
void Choose(int curr_n,int start){
    if(curr_n == m){
        Print();
    }
    else{
        for(int i=start;i<=n;i++){
            arr[curr_n] = i;
            Choose(curr_n+1, i);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    Choose(0, 1);

    return 0;
}