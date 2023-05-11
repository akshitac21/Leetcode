class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>occurence;
        int ans=0;
        for(int &it:nums){
            ans+=occurence[it];
            occurence[it]++;
        }
        return ans;
    }
};
