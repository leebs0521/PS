/*
    BOJ 4153 - 직각삼각형
    url: https://www.acmicpc.net/problem/4153
    Bronze 3 
    date: 2021. 9. 29
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while(1){
        int arr[3], max = 0, temp=0, temp1=0;

        for(int i=0;i<3;i++){
            cin >> arr[i];
            if(arr[max] < arr[i])
                max = i;
        }

        if(arr[0]==0 && arr[1]==0 && arr[2]==0)
            break;

        for(int i=0;i<3;i++){
            if(i == max)
                temp += arr[i]*arr[i];
            else{
                temp1 += arr[i]*arr[i];
            }
        }
        if(temp == temp1)
            cout << "right\n";
        else
            cout << "wrong\n";
    }
    return 0;
}