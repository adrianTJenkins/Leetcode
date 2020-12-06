//Time - 2:37 min

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (i != j && nums.at(i) + nums.at(j) == target) {
                    return vector<int> {i, j};
                }
            }
        }
        return {};
    }
};