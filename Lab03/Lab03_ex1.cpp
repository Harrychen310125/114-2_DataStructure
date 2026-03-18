class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int, int> freq;// 記錄數字出現的次數
        for (int i = 0; i < arr.size(); i++) {// 計算陣列中數值出現幾次
            int num = arr[i]; 
            freq[num]++;
        }
        
        int maxLucky = -1; //初始化maxLucky
        
        // 檢查陣列中是否有幸運數字
        for (auto const& [num, count] : freq) {
            if (num == count) {// 如果是幸運數字，更新最大值
                
                maxLucky = max(maxLucky, num);
            }
        }
        
        return maxLucky;//回傳最大幸運數值
    }
};
