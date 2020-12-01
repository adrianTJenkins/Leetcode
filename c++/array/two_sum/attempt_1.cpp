//Time - 13:04 min
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result (2);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (i != j && nums.at(i) + nums.at(j) == target) {
                    result.at(0) = i;
                    result.at(1) = j;
                    return result;
                }
            }
        }
        return result;
    }
};