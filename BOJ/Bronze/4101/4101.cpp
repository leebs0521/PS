/*
    BOJ 4101 - 크냐?
    url: https://www.acmicpc.net/problem/4101
    Bronze 5
    date: 2022. 8. 17
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;

    while(1){
        cin >> n >> m;

        if( n == 0 && m == 0)
            break;
        else{
            if(n > m)
                cout << "Yes";
            else
                cout << "No";
            
            cout << endl;
        }
    }
    return 0;
}