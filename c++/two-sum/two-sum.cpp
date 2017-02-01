#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> num_map;
        
        for(size_t i = 0; i < nums.size(); i++) {
            if(num_map.find(target - nums[i]) != num_map.end()) {
                result.push_back(num_map[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            
            num_map[nums[i]] = i;
        }

        // Return the empty vecotr to signify no solution
        return result;
    }
};
