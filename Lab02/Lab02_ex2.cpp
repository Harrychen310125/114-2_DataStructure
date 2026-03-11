void printPairs(const vector<int>& arr) {
int stepcount = 0;//初始化stepcount
stepcount ++;//loop initialization (1step)
for (int i = 0; i < arr.size(); i++) {
  stepcount ++;//迴圈條件判斷(1step)
  stepcount ++;//陣列存取(1step)
for (int j = i + 1; j < arr.size(); j++) {
stepcount ++;/迴圈條件判斷(1step)
stepcount ++;//陣列存取(1step)
cout << arr[i] << "," << arr[j] << endl;
stepcount ++;//輸出字串(1step)
stepcount ++;//j++(1step)
}
stepcount ++; //跳出迴圈(step)
stepcount ++;//i++(1step)
}
//跳出迴圈(1step)
}
//1(initial)+4*n(outer for loop)*4*n(inner for loop)+1(跳出迴圈)
//=16n^2+2
