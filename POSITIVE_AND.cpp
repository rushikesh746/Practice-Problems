#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for( int i =0; i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>p;
        p={2,3,1};
        if(n==1){
            cout<<"1 \n";
        }
        else if((n &(n-1))==0)
        {
            cout<<"-1 \n";
        }
        else
        {
        for(int j=4;j<=n;j++)
        p.push_back(j);
        for(int j=3;j<n;j++)
        {
            if((p[j]&p[j-1])==0)
            swap(p[j],p[j+1]);
            
        }
        for(int j=0;j<n;j++)
            cout<<p[j]<<" ";
        cout<<"\n";
        }    
}
}