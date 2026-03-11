void copyArray(const vector<int>& source, vector<int>& dest) {
int stepcount = 0;
stepcounter ++;//初始化迴圈(step1)
for (int i = 0; i < source.size(); i++) {
stepcounter ++;//陣列存取(step1)
dest[i] = source[i];  stepcount = stepcount+2;
  //2step(陣列存取+assignment)
stepcounter ++;//i++(step1)
}
stepcounter ++;//跳出迴圈(step1)
}
//1(initial)+4*n(for loop operation)+1(跳出迴圈)
//=4n+2

int countElement(const vector<int>& arr, int target) {
int step = 0;
int count = 0;
for (int i = 0; i < arr.size(); i++) {
if (arr[i] == target) {
count++;
}
}
return count;
}
