#include <fstream>
#include <string>
#include <iostream>
#include <windows.h>
#include"Header.h"
using namespace std;

//const char* name1 = "text1.txt";
//const char* name2 = "text2.txt";
//void createFile(const char* name1);
//void createNewFile(const char* name1, const char* name2);
//void displayFile(const char* name1);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	createFile(name1);
	createNewFile(name1, name2);
	cout << "______________________________" << endl;
	cout << "введений файл: " << endl;
	cout << "______________________________" << endl;
	displayFile(name1);
	cout << "______________________________" << endl;
	cout << "новий файл: " << endl;
	cout << "______________________________" << endl;
	displayFile(name2);
}

//void createFile(const char* name1) {
//	fstream file;
//	file.open(name1, ios::app);
//	
//	cout << " введіть текстовий файл [кінець введення файла ctrl+z]: " << endl;
//	if (!file.is_open()) {
//		cout << "///////////////////////// error//////////////////////////" << endl;
//	}
//	else {
//		string str;
//
//		while (getline(cin, str)) {
//			file << str << endl;
//
//		}
//		file.close();
//	}
//}
//void createNewFile(const char* name1, const char* name2) {
//	fstream file;
//	file.open(name1, ios::in);
//	fstream file2;
//	file2.open(name2, ios::out);
//	if (!file.is_open()) {
//		cout << " error" << endl;
//	}
//	else {
//
//		string str;
//		while (getline(file, str)) {
//			string line = "";
//			int num = str.find("=");
//			if (str.find("=") != string::npos) {
//				if (str[num + 1] != str[num] && str[num - 1] != str[num] && to_string(str[num - 1]) != to_string(45) && to_string(str[num - 1]) != to_string(94) && to_string(str[num - 1]) != to_string(37) && to_string(str[num - 1]) != to_string(33) && to_string(str[num - 1]) != to_string(42) && to_string(str[num - 1]) != to_string(43) && to_string(str[num - 1]) != to_string(60) && to_string(str[num - 1]) != to_string(62) && to_string(str[num - 1]) != to_string(95) && to_string(str[num - 1]) != to_string(47)) {
//					int i = 1;
//					while (i <= num) {
//						line += str[num - i];
//						i += 1;
//					}
//					reverse(line.begin(), line.end());
//					while (to_string(line[line.length() - 1]) == to_string(32)) {
//						if (to_string(line[line.length() - 1]) == to_string(32)) {
//							line.erase(line.length() - 1);
//						}
//					}
//					int num = line.rfind(" ");
//					if (num < line.length()) {
//						file2 << line.substr(num + 1, line.length() - 1) << endl;
//					}
//					else {
//						file2 << line << endl;
//					}
//				}
//
//			}
//		}
//	}
//	file.close();
//	file2.close();
//
//}
//void displayFile(const char* name2) {
//	fstream file2;
//	file2.open(name2, ios::in);//reading the file;
//	
//	if (file2.is_open()) {
//		string line;
//		while (getline(file2, line)) {
//			cout << line << endl;
//		}
//	}
//	else {
//		cout << "error: проблеми з доступом до файлу" << endl;
//	}
//	file2.close();
//}
