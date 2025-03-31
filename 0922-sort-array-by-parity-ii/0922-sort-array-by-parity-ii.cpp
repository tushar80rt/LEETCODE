class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ans(n);
        int even=0;
        int odd= 1;

        for(int n : nums){
            if(n % 2==0){
                ans[even]=n;

                even+=2;
            }

            else {
                ans[odd]=n;
                odd+=2;
            }
        }
        return ans;
    }
};