/*
    BOJ 15596 - 정수 N개의 합
    url: https://www.acmicpc.net/problem/15596
    Bronze 2 
    date: 2022. 7. 30
*/

#include <vector>

long long sum(std::vector<int> &a) {
   long long ans = 0;
    
    for(auto n : a)
        ans += n;
    
   return ans;
}