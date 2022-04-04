/*
    BOJ 7662 - 이중 우선순위 큐
    url: https://www.acmicpc.net/problem/7662
    Gold 5
    date: 2022. 4. 4
*/

#include <iostream>
#include <set>
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int k;
        multiset<int> ms;
        cin >> k;
        for(int i=0; i<k; i++){
            char op;
            int n;
            cin >> op >> n;

            if(op == 'I'){
                ms.insert(n);
            }
            else{
                if(!ms.empty() && n == -1){
                    ms.erase(ms.begin());
                }
                else if(!ms.empty() && n == 1) {
                    auto it = ms.end();
                    it--;
                    ms.erase(it);
                }
            }
        }
        if(ms.empty())
            cout << "EMPTY" << endl;
        else{
            auto it = ms.end();
            it--;
            cout << *it << " " << *ms.begin() << endl;
        }
    }
    return 0;
}