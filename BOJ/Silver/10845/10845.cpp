/*
    BOJ 10845 - 큐
    url: https://www.acmicpc.net/problem/10845
    Silver 4
    date: 2021.9.18
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    queue<int> q;
    cin >> n;

    while(n--){
        string str;
        int item;
        cin >> str;
        if(str == "push"){
            int para;
            cin >> para;
            q.push(para);
        }
        else if(str == "front"){
            if(q.empty())
                cout << "-1\n";
            else{
                item = q.front();
                cout << item << "\n";
            }
        }
        else if(str == "back"){
             if(q.empty())
                cout << "-1\n";
            else{
                item = q.back();
                cout << item << "\n";
            }
        }
        else if(str == "size"){
            item = q.size();
            cout << item << "\n";
        }
        else if(str == "pop"){
            if(q.empty())
                cout << "-1\n";
            else{
                item = q.front();
                q.pop();
                cout << item << "\n";
            }
        }
        else if(str == "empty"){
            item = q.empty();
            cout << item << "\n";
        }
        
    }
    return 0;
}