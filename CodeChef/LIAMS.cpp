#include<iostream>
#include<algorithm>

using namespace std;
int main()
{   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	while(n--)
	{
		string str1,str2,str3;
		cin>>str1,str2,str3;
/*		if(strstr(str1.c_str(),str2.c_str())) 
		{
			if(strstr(str2.c_str(),str3.c_str()))
			{
			cout<<"good"<<endl;
			}
			else
			{
			cout<<"bad"<<endl;
			}
		}
		else
		{
			cout<<"bad"<<endl;
		}*/
		
		bool b1 = boost::algorithm::contains(str1, str2);
		if(b1==1)
		{
			bool b2 = boost::algorithm::contains(str2, str3);
			if(b2==1)
			{
				cout<<"good"<<endl;
			}
			else
			{
				cout<<"bad"<<endl;
			}
		}
		else
		cout<<"bad"<<endl;
	}
}


