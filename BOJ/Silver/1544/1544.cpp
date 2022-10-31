/*
    BOJ 1544 - 사이클 단어
    url: https://www.acmicpc.net/problem/1544
    Silver 5
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v;
void isCycle(string str){
    int i, j, k;
    
    for(i=0;i<v.size();i++){
       for(j=0;j<v[i].length();j++){
           /*
            V[i] == str 비교 아닐시
            str 맨 앞 문자를 맨뒤로 보냄
            첫글자 지워주기
           */
            if(v[i] == str)
                return;
            else{
                str += str[0];
                str.erase(0,1);
            } 
        }
    }
    // 벡터안에 Cycle 단어가 없으면 벡터에 추가
    v.push_back(str); 
    return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, i;
    string temp;
    cin >> n;

    for(i=0;i<n;i++){
        cin >> temp;
        if(v.size() == 0)
            v.push_back(temp);
        else
            isCycle(temp);                                        
    }
    
    cout << v.size() << endl;
    return 0;
}