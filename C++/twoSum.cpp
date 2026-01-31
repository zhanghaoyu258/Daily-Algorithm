class Solution {
public:
    /**
     * @brief 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出和为目标值target的那两个整数，并返回它们的数组下标。
     * 
     * @param nums 整数数组
     * @param target 目标和值
     * @return vector<int> 包含两个整数索引的向量，如果没有找到则返回空向量
     * 
     * 该方法使用暴力枚举法，通过双层循环遍历所有的数值对，
     * 检查它们的和是否等于目标值。时间复杂度为O（n^2），空间复杂度为O(1)。
     */
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);   //添加第一个数字的索引
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};