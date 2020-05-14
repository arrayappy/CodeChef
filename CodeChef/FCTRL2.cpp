/*
 * Created : 2020-01-02 09:41:09
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
	int t;
	cin>>t;
	while(t--)
	{
		int n,fac=1;
		cin>>n;
		for(int i=1;i<n+1;i++)
		{
			fac*=i;
		}
		cout<<fac<<endl;
	}
}
