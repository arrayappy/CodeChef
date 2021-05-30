#include <bits/stdc++.h>
#pragma GCC optimize("O2")
#pragma GCC optimize("unroll-loops")
using namespace std;
void solve()
{
	long long int n;
	cin >> n;
	string words[n];
	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int count1 = 0;
		int count2 = 0;
		string word = words[i];
		for (int j = 0; j < word.length(); j++)
		{
			if (!(word[j] >= 'a' && word[j] <= 'm'))
			{
				count1 = 1;
			}
			if (!(word[j] >= 'N' && word[j] <= 'Z'))
			{
				count2 = 1;
			}
		}
		if ((count1 == 1 && count2 == 1) || (count1 == 0 && count2 == 0))
		{
			count = 1;
			break;
		}
	}

	if (count == 1)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}