/*
 * Created : 2020-01-01 09:41:09
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
	int t,tb;
	cin>>t;
	tb=t;
	while(tb--)
	{
		int n,k,t,tn;
		int a[n];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		t=a[k-1];
		sort(a,a+n);
		for(int j=0;j<n;j++)
		{
			if(a[j]==t)
			{
				tn=j+1;
			}
		}
		cout<<tn<<endl;
	}
}