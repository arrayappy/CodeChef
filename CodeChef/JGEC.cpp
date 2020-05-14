/*
 * Created : 2020-01-23 09:41:09
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
		int n,count=0;
		cin>>n;
		string str; 
    	string str1 = "JGEC";
    	size_t found = str.find(str1); 
    	if (found != string::npos) 
   			count++;
    	cout<<count;
	}
	return 0;
}

