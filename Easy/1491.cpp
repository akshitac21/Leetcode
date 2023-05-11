class Solution {
public:
    double average(vector<int>& salary) {
        int mi=INT_MAX,ma=INT_MIN,sum=0;
        for(auto i:salary){
            mi=min(mi,i);
            ma=max(ma,i);
            sum+=i;
        }
        return (sum-ma-mi)*1.0/(salary.size()-2);
    }
};
