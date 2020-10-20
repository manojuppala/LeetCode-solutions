class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=0,temp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                temp=(nums[i]-1)*(nums[j]-1);
                if(temp>max)
                max=temp;}
            }
        }
        return(max);
    }
};