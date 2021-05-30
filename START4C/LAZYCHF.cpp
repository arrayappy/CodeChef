#include<bits/stdc++.h>
#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")
using namespace std;
void solve()
{
	long long int x, m, d;
	cin >> x >> m >> d;
	long long int xm = x * m;
	long long int xd = x + d;
	if (xm > xd)
		cout << xd << endl;
	else
		cout << xm << endl;
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