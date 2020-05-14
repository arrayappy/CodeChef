/*
 * Created : 2020-01-25 09:41:09
 * Author : Appala Naidu Gadu
 * Handle : arrayappy
 * Email : arrayappy@gmail.com
 * StopStalk : https://www.stopstalk.com/user/profile/arrayappy
 * Motto : Keep Calm and Code On.
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int readTestCases;
	cin>>readTestCases;
	while(readTestCases--)
	{
		int n,profit=0;
		int stores,people,price;
		cin>>n;
		while(n--)
		{		int max=0;
				cin>>stores>>people>>price;
				stores++;
				max=people/stores;
				max*=price;
				if(max>profit)
					profit=max;
		}
		cout<<profit<<endl;
	}
	return 0;
}

