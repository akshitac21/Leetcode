#include <bits/stdc++.h>
using namespace std;

void sol(vector<int> &arr,int k){
    int n = arr.size();
    vector<bool>has(n);

    int index = 0;
    int moves = k;

    while(has[index]==false){
        has[index] = true;
        index = (index+moves)%n;
        moves += k;
    } //josephus problem

    vector<int> ans;
    for(int i=0;i<n;i++){
        if(has[i]==false){
            ans.push_back(arr[i]);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int k = 3;

sol(arr,k);

}

 vector<int> circularGameLosers(int n, int k) {
        map<int, bool> m;
        int i = 0, l = 1;
        m[i] = true;
        while (true){
            cout << i << endl;
            if (m[(i+l*k)%n]){
                break;
            } else {
                m[(i+l*k)%n] = true;
                i = (i+l*k)%n;
            }
            l++;
        }
        
        vector<int> ans;
        for (int i=0; i<n; i++){
            if (!m[i]){
                ans.push_back(i+1);
            }
        }
            
        return ans;
    }
