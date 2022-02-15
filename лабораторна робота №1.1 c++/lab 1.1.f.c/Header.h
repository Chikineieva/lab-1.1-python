#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

const char* name1 = "text1.txt";
const char* name2 = "text2.txt";
void createFile(const char* name1);
void createNewFile(const char* name1, const char* name2);
void displayFile(const char* name1);
