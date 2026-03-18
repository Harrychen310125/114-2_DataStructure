class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int, int> freq;// 記錄數字出現的次數(1step)
        //初始化迴圈(1step)
        for (int i = 0; i < arr.size(); i++) {// 計算陣列中數值出現幾次
        //陣列存取(1step)
            int num = arr[i]; //陣列丟到變數num(1step)
            freq[num]++;//計算在陣列中出現幾次(1step)
            //i++(1step)
        }
        
        int maxLucky = -1; //初始化maxLucky(1step)
        
        // 檢查陣列中是否有幸運數字(1step)
        for (auto const& [num, count] : freq) {
            if (num == count) {// 如果是幸運數字，更新最大值(1step)
                
                maxLucky = max(maxLucky, num);//如果比本來的maxlucky大就變(1step)
            }
        }
        //跳出迴圈(1step)
        return maxLucky;//回傳最大幸運數值(1step)
    }
};//6n+6, big"oh"is O(n)
