#include "module_2.h"
struct Book {
	string surname;
	string title;
	int year;
};
void find() {
	int x = 0;
	ifstream fin("Bibl.txt");
	ofstream fout("intermediate.txt");

	string t;
	while (getline(fin, t)) {
		if (!fin.eof()) x++;
	}
	fin.clear();
	fin.seekg(0);
	Book* arr = new Book[x];
	for (int i = 0; i < x; i++)
	{
		fin >> arr[i].surname >> arr[i].title >> arr[i].year;
	}
	bool found = false;
	for (int i = 0; i < x; i++)
	{
		if (arr[i].title == "информатика")
		{
			cout << "\nкнига найдена:\n";
			cout << " автор: " << arr[i].surname << ", год: " << arr[i].year << endl;
			fout << arr[i].surname << " " << arr[i].year << endl;
			found = true;
		}
	}
	if (!found)
	{
		cout << "\nкниг с названием \"информатика\" нет. \n";
	}
	fin.close();
	fout.close();
	delete[] arr;
}