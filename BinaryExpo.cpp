#include<bits/stdc++.h>
using namespace std;
int BinaryExpo(int base, int exp)
{
	int ans=1;
	while(exp)
	{
		if(exp%2==0)
		{
			base*=base;
			exp/=2;
		}
		else
		{
			ans*=base;
			exp-=1;
		}
	}
	cout<<ans;
}
int main()
{
	BinaryExpo(2,3);
}
