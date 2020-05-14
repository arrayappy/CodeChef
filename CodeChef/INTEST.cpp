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
{   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);	int a,b,c=0;
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{   int x;
		cin>>x;
		if(x%b==0)
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}