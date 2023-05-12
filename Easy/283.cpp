class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0; //marking the 0
        for(int j=0; j<nums.size(); j++){ //comparing non 0
            if(nums[j]!=0){ //non 0
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};
