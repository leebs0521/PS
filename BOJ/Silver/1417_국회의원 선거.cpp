/*
    BOJ 1417 - 국회의원 선거
    url: https://www.acmicpc.net/problem/1417
    Silver 5
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, i, me, cnt = 0;
    vector<int> v;
    bool flag;

    cin >> n;
    cin >> me;

    for(i=0;i<n-1;i++){
        int input;
        cin >> input;
        v.push_back(input);     
    }
    // n = 1인 경우 단독 후보이기 떄문에 0
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    
    
    // 비오름차순으로 정렬후 벡터의 최대 값(v[0])과 me 값을 비교
    // v[0] >= me 경우 v[0]-- me++ cnt++
    while(true){
        flag = true;
        sort(v.begin(),v.end(),compare);
        if(v[0] >= me){
           v[0]--;
           me++;
           cnt++;
           flag = false;     
        }
        if(flag)
            break;
    }
    cout << cnt << endl;
    return 0;
}