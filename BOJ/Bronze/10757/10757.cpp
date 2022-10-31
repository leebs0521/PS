/*
    BOJ 10757 - 큰수 A+B
    url: https://www.acmicpc.net/problem/10757
    Bronze 5
    date: 2022. 7. 31
*/

#include <iostream>

#define endl "\n"

using namespace std;

int a[100002], b[100002];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s1 ,s2, res ="";

    cin >> s1 >> s2;

    int len1 = s1.length(), len2 = s2.length();
    int diff = abs(len1-len2);

    if(len1 > len2){
        for(int i=0;i<diff;i++){
            s2 = '0' + s2;
        }
    }
    else if(s2.length() > s1.length()){
        for(int i=0;i<diff;i++){
            s1 = '0' + s1;
        }
    }

    int carry = 0;
    for(int i=s1.length()-1;i>=0;i--){
        int a_back = s1[i] - '0';
        int b_back = s2[i] - '0';

        int ans = carry + a_back + b_back;
        res = (char)(ans%10 +'0') + res;
        carry = ans/10;
    }
    if(carry == 1){
        res = (char)(1+'0') + res;
    }

    cout << res;
    return 0;
}