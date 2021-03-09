class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele=0;
        for(int n:nums){
            if(count==0){
                ele=n;
            }
            if(n==ele)count++;
            else count--;
        }
        return ele;
    }
};
