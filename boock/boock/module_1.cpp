#include "module_1.h"

struct Book
{
	string surname;
	string tilte;
	int year;
};
void enter() {
	ofstream fout("Bibl.txt");
	int n;
	cout << "скока книг: ";
	cin >> n;

	Book* arr = new Book[n];
	for (int i = 0; i < n; i++)
	{
		cout << "книга ", i + 1, ":\n";
		cout << "фамилия автора: ";
		cin >> arr[i].surname;
		cout << "название книги: ";
		cin >> arr[i].tilte;
		cout << "год: ";
		cin >> arr[i].year;
		fout << arr[i].surname << " " << arr[i].tilte << " " << arr[i].year << endl;
	}
	fout.close();
	delete[] arr;
}