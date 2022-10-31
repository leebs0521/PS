/*
    BOJ 4344 - 평균은 넘겠지
    url: https://www.acmicpc.net/problem/4344
    Bronze 1
    date: 2022. 7. 30
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t;

    while(t--){
        int n, scores[1000];
        float average, sum = 0, cnt = 0;
        cin >> n;

        for(int i=0;i<n;i++){
            cin >> scores[i];
            sum += scores[i];
        }

        average = sum / n;

        for(int i=0;i<n;i++){
            if(scores[i] > average)
                cnt++;
        }

        cout << fixed;
        cout.precision(3);

        cout << cnt / n *100 << "%" << endl;
    }
    
    return 0;
}