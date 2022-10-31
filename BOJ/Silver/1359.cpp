/*
    BOJ 1359 - 복권
    Silver 5
*/

#include <iostream>
#include <cstdio>
using namespace std;

int Combination(int a, int b){
    int temp = 1 , temp1 = 1;
    while(b>0){
        temp *=a--;
        temp1 *=b--;                
    }

    return temp / temp1;
}
int main(){

    int n, m, k, ncase, rcase = 0;
    double res;

    cin >> n >> m >> k; 

    ncase = Combination(n,m);
    while(m>=k){
        if(n-m < m-k){
            k++;
            continue;
        }
        rcase += Combination(m,k)*Combination(n-m,m-k);
        k++;
    }
    res = (double)rcase/ncase;

    printf("%.16lf\n",res);

    return 0;
}