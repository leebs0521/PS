/*
    BOJ 4949 - 균형잡힌 세상
    url: https://www.acmicpc.net/problem/4949
    Silver 4 
    date: 2022.3.8
*/

#include <iostream>
#include <stack>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    
    while(1){
        getline(cin, str);
        stack<char> s;
        if(str.length() == 1 && str[0] =='.')
            break;
        else{
            for(int i=0;i<str.length();i++){
                if(str[i] == '(' || str[i] == '[')
                    s.push(str[i]);
                else if(str[i] == ')' || str[i] == ']'){
                    if(s.empty() == true){
                        cout << "no" << endl;
                        break;
                    }
                    else{
                        char ch = s.top();
                        s.pop();
                        if(str[i] == ')' && ch == '('){
                            continue;
                        }
                        else if(str[i] == ']' && ch =='['){
                            continue;
                        }
                        else{
                            cout << "no" << endl;
                            break;
                        }
                    }
                }
                else if(str[i] == '.'){
                    if(s.empty() == true)
                        cout << "yes" << endl;
                    else
                        cout << "no" << endl;       
                }
            }   
        }
    }
    return 0;
}