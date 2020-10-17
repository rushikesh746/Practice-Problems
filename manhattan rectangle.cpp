#include <iostream>
#define t 1000000000
using namespace std;
int main(){
int x;
cin>>x;
while(x--){
long long p1,p3,p4,x1,y1,x2,y2,m;
cout<<"Q 0 0\n"<<flush;
cin>>p1;
cout<<"Q "<<t<<" 0\n"<<flush;
cin>>p3;
p3=p3-t;
cout<<"Q 0 "<<t<<"\n"<<flush;
cin>>p4;
p4=p4-t;
cout<<"Q "<<(p1-p3)/2<<" 0\n"<<flush;
cin>>y1;
cout<<"Q 0 "<<(p1-p4)/2<<"\n"<<flush;
cin>>x1;
cout<<"Q "<<(p1-p3)/2<<" "<<t<<"\n"<<flush;
cin>>y2;
y2=t-y2;
cout<<"Q "<<t<<" "<<(p1-p4)/2<<"\n"<<flush;
cin>>x2;
x2=t-x2;
cout<<"A "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<"\n"<<flush;
cin>>m;
if(m<0){
    break;
}
}
return 0;
}
