/*
    BOJ 5086 - 배수와 약수
    url: https://www.acmicpc.net/problem/5086
    Bronze 3
    date: 2022. 8. 4
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b;

    while(1){
        cin >> a >> b;

        if(a == 0 && b == 0)
            break;
        
        else{
            if(b % a == 0)
                cout << "factor";
            else if(a % b == 0 )
                cout << "multiple";
            else
                cout << "neither";
        }
        cout << endl;
    }
    return 0;
}