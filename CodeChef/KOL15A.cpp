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
    int n,i,temp=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {  string str;
       cin>>str;
       int len=str.length();
       temp=0;
        for(int j=0;j<len;j++)
        {
            if(str[j]<58 and str[j]>48)
            {	
                temp+=str[j]-'0';
            }
        }
       arr[i]=temp;
    }
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<endl;
	}
}