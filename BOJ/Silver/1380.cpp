/*
    BOJ 1380 - 귀걸이
    Silver 5
*/

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int arr[101];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, n, i, cnt = 1;
    char b;

    while(1){

        cin >> n;
        cin.ignore();
        string str[n];

        memset(arr,0,sizeof(arr));
        if(n == 0)
            break;
        for(i=0;i<n;i++){
            string input;
            getline(cin,input);
            str[i] = input;
        }

        for(i=0;i<(2*n-1);i++){
            
            cin >> a >> b;
            arr[a-1]++;

        }

        for(i=0;i<n;i++){
            if(arr[i] != 2){
                cout << cnt << " " << str[i];
                break;
            }
        }
        cout << "\n";
        cnt ++;
    }
    
    return 0;
}