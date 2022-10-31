/*
    BOJ 2941 - 크로아티아 알파벳
    url: https://www.acmicpc.net/problem/2941
    Silver 4 
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    int cnt = 0;
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] == 'c' && str[i+1] == '='){
            cnt++;
            i++;
        }
        else if(str[i] == 'c' && str[i+1] == '-'){
            cnt++;
            i++;
        }
        else if(str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '='){
            cnt++;
            i += 2;
        }
        else if(str[i] == 'd' && str[i+1] == '-'){
            cnt++;
            i++;
        }
        else if(str[i] == 'l' && str[i+1] == 'j'){
            cnt++;
            i++;
        }
        else if(str[i] == 'n' && str[i+1] == 'j'){
            cnt++;
            i++;
        }
        else if(str[i] == 's' && str[i+1] == '='){
            cnt++;
            i++;
        }
        else if(str[i] == 'z' && str[i+1] == '='){
            cnt++;
            i++;
        }
        else
            cnt++;
    }

    cout << cnt;
    return 0;
}
