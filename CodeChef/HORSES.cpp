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
	int t,n,max;
	int a[n],b[n];
	cin>>t;
	for(int i=0;i<t;i++)
	{	max=INT_MAX;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(int k=0;k<n;k++)
		{
			for(int p=k+1;p<n;p++)
			{
				if(abs(a[k]-a[p])<max)
				max=abs(a[k]-a[p]);
			}	
		}
		b[i]=max;
	}
	for(int p=0;p<t;p++)
		{
		cout<<b[p]<<endl;
		}
}