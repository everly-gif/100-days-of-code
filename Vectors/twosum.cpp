class Solution {
	public:
		 vector<int> twoSum(vector<int>& nums, int target) {
			     int x;
			     for(int i=0;i<nums.size()-1;i++){
				x=target-nums[i];
				for(int j=i+1;j<nums.size();j++){
	                                  if(nums[j]==x){
						  return{i,j};
			                       }  
	                             }
		           }
		return {};
		}
};
