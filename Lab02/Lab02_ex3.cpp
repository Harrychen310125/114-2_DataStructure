void copyArray(const vector<int>& source, vector<int>& dest) {
int stepcount = 0;//初始化stepcount
stepcounter ++;//初始化迴圈(step1)
for (int i = 0; i < source.size(); i++) {
stepcounter ++;//陣列存取(1step)
dest[i] = source[i];  stepcount = stepcount+2;
  //2step(陣列存取+assignment)
stepcounter ++;//i++(step1)
}
stepcounter ++;//跳出迴圈(step1)
}
//1(initial)+4*n(for loop operation)+1(跳出迴圈)
//=4n+2

int countElement(const vector<int>& arr, int target) {
int step = 0;//初始化step
int count = 0;
step++;//變數初始化(1step)
step++;//初始化迴圈(1step)
for (int i = 0; i < arr.size(); i++) {
step ++;//陣列存取(1step)
if (arr[i] == target) {
step ++;//比較(1step)
count++;
}
step++;//1 step(i++)
}
step ++;//跳出迴圈(1step)
step ++;//return(1step)
return count;
}
//2(initial)+3*n(for loop operation)+2(跳出迴圈+return)
//=3n+4
