class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int, int> tempData;
        
        for (int i = 0; i < nums.size(); ++i) {
            tempData.insert(std::pair<int, int>(nums[i], i));
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            
            unordered_map<int, int>::iterator iter = tempData.find(diff);
            
            if (iter != tempData.end()) {
                if (tempData[diff] != i) {
                    ret.push_back(i);
                    ret.push_back(tempData[diff]);
                    break;
                }
            }
        }
        
        return ret;
    }
};
