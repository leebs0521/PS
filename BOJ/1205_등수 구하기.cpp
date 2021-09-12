/*
    BOJ 1205 - 등수구하기
    Siver 5
*/

#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int i, temp, n, new_score, p, cnt = 1, over_cnt = 1;
    vector<int> v;

    cin >> n >> new_score >> p;
    for(i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }

    for(i=0;i<n;i++){
        if(v[i] > new_score) cnt++;
        if(v[i] >= new_score) over_cnt++;
    }
    if(cnt > p) cnt = -1;
    else if(over_cnt > p ) cnt = -1;
    cout << cnt << endl;
    return 0;
}