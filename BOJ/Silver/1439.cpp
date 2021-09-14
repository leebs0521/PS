/*
    BOJ 1439 - 뒤집기
    url: https://www.acmicpc.net/problem/1439
    Silver 5
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int i, one = 0, zero = 0;
    char prev;
    string s;

    cin >> s;
    prev = s[0];

    if(prev == '0')
        zero++;
    else
        one++;
        
    for(i=1;i<s.length();i++){
        // '0'
        if(s[i] == '0'){
            if(s[i] != prev)
                zero++;
        }
        // '1'
        else{
            if(s[i] != prev)
                one++;
        }
        prev = s[i];
    }
    
    cout << min(one, zero) << endl;

    return 0;


    return 0;
}