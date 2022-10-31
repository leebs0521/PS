/*
    BOJ 16922 - 로마 숫자 만들기
    url: https://www.acmicpc.net/problem/16922
    Silver 4 
    date: 2022. 6. 28
*/

#include <iostream>

#define endl "\n"

using namespace std;


bool isNum[2000] = {false, };
int arr[4] = {1, 5, 10, 50};
int n, res;

void DFS(int cnt, int index, int sum){

    if(cnt == n){
        if(isNum[sum] == false){
            isNum[sum] = true;
            res++;
        }
        return;
    }
    for(int i=index; i<4; i++)
        DFS(cnt+1, i, sum+arr[i]);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    DFS(0, 0, 0);
    cout << res << endl;
    return 0;
}