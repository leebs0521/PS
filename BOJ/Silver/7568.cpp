/*
    BOJ 7568 - 덩치
    url: https://www.acmicpc.net/problem/7568
    Silver 5 
    date: 2022.3.8
*/

#include <iostream>
#include <vector>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    vector<pair<int,int>> v;
    vector<int> rank(50,1);
    cin >> N;

    for(int i=0;i<N;i++){
        int x,y;

        cin >> x >> y;
        v.push_back({x,y});
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j)
                continue;
            else{
                if (v[i].first < v[j].first && v[i].second < v[j].second)
                        rank[i]++; 
            }
        }
    }
    for(int i=0;i<N;i++)
        cout << rank[i] << " ";
    cout << endl;

    return 0;
}