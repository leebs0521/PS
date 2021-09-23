/*
    BOJ 10809 - 알파벳 찾기
    url: https://www.acmicpc.net/problem/10809
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[26];
    string str; 

    memset(arr,-1,sizeof(arr));
    cin >> str;

    for(int i=0; i<str.length(); i++){
        if(arr[str[i]-'a'] == -1)
            arr[str[i]-'a'] = i;
    }

    for(int i=0;i<26;i++)   cout << arr[i] << " ";
    cout << "\n";
    return 0;
}