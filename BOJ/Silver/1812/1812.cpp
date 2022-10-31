/*
    BOJ 1812 - 사탕
    url: https://www.acmicpc.net/problem/1812
    Silver 5
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, i, temp, sum = 0;
    vector<int> v;
    vector<int> a;
    cin >> N;
    /*
        N = 3) a + b
              -b - c
              +c + a
              --------
              2a
    짝수 식: + 홀수 식: - -> 2a              
    */
    for(i=0; i<N;i++){
        cin >> temp;
        if((i%2)==0)
            sum+=temp;
        else
            sum-=temp;
        v.push_back(temp);
    }
    a.push_back(sum/2);
    for(i=1;i<N;i++)
        a.push_back(v[i-1]-a[i-1]);
    
    for(i=0;i<a.size();i++)
        cout << a[i] << endl;
    return 0;
}