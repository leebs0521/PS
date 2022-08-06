/*
    BOJ 2580 - 스도쿠
    url:https://www.acmicpc.net/problem/2580
    Gold 4
    date: 2022. 8. 6
*/

#include <iostream>
#include <vector>

#define endl "\n"

using namespace std;

bool flag = false;
vector<pair<int, int>> points;
int score[9][9];

int cnt;

void Print(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout << score[i][j] << " ";
        }
        cout << endl;
    }
}
bool Possible(int x, int y){

    int range_x = x/3, range_y = y/3;

    for(int i=0;i<9;i++){
        if(score[x][y] == score[i][y] && i != x){
            return false;
        }
        if(score[x][y] == score[x][i] && i != y){
            return false;
        }
    }

    for(int i = 3*range_x; i < 3*range_x+3; i++)
        for(int j = 3*range_y; j < 3*range_y+3; j++)
        {
            if(score[i][j] == score[x][y])
            {
                if(i != x && j != y)
                    return false; 
            }
        }
    return true; 
}

void back(int curr_n){
    if(curr_n == cnt){
        Print();
        flag = true;
    }
    else{
        int x = points[curr_n].first, y = points[curr_n].second;
        for(int i=1;i<=9;i++){
            score[x][y] = i;
            if(Possible(x, y))
                back(curr_n+1);
            if(flag)
                return;
        }
        score[x][y] = 0;    
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    pair<int, int> point;    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> score[i][j];
            if(score[i][j] == 0){
                cnt++;
                point = make_pair(i, j);
                points.push_back(point);
            }
        } 
    }
    back(0);
    return 0;
}