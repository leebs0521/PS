/*
    BOJ 10828 - 스택
    url: https://www.acmicpc.net/problem/10828
    Silver 4
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int nWord, input;
string str, command;

void parsing(string str){

    // 문자열 안에 ' '가 없을 경우 단일 명령어 이므로 단순 처리
    if(str.find(' ')== -1){
        command = str;
        nWord = 1;
    }

    // ' ' 있으면 정수도 포함하므로 나누어서 처리 해줌
    else{
        int pos = str.find(' ');
        command = str.substr(0,pos);
        input = stoi(str.substr(pos+1,str.length()));
        nWord = 2;
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    stack<int> s;

    cin >> n;
    cin.ignore();
    while(n--){
        int item;

        //한줄 씩 입력 받아서 parsing 함수를 통해 명령어 파싱
        getline(cin,str);
        parsing(str);

        // top, size, empty등 입력 문자열이 단일 명령어일 경우
        if(nWord == 1){
            if(command == "top"){
                if(s.empty()){
                    cout << "-1\n"; 
                    continue;
                }
                item = s.top();
                cout << item << endl;
            }
            else if(command == "size")
                cout << s.size() << endl;
            else if(command == "empty")
                cout << s.empty() << endl;
            else if(command == "pop"){
                if(s.empty()){
                    cout << "-1" << endl;
                    continue;
                }
                item = s.top();
                s.pop();
                cout << item << endl;

            }
        }

        //push와 같이 정수도 같이 입력받을 경우
        else{
            if(command == "push")
                s.push(input);
        }      
    }
    return 0;
}