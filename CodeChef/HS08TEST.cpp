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
    int a;
	float b,c;
	cin>>a;
	cin>>b;
	if(a>0 && a<=2000 && b>0 && b<=2000)
	{
	if(a%5==0 && b>0.5+a)
	{
		c=b-a-0.50;
	printf("%.2f",c);
	}
	else
	{
	printf("%.2f",b);
	}
	}
	return 0;
}