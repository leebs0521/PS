/*
    BOJ 1212 - 8진수 2진수
    url: https://www.acmicpc.net/problem/1212
    Bronze 3
    date: 2021. 9. 28
*/

#include <iostream>
#include <string>

using namespace std;

string binary[8] = {"000","001","010","011","100","101","110","111"};
string ans ="";
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    int index = 0, len;
    cin >> str;
    len = str.length();
    for(int i=0;i<len;i++)
        ans += binary[str[i]-'0'];
    
    len = ans.length();

    if(ans[0] =='0' && ans[1] != '0')
        cout << ans.substr(1,len);
    else if(ans[0] =='0' && ans[1] == '0')
        cout << ans.substr(2,len);
    else
        cout << ans;
    return 0;
}