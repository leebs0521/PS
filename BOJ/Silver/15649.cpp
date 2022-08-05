/*
    BOJ 15649 - N과 M (1)
    url: https://www.acmicpc.net/problem/15649
    Silver 3 
    date: 2022. 8. 5
*/

#include <iostream>

#define endl "\n"

using namespace std;

int n, m, arr[8];
bool visited[8] = {false, };

void Print(){
    for(int i=0;i<m;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}
void Choose(int curr_n){
    if(curr_n == m){
        Print();
    }
    else{
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                visited[i] = true;
                arr[curr_n] = i;
                Choose(curr_n+1);
                visited[i] = false;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    Choose(0);

    return 0;
}