#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int ConverttoDecmal(string str) {
	int n = 0; int j = 0;
	for (int i = str.length()-1; i >=0; i--) {
		n = n+(str[j]-'0') * pow(2, i);
		j++;
	}
	return n;
}
string ConverttoBinary(int x) {
	if (x == 0) {
		return "0";
	}
	string r = "";
	while (x) {
		r = (char)(48 + x % 2) + r;
		x /= 2;
	}
	return r;
}

int main()
{
	string a; getline(cin, a);
	string b; getline(cin, b);
	int aa = ConverttoDecmal(a);
	int bb = ConverttoDecmal(b);
	int sum = aa + bb;
	cout<<ConverttoBinary(sum);

	/*int n; cin >> n;
	char* sona = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> sona[i];
	}
	for (int i = 0; i < n; i++) {
		cout << sona[i];
	}

	int len;
	std::cin >> len;

	char * buffer = (char*)malloc(len + 1);          // динамическое выделение памяти под символьную строку
	if (buffer == NULL) exit(1);                       // если выделение памяти не выполнилось, завершить программу

	for (int ix = 0; ix < len; ix++)
		buffer[ix] = rand() % 26 + 'a';
	buffer[len] = '\0';                                 // нулевой элемент

	std::cout << "Случайная строка: " << buffer << "n";
	free(buffer);    */
	system("pause");
	return 0;
}

