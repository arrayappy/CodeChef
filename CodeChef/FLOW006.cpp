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
	int n,r,s=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	for(int i=0;i<n;i++)
	{	s=0;
	while(arr[i]>0)
		{
			r=arr[i];
			s=s+r;
			arr[i]=arr[i]/10;
		}
		cout<<s<<"\n";
		}
		return 0;
}