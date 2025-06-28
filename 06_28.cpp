//Rotated Array(Leet : 189)
class Solution {
public:
   void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>rotated(n);
    for(int i=0;i<nums.size();i++){
        rotated[(i+k)%nums.size()]=nums[i];
    }
    nums=rotated;
   }
};
