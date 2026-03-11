void printPairs(const vector<int>& arr) {
int stepcount = 0;
stepcount ++;//loop initialization (1step)
for (int i = 0; i < arr.size(); i++) {
  stepcount ++;//迴圈條件判斷(1step)
  stepcount ++;//陣列存取(1step)
for (int j = i + 1; j < arr.size(); j++) {
stepcount ++;/迴圈條件判斷(1step)
stepcount ++;//陣列存取(1step)
cout << arr[i] << "," << arr[j] << endl;
}
}
}
