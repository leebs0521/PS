/*
    BOJ 18111 - 마인크래프트
    url: https://www.acmicpc.net/problem/18111
    Silver 2
    date: 2022.3.10
*/

#include <iostream>

#define endl "\n"

using namespace std;

int arr[501][501];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M, B;
    int max = 0, min = 210000000;

    cin >> N >> M >> B;

    for(int i=0;i<N;i++){
        for(int j=0; j<M;j++){
            int temp;
            cin >> temp;
            if(max < temp)
                max = temp;
            if(min > temp)
                min = temp;
            arr[i][j] = temp;
        }
    }

    int mTime = 2100000000, height = 0;

    for(int i=min; i<=max;i++){
        int add = 0, remove = 0;

        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                int temp = i - arr[j][k];

                if(temp > 0 )
                    add += temp;
                else
                    remove += -temp;
            }
        }

        if(add <= remove + B){
            int tempT = add + remove*2;

            if(tempT <= mTime){
                mTime =  tempT;
                height = i;
            }
        }
    }
    cout << mTime << " " << height;
    return 0;
}