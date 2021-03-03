class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        for (int i=0;i<candies.size();i++){
            if(*max_element(candies.begin(),candies.end())-candies[i]<=extraCandies){
                v.push_back(true);
            }
            else
                v.push_back(false);
        }
       return v; 
    }
};