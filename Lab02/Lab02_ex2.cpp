void printPairs(const vector<int>& arr) {
int stepcount = 0;
stepcount ++;//loop initialization (1step)
for (int i = 0; i < arr.size(); i++) {
  stepcount ++;//
// TODO: Add counts for inner loop
for (int j = i + 1; j < arr.size(); j++) {
// TODO: Add counts for printing operation
cout << arr[i] << "," << arr[j] << endl;
}
}
}
