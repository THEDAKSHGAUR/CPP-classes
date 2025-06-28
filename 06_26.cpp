#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={-1,-2,-2,-1,-5,-3,-8};
    int i=0;
    int j=0;
    while(j<arr.size() && i<arr.size()){
        if(arr[i]<0 && i==j) i++,j++;
        if(arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    //print the array;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}