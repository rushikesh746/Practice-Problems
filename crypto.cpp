#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int arr1[27]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103};
int t,m;
cin>>t;
m=t;
while(t--){
    char arr2[100];
    int l,i,x,y;
    cin>>arr2>>l;
    int arr3[l];
    char arr[l+1];
    for(i=0;i<l;i++){
        cin>>arr3[i];
    }
       char arr5[104];
    if(strlen(arr2)==3&&arr2[2]=='1'){
      for(i=0;i<26;i++){
        arr5[arr1[i]]=(char)(i+'A');
      }
      for(i=0;i<26;i++){
        if(arr3[0]%arr1[i]==0){
            break;
        }
      }
      x=arr3[0]/arr1[i];
      y=arr1[i];
      if(arr3[1]%y==0){
        arr[0]=arr5[x];
        for(i=1;i<l;i++){
            arr[i]=arr5[y];
            y=arr3[i]/y;
        }
        arr[l]=arr5[y];
      }
      else{
        arr[0]=arr5[y];
        for(i=1;i<l;i++){
            arr[i]=arr5[x];
            x=arr3[i]/x;
        }
        arr[l]=arr5[x];
      }
      cout<<"Case #"<<m-t<<": ";
      for(i=0;i<=l;i++){
        cout<<arr[i];
      }
      cout<<"\n";
    }
    else if(strlen(arr2)>=3||arr2[2]!='1')
      for(i=1;i<=26;i++){
        arr5[arr1[i]]=(char)((i-1)+'A');
      }
      for(i=1;i<=26;i++){
        if(arr3[0]%arr1[i]==0){
            break;
        }
      }
      x=arr3[0]/arr1[i];
      y=arr1[i];
      if(arr3[1]%y==0){
        arr[0]=arr5[x];
        for(i=1;i<l;i++){
            arr[i]=arr5[y];
            y=arr3[i]/y;
        }
        arr[l]=arr5[y];
      }
      else{
        arr[0]=arr5[y];
        for(i=1;i<l;i++){
            arr[i]=arr5[x];
            x=arr3[i]/x;
        }
        arr[l]=arr5[x];
      }
      cout<<"Case #"<<m-t<<": ";
      for(i=0;i<=l;i++){
        cout<<arr[i];
      }
      cout<<"\n";
    }
}
