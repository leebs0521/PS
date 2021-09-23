/*
    BOJ 2675 - 문자열 반복
    url: https://www.acmicpc.net/problem/2675
    [Tier]
    date: 
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    while(n--){
        int k;
        string str;
        cin >> k >> str;

        for(int i=0; i<str.length();i++){
            for(int j=0;j<k;j++){
                cout << str[i];
            }
        }
        cout << "\n";
    }
    
    return 0;
}