//Better Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int more=target-num;
            if(mpp.find(more)!=mpp.end())//if more is present in map then i'll be not pointing to the last iterator 
            {
                 return{mpp[more], i};

            }
            mpp[num]=i;
        }

        return{-1,-1};
    }
        
    };



