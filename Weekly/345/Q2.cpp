#include <bits/stdc++.h>
using namespace std;

/*bool sol(vector<int>& derived){
    return accumulate(derived.begin(), derived.end(), 0)%2==0;
}
*/

void sol(vector<int>& derived){
    int x = 0;
    vector<int>ans;
    for (int i : derived){
        x ^= i; //just to see that is there is an adjacent array which can generate derived
        ans.push_back(x);
    }
    
    cout<<!x<<endl;
    for (int i : ans) cout<<i;
    cout<<'\n';
  }



int main(){
    vector<int> derived={1,1,0,1,0,1};

    sol(derived);
}
