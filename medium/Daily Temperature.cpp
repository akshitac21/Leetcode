class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> res(temperatures.size(),0);
        stack<int> st;

        for(int i=0; i<temperatures.size(); i++){
            int curr = temperatures[i];
        
        while(st.size() > 0 && temperatures[st.top()] < curr){
            res[st.top()] = i-st.top();
            st.pop();
        }
        st.push(i);
    }
    return res;
    }
};
