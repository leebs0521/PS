/*
    BOJ 2920 - 음계
    url: https://www.acmicpc.net/problem/2920
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[8];
    bool asc =true, des = true;

    for(int i=0;i<8;i++){
        cin >> arr[i];
    }

    if(arr[0] == 1){

        for(int i = 1;i<8;i++){
            if(arr[i] != i+1){
                asc = false;
                break;
            }
        }
        des = false;
    }
    else if(arr[0] == 8){
        asc = false;
        for(int i = 1;i<8;i++){
            if(arr[i] != 8-i){
                des = false;
                break;
            }
        }
    }
    else{
        asc = false;
        des = false;
    }

    if(asc) cout << "ascending\n";
    else if(des) cout << "descending\n";
    else cout << "mixed\n";
    
    return 0;
}