/*
 * Created : 2020-01-01 11:15:59
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
	long long int t,n,g,s=0;
	cin>>t;
	int a[t],j;
	for(int i=0;i<t;i++){
		cin>>n;g=n;s=0;
		for(j=1;n/pow(5,j)!=0;j++){
			s+=n/pow(5,j);
		}
		a[i]=s;
	}
	for(int i=0;i<t;i++){
		cout<<a[i]<<endl;
	}
}