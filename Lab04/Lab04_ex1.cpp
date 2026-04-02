#include <iostream>
#include <string>
using namespace std;
struct Student {//建立一個名為Student的結構型態,裡面包含int、string等不同類型的資料型態
	int id;
	string name;
	int chinese;
	int english;
	int math;
	int social;
	int science;
};
void updateMath(Student *s) { //設定指標指到s
	s->math = 100;//將原本的.換成->使math指標指到100
}
void printStudent(Student *s) {//建立printStudent印出id、name、math
	cout << "學生編號: " << s->id << endl;//列印出學生編號
	cout << "姓名: " << s->name << endl;//列印出姓名
	cout << "數學成績: " << s->math << endl//列印出數學成績
}
int main() {
	Student one;//利用前面所建立的名為Studunt的結構來宣告一個名為one的結構變數
	
	one.id = 1; //對新宣告的結構變數one中的元素賦值
	one.name = "張小美";//將結構name變為張小美
	one.chinese = 77;//將結構chinese變為77
	one.english = 83;//將結構english變為83
	one.math = 86;//將結構math變為86
	one.social = 68;//將結構social變為68
	one.science = 91;//將結構science變為91
	updateMath(&one);//使用&指到結構one中math變數使其變為100
	printStudent(&one);//使用&指到結構one中對應的id、name、math
	return 0;
}
