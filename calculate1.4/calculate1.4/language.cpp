#include "language.h"	
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <map> 
#include <fstream>
using namespace std;
void language::languagelist(char boundadry[20][200])   //语言列表
{
	fstream file;
	file.open("languagelist.txt");
	while (file.getline(line, 100))
	{
		cout << line << endl;
	}
	file.close();
}
void language::languagechoice(char boundadry[20][200])		//用户选择语言
{
	char choice[100];
	int i;
	for (i = 0;; i++)
	{ 
		cin >> choice;
		strcat_s(path, choice);
		strcat_s(path, ".txt");
		fstream file;
		file.open(path, ios::in);
		if (file.is_open())

		{
			int i;
			for (i = 0; file.getline(boundadry[i], 200); i++)
			{
			}
			file.close();
			break;

		}

		else
		{
			cout << "Sorry,your choice has not been prepared,please choice again!" << endl;
			memset(choice, '\0', 100);
			memset(path, '\0', 100);
		}
	}
}



