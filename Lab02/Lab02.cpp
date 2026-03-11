int findMax(const vector<int>& arr) {
int  stepcount = 0; //初始化stepcount

int max = arr[0];
  stepcount ++;//變數初始化 1step

  stepcount++;//迴圈初始化 1 step (assignment i = 0)
for (int i = 1; i < arr.size(); i++) {
stepcount++;//迴圈條件判斷(1step)
stepcount++;//陣列存取(1step)

stepcount++;//比較max(1step)
if (arr[i] > max) {
max = arr[i];
}
}
stepcount++;//跳出迴圈(1step)
stepcount++;//return(1step)
return max;
}
//2(initial)+
