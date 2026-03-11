int findMax(const vector<int>& arr) {
int  stepcount = 0; 
// TODO: Add counts for initialization
int max = arr[0];
  stepcount ++;
// TODO: Add counts for loop operations
  stepcount++;
for (int i = 1; i < arr.size(); i++) {
// TODO: Add counts for comparison and assignment
if (arr[i] > max) {
max = arr[i];
}
}
// TODO: Add counts for return
return max;
}
