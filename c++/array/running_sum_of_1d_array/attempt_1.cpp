//Time - 9:37 min

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if (nums.size() == 1) {
            return {nums.at(0)};
        }
        int sum = 0;
        vector<int> res = vector<int> (nums.size());
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums.at(i);
            res.at(i) = sum;
        }
        return res;
    }
};