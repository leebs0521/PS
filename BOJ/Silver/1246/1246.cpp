/*
    BOJ 1246 - 온라인 판매
    Siver 5
*/

#include <iostream>
#include <vector>
#include <algorithm>

bool compare(int a, int b){
    return a > b;
}
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, i, input, temp, max = -1, max_i = 0;
    vector<int> v;

    cin >> n >> m;

    for(i=0;i<m;i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(),v.end(), compare);
   
    for(i=0;i<m;i++){
        if(v[i] == v[i+1])
            continue;
        else{
            if((n >= i+1))
                temp = v[i] * (i+1);
            else
                temp = v[i] * n;
            if( max < temp){
                max = temp;
                max_i = i;
            }
        }
    }
    cout << v[max_i] << " " << max << endl;

    return 0;

}