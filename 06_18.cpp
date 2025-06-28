#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,1,0,1,0,1,1,1};
    int n=10;
    int count1=0;
    int count0=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)count0++;
        else if(arr[i]==1)count1++;
    }
    cout<<"count1 is : "<<count1<<endl;
    cout<<"count0 is : "<<count0;
    cout<<endl;
    cout<<"[ ";
    for(int i=0;i<count0;i++){
        cout<<0<<",";
    }
    for(int j=0;j<count1;j++){
        cout<<1<<",";
    }
    cout<<" ]";
}