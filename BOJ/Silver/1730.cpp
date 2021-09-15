/*
    BOJ 1730 - 판화
    url: https://www.acmicpc.net/problem/1730
    Silver 5
*/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int n;

bool isVaild(int x, int y){
    if((x>=0 && x<n) 
    &&(y>=0 && y <n))
        return true;
    else
        return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int i, x, y;
    bool per[10][10], hor[10][10];
    string str;
    
    memset(per,false,100);
    memset(hor,false,100);

    cin >> n >> str;

    x = 0, y = 0;

    for(i=0;i<str.size();i++){
        if(str[i] == 'U'){
            if(isVaild(x-1,y)==false)
                continue;
            per[x][y] = true;
            per[--x][y] = true;
        }
        else if(str[i] =='D'){
            if(isVaild(x+1,y)==false)
                continue;
            per[x][y] = true;
            per[++x][y] = true; 
        }
        else if(str[i] == 'R'){
            if(isVaild(x,y+1)==false)
                continue;
            hor[x][y] = true;
            hor[x][++y] = true;
        }
        else{
            if(isVaild(x,y-1)==false)
                continue;
            hor[x][y] = true;
            hor[x][--y] = true;
        }
    }

    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            if(per[x][y] && hor[x][y])
                cout << '+';
            else if(per[x][y] && !hor[x][y])
                cout << '|';
            else if(!per[x][y] && hor[x][y])
                cout << '-';
            else
                cout << '.';    
        }
        cout << endl;
    }   
    return 0;
}