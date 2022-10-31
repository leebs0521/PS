/*
    BOJ 9498 - 시험 성적
    url: https://www.acmicpc.net/problem/9498
    Bronze 4
    date: 2021. 9. 26
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    char a;

    cin >> n;

    if(n >= 90)
        a = 'A';
    else if(n>=80)
        a = 'B';
    else if(n>=70)
        a = 'C';
    else if(n>=60)
        a = 'D';
    else
        a = 'F';

    cout << a;   
    return 0;
}