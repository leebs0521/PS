/*
    BOJ 1406 - 에디터
    url: https://www.acmicpc.net/problem/1406
    Silver 3
    date: 2021.9.17
*/

#include <iostream>
#include <list>
#include <string>

using namespace std;

string str;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, i;
    list<char> li;

    cin >> str >> n;

    for(i=0;i<str.length();i++)
        li.push_back(str[i]);
    
    list<char>::iterator iter = li.end();
    while(n--){
        char command, para;
        cin >> command;
        if(command == 'P'){
            cin >> para;
            li.insert(iter,para);
        }
        else if(command == 'L'){
            if(iter != li.begin())
                iter--;
        }
        else if(command == 'D'){
            if(iter != li.end())
                iter++;
        }
        else if(command == 'B'){
            if(iter != li.begin())
                iter = li.erase(--iter);
        }
    }
    for(iter=li.begin();iter!=li.end();iter++)
        cout << *iter;
    return 0;
}