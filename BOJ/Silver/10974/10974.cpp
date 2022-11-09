/*
    BOJ 10974 - 모든 순열
    url: https://www.acmicpc.net/problem/10974
    Silver 3 
    date: 2022. 11. 09
*/

#include <iostream>

#define endl "\n"

using namespace std;

int N, arr[8];
bool visited[8];


void back(int curr_idx, int len){
    if(curr_idx == len){
        for(int i=0;i<len;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else{
        for(int i=0;i<len;i++){
            if(visited[i] == false){
                visited[i] = true;
                arr[curr_idx] = i+1;
                back(curr_idx+1, len);
                visited[i] = false;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    back(0, N);    
    return 0;
}