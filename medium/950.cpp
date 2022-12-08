class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        vector<int> res(deck.size(), 0);

        for(int i = 0; i<deck.size(); i++)
        {
            q.push(i);
        }

        sort(deck.begin(), deck.end());

        int j = 0;

        while(!q.empty())
        {
            int curr = q.front();
            q.pop();

            res[curr]=deck[j];
            j++;

            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }

        return res;
        
    }
};
