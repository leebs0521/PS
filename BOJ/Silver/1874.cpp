/*
    BOJ 1874 - 스택 수열
    url: https://www.acmicpc.net/problem/1874
    Silver 3
    date: 2021.9.17
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, i, arr[100000], index;
    stack<int> s;
    vector<char> v;

    cin >> n;

    for(i=0;i<n;i++)    
        cin >> arr[i];
    
    index = 0;
    //arr[index] 숫자가 나올때 까지 1~arr[0] push v에 +추가
    for(i=1;i<=n;i++){
        s.push(i);
        v.push_back('+');

        //arr[index] == s.top()이면 pop v에 -추가
        while(!s.empty() && s.top() == arr[index]){
            index++;
            s.pop();
            v.push_back('-');
        }
    }

    // 스택이 비어있지 않으면 만들수 없으므로 NO   
    if(!s.empty())
        cout << "NO\n";
    else{
        for(i=0;i<v.size();i++)
            cout << v[i] << "\n";
    }
        
    return 0;
}