/*
    BOJ 1404 - 토너먼트
    Silver 5
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int i, j, arr[8][8]={0,};

    for(i=0;i<=7;i++){
        int p;
        for(j=i+1;j<=7;j++){
            cin >> p;
            arr[i][j]=p;
            arr[j][i]=100 - p;
        } 
    }

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}