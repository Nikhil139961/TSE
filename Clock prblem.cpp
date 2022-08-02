#include<bits/stdc++.h>
using namespace std;
int main()
{

	int sh=0,sm=0,ah=0,am=0,rh=0,rm=0;
	cin>>sh>>sm;
	cin>>ah>>am;
	if(am<sm)
	{
		ah--;
		am+=60;
		rh=ah-sh;
		rm=am-sm;
	}
	if(ah<sh);
	
	{
		ah+=24;
		rh=ah-sh;
		rm=am-sm;
	}
	if(rh>24)
	{
	    rh=rh%24;
	}
	cout<<rh<<" "<<rm;
	return 0;
   
}
