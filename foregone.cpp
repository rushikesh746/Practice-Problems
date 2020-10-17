#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,m;
	cin>>T;
	m=T;
	while(T--)
	{	int i,a=0,b=0,j;
		char arr[101];
		cin>>arr;
		for(i=strlen(arr)-1,j=0;i>=0;i--,j++){
			if(arr[i]=='4'){
				a+=3*pow(10,j);
				b+=pow(10,j);
			}
			else{
				b+=(arr[i]-48)*pow(10,j);
			}
		}
	cout<<"Case #"<<m-T<<":"<<a<<" "<<b<<"\n";
	}
	return 0;
}
