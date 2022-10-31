/*
    BOJ 2981 - 검문
    url: https://www.acmicpc.net/problem/2981
    Gold 4
    date: 2022. 8. 15
*/

#include <iostream>
#include <algorithm>
#define endl "\n"

using namespace std;

int arr[101];
int sol[500];  
 
int gcd(int a, int b) {
    return a % b ? gcd(b, a%b) : b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, include_m, i, count(0);
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
 
    include_m = arr[1] - arr[0];
    for (i = 2; i < n; i++)
        include_m = gcd(include_m, arr[i] - arr[i - 1]);
 
    for (i = 1; i*i <= include_m; i++)
        if (include_m%i == 0) {
            sol[count++] = i;
            if (i != include_m / i) sol[count++] = include_m / i;
        }
 
    sort(sol, sol + count);
    for (int i = 0; i < count; i++) 
        if (sol[i] != 1)
            cout << sol[i] << " ";
    return 0;
}