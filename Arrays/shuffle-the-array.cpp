class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      
        vector<int>v; // vector to store the end results
        int p;
        int q=n; // two pointers
        while(q<nums.size()){
            v.push_back(nums[p]);
            v.push_back(nums[q]);
            p++;
            q++;
        }
            
        
        return v;
      }
};
