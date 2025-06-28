#include<iostream>
#include<algorithm>
using namespace std;
void printArray(int arr[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[4][4]={{2,3,1,2},{1,1,1,1},{8,9,7,10},{5,4,6,4}};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    printArray(arr);

}