class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>num;
        for(int i=0; i<nums.size(); i++){
            num.push_back(nums[i]);
        }

        for(int i=0; i<nums.size(); i++){
            num.push_back(nums[i]);
        }



        return num;
    }
};
