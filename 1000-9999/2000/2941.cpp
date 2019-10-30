//크로아티아 알파벳
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int size = str.size();
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'c' && str[i + 1] == '=') size--;
		else if (str[i] == 'c' && str[i + 1] == '-') size--;
		else if (str[i] == 'd' && str[i + 1] == '-') size--;
		else if (str[i] == 'l' && str[i + 1] == 'j') size--;
		else if (str[i] == 'n' && str[i + 1] == 'j') size--;
		else if (str[i] == 's' && str[i + 1] == '=') size--;
		else if (str[i] == 'z' && str[i + 1] == '=') size--;
		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') size--;
	}
	cout << size << endl;
}