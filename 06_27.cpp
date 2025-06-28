#include<iostream>
#include<vector>
using namespace std;
void sortBycolor(vector<int>&nums){
    int left=0;
        int i=0;
        int right=nums.size()-1;
        while(i<=right){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                i++;
                left++;
        
            }
            else if(nums[i]==1){
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
            }
        }
}
int main(){
    vector<int>array={2,0,2,1,1,0};
    sortBycolor(array);
    for(int i=0; i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
}