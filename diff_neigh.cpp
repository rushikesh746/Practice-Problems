#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m,i,j,x,y,k=4;
        cin>>n>>m;
        long arr[n*m];

        for(i=0,x=1;i<n*m;i+=2,x++){
            arr[i]=x;
            arr[i+1]=x;
            if(x==k){
                x=0;
            }
        }
        if(m%2==0){
        for(i=0,y=1;i<n*m-(n-1);i++,y++){
            cout<<arr[i]<<" ";
            if(y%m==0){
                cout<<"\n";
                    i--;
                if(y==n*m){
                    break;
                }
            }
        }
        }
        else{
                for(i=0,y=1;i<n*m;i++,y++){
                    cout<<arr[i]<<" ";
                    if(y%m==0){
                        cout<<"\n";
                        if(y==n*m){
                            break;
                    }
                    }
                }
        }
    }
}
