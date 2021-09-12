/*
    BOJ 1251 - 단어 나누기
    Silver 5
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string answer ="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";

void divide(string str, int first, int second){
    string a,b,c = "";
    int i;
    for(i=0;i<=first;i++)
        a += str[i];
    for(;i<=second;i++)
        b += str[i];
    for(;i<str.length();i++)
        c += str[i];
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    reverse(c.begin(),c.end());

    a += b + c;
    if(a < answer)
        answer = a;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int i, j, len;
    string s;

    cin >> s;
    len = s.length();

    for(i=0;i<len-2;i++){
        for(j=i+1;j<len-1;j++){
            divide(s, i, j);
        }
    }
    
    cout << answer << endl;

    return 0;
}