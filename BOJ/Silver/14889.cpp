/*
    BOJ 14889 - 스타트와 링크
    url: https://www.acmicpc.net/problem/14889
    Silver 2
    date: 2022. 8. 6
*/

#include <iostream>
#include <climits>

#define endl "\n"

using namespace std;

int n, min_diff = INT_MAX;
int team[20], s[20][20];

int Cal(){
    int team_zero = 0, team_one = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(team[i] == 0 && team[j] == 0){
                team_zero += s[i][j] + s[j][i];
            }
            else if(team[i] == 1 && team[j] == 1){
                team_one += s[i][j] + s[j][i];
            }
        }
    }
    return abs(team_one - team_zero);
}

void Choose(int curr_n, int start){
    if(curr_n == n/2){
        int temp_diff = Cal();
        min_diff = min(temp_diff, min_diff);
    }
    else{
        for(int i=start;i<n;i++){
            team[i] = 1;
            Choose(curr_n+1, i+1);
            team[i] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> s[i][j];


    Choose(0, 0);

    cout << min_diff;
    return 0;
}