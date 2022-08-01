#include<bits/stdc++.h>
using namespace std;
const int maxi = 1e6+5;
bool Is_Prime(long long num)
{
	if(num==1)
	{
		return false;
	}
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	long long L,R;
	cin>>L>>R;
	for(int x=L;x<=R;x++)
	{
		if(Is_Prime(x))
		{
			cout<<x<<" ";
		}
	}
}
