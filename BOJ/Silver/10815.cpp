/*
    BOJ 10815 - 숫자 카드
    url: https://www.acmicpc.net/problem/10815
    Silver 5
    date: 2022. 8. 1
*/

#include <iostream>
#include <set>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    set<int> s;

    cin >> n;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        s.insert(num);
    }

    cin >> m;

    for(int i=0;i<m;i++){
        int num;
        cin >> num;
        if(s.find(num) != s.end())
            cout << 1;
        else
            cout << 0;
        cout << " ";
    }
    
    
    return 0;
}