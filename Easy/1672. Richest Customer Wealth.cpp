class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich=0;
        for(auto &customer:accounts){
            rich = max(rich, accumulate(customer.begin(),customer.end(),0));
        }
        return rich;
    }
};
