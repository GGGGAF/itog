#include "module_3.h"

void save()
{
	ifstream fin("intermediate.txt");
	ofstream fout("result.txt");

	string line;
	while (getline(fin, line))
	{
		fout << line << endl;
	}
	cout << "результат в result.txt\n";

	fin.close();
	fout.close();
}