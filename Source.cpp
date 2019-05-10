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

	
	system("pause");
	return 0;
}

