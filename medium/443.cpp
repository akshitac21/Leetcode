class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        sort(begin(nums),end(nums));
        int s = nums[0];
        for(int i=1;i<nums.size();i++){
            if(!(s^nums[i])){
                ans.push_back(nums[i]),i+=1;
                if(i<nums.size())s=nums[i];
                else break;
            }
                else s = nums[i];
        }
        return ans;
    }
};

/*
Step 1: Check if nums is empty, which is not the case, so continue.

Step 2: Sort nums in ascending order. The sorted vector is {1,2,2,3,3,4,7,8}.

Step 3: Initialize s to the first element of nums, which is s = 1.

Step 4: Start the loop with i = 1 and compare s with nums[i], which is 2.

Step 5: s is not equal to nums[i], so update s to 2.

Step 6: Continue the loop with i = 2 and compare s with nums[i], which is also 2.

Step 7: s is equal to nums[i], so add nums[i] (which is 2) to ans, increment i by 1 to skip the next element, and update s to the next element in nums, which is 3.

In step 7 of the execution, the variable i is incremented by 1 before the loop continues. 
So after ans.push_back(nums[i]), i+=1, i is equal to 3. Therefore, in step 8, the loop continues with i = 4, 
since the for loop increments i by 1 at the end of each iteration.

Step 8: Continue the loop with i = 4 and compare s with nums[i], which is also 3.

Step 9: s is equal to nums[i], so add nums[i] (which is 3) to ans, increment i by 1 to skip the next element, and update s to the next element in nums, which is 4.

Step 10: Continue the loop with i = 6 and compare s with nums[i], which is not equal to s.

Step 11: Update s to nums[i], which is 2.

Step 12: Continue the loop with i = 7 and compare s with nums[i], which is also not equal to s.

Step 13: Update s to nums[i], which is 3.

Step 14: The loop terminates because we have reached the end of the vector.

Step 15: Return the ans vector, which is {2,3}.

So the output of the function for the input nums = {4,3,2,7,8,2,3,1} is {2,3}.

*/
