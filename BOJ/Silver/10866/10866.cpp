/*
    BOJ 10866 - 덱
    url: https://www.acmicpc.net/problem/10866
    Silver 4
    date: 2021.9.18
*/

#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    deque<int> d;
    cin >> n;
    while(n--){
        string op;
        int para, item;
        cin >> op;
        if(op.find("push")!=-1){
            cin >> para;
            if(op.find("back")!=-1){
                d.push_back(para);
            }
            else if(op.find("front")!=-1){
                d.push_front(para);
            }
        }
        else if(op=="pop_front"){
            if(d.empty())
                cout << "-1\n";
            else{
                item = d.front();
                d.pop_front();
                cout << item << "\n";
            }
        }

        else if(op=="pop_back"){
            if(d.empty())
                cout << "-1\n";
            else{
                item = d.back();
                d.pop_back();
                cout << item << "\n";
            }
        }

        else if(op=="size")
            cout << d.size() << "\n";

        else if((op=="empty")){
            item = d.empty();
            cout << item << "\n";
        }

        else if(op=="front"){
            if(d.empty())
                cout << "-1\n";
            else{
                item = d.front();
                cout << item << "\n";
            }
        }

        else if(op=="back"){
            if(d.empty())
                cout << "-1\n";
            else{
                item = d.back();
                cout << item << "\n";
            }
        }
    }
    return 0;
}