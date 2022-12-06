class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        const int size = nums.size();

        vector<int> sol;
        
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    sol.push_back(i);
                    sol.push_back(j);
                }
            }
        }
        return sol;
    }    
};

//Other solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            int val = target - nums[i];

            if(m.find(val) == m.end())
            {
                m[nums[i]] = i;
            }
            else
            {
                return {m[val], i};
            }
        }
        return {0,0};
    }  
};
