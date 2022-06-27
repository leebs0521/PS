
/*
    BOJ 16439 - 치킨치킨치킨
    url: https://www.acmicpc.net/problem/16439
    Silver 4
    date: 2022. 6. 27
*/

#include <iostream>
#include <vector>

#define endl "\n"

using namespace std;

int n, m, result;
int arr[30][30];
int pick[3];

void combination(int idx, int cnt){
    if(cnt != -1){
        pick[cnt] = idx;
    }
    if(cnt == 2){
        int sum = 0;
        for(int i=0; i<n; i++){
            int score = 0;
            for(int j=0; j<3; j++){
                score = max(arr[i][pick[j]], score);
            }
            sum += score;
        }
        result = max(sum, result);
        return;
    }
    for(int i=idx; i<m; i++){
        combination(i+1, cnt+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;


    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> arr[i][j];
    

    combination(-1, -1);

    cout << result << endl;
    return 0;
}