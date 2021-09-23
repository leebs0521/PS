/*
    BOJ 8958 - OX퀴즈
    url: https://www.acmicpc.net/problem/8958
    Bronze 2
    date: 2021. 9. 23
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    string str;

    cin >> n;

    while(n--){
        int sum =0;
        int seqScore = 1;

        cin >> str;

        for(int i=0; i<str.length();i++){
            if(str[i] == 'O'){
                sum += seqScore++;
            }
            else{
                seqScore = 1;
            }
        }
        cout << sum << "\n";
    }    
    
    return 0;
}