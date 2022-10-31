/*
    BOJ 11723 - 집합
    url: https://www.acmicpc.net/problem/11723
    Silver 5
    date: 2022.3.14
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int M;

    cin >> M;
    string str;
    int n, bitSet = 0;

    while(M--){
        cin >> str;

        if(str == "add"){
            cin >> n;
            bitSet |= (1<<n);
        }
        else if(str == "check"){
            cin >> n;
            if(bitSet & (1<<n))
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else if(str == "remove"){
            cin >> n;
            bitSet &= ~(1<<n);
        }
        else if(str == "toggle"){
            cin >> n;
            bitSet ^= (1<<n);
        }
        else if(str == "all"){
            bitSet |= (1<<21) - 1;
        }
        else if(str == "empty"){
            bitSet = 0;
        }
    }

    return 0;
}
