#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A;
	cin>>A;
	int cnt=0;
	for(int i=1;i*i<=A;i++)
	{
		if(A%i==0)
		{
			int X=A%i;
			if(i!=X && i%2 == X%2)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
}
