/*
    BOJ 25501 -  재귀의 귀재
    url: https://www.acmicpc.net/problem/25501
    Bronze 2
    date: 2022. 10. 14
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    while(t--){
        string s;
        cin >> s;
        
        int cnt = 0;
        int left = 0;
        int right = s.length()-1;
        bool flag = true;

        for(;left <= right; left++, right--){
            cnt++;

            if(s[left] != s[right]){
                flag = false;
                break;
            }
        }

        cout << (flag ? 1 : 0) << " " << (flag && s.length() % 2 == 0 ? cnt + 1 : cnt) << "\n";

    }   
    return 0;
}