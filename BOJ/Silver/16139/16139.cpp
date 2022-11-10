/*
    BOJ 16139 - 인간-컴퓨터 상호작용
    url: https://www.acmicpc.net/problem/16139
    Silver 1
    date: 2022. 11. 10
*/

#include <iostream>

#define endl "\n"

using namespace std;

int sum[26][200001];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    int t;

    cin >> str >> t;

    for(int i=0;i<str.length();i++){

        if(i == 0 )
            sum[str[i]-'a'][i] = 1;
        
        else{
            for(int j=0;j<26;j++){
                if(str[i] - 'a' == j){
                    sum[j][i] = sum[j][i-1] + 1;
                }
                else{
                    sum[j][i] = sum[j][i-1];
                }
            }
        }
    }
    while(t--){
        char alpha;
        int start, end;

        cin >> alpha >> start >> end;

        if(start == 0){
            cout << sum[alpha-'a'][end] << endl;
        }
        else
            cout << sum[alpha-'a'][end] - sum[alpha-'a'][start-1] << endl;
    }
    
    return 0;
}