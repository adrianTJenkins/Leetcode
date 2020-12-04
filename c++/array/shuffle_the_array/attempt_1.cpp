//Time - 13:16 min
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if (n == 1) {
            return nums;
        }
        
        vector<int> res = vector<int> (2*n);
        int i = 0;
        int j = n;
        int r = 0;
        while (i < n) {
            if (res.at(r) != 0) {
                r++;
            }
            else {
                res.at(r) = nums.at(i);
                res.at(r+1) = nums.at(j);
                i++;
                j++;
                r += 2;
            }
            
        }
        
        return res;
    }
};