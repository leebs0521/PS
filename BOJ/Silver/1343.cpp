/*
    BOJ 1343 - 폴리오미노
    Sliver 5
*/

#include<iostream>
#include<string>
using namespace std; 

int main()
{
	string n;
	string result;
 
	cin >> n;
 
	if (n.size() == 1 && n[0]=='X'){
		cout << -1 << endl;
		return 0;
	}
 
	int i = 0;
	int cnt = 0;
 
	while (n[i] != '\0')
	{
		while (n[i] == 'X' || n[i] != '.')
		{
			i++;
			cnt++;
 
			if (n[i] == '\0')
				break;
		}
 
		if (cnt % 2 == 0)
		{
			while (4 <= cnt)
			{
				result += "AAAA";
				cnt -= 4;
			}
			while (2 <= cnt)
			{
				result += "BB";
				cnt -= 2;
			}
		}
 
		if (cnt != 0)
		{
			cout << -1 << endl;
			return 0;
		}
		if (n[i] == '.')
		{
			result += ".";
			i++;
		}
	}
 
	cout << result << endl;
 
	
	return 0;
}