/*
    BOJ 1380 - 귀걸이
    Silver 5
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, n, i, cnt = 1;
    char b;

    while(1){
        vector<string> name;
        vector<int> v;
        cin >> n;
        if(n == 0)
            break;
        for(i=1;i<=n;i++){
            string first, last, fullname="";
            cin >> first >> last;
            fullname = first + " " + last;
            name.push_back(fullname);
        }

        for(i=1;i<=(2*n-1);i++){
            
            cin >> a >> b;
            if(i<=n){
                v.push_back(1);
            }
            else{
                v[a-1] = -1; 
            }

        }

        for(i=0;i<n;i++){
            if(v[i]!= -1){
                cout << cnt << " " << name[i] << endl;
                break;
            }
        }
        cnt ++;
    }
    
    return 0;
}

// 메모리 오류 추후 다시 ㄲ