/*
    BOJ 10871 - X 보다 작은 수
    url: https://www.acmicpc.net/problem/10871
    Bronze 3
    date: 2021. 9. 26
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x;
    vector<int> v;

    cin >> n >> x;

    while(n--){
        int input;

        cin >> input;

        if(input < x)
            v.push_back(input);
    }

    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    return 0;
}