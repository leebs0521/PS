/*
    BOJ 1316 - 그룹단어
    Silver 5
*/

#include <iostream>
#include <string>

using namespace std;

bool is_seq(string s){
    int len, alpha[26] = {0,};

    len = s.length();

    for(int i = 0 ; i<len ; i++){
        if(s[i] == s[i+1])
            continue;
        else{
            alpha[s[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(alpha[i] > 1)
            return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n,cnt = 0;
    string s;

    cin >> n;

    while(n >0){
        cin >> s;
        if(is_seq(s) == true)
            cnt++;
        n--;
    }
    cout << cnt << endl;
    return 0;
}