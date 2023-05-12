class Solution {
public:
    bool isPalindrome(string s) {
       string ans;

       for(int i=0; i<s.length(); i++){
           if(s[i] >= 65 && s[i] <= 90){ //upper
               ans.push_back(s[i] + 32); //convert to lower
           }
           else if(s[i] >= 97 && s[i] <= 122){ //lower
               ans.push_back(s[i]);
           }
           else if(s[i] >= '0' && s[i] <= '9'){
               ans.push_back(s[i]);
           }
       }

       int i=0, j=ans.length()-1;
       while(i <= j){
           if(ans[i] != ans[j]){
               return false;
           }
           i++;
           j--;
       }
       return true;
        
    }
};
