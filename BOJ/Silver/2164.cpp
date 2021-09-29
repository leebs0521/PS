/*
    BOJ 2164 - 카드 2
    url: https://www.acmicpc.net/problem/2164
    Silver 4 
    date: 2021. 9. 29
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, phase = 0;
    deque<int> d;

    cin >> n;

    // 1 ~ N 까지 deque push
    for (int i = 1; i <= n; i++)
        d.push_back(i);

    // 카드가 하나만 남을 때 까지
    while (d.size() != 1)
    {
        int item;
        phase++;

        // 가장 앞에 있는 숫자 pop
        item = d.front();
        d.pop_front();

        // 짝수 페이즈에 가장 앞에 있는 숫자를 뒤로 보내므로
        // push back
        if (phase % 2 == 0)
            d.push_back(item);
    }

    cout << d.front();
    return 0;
}