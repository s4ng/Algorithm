//과자
#include <iostream>
using namespace std;

int main() {
	int price, qty, money, mom;
	cin >> price >> qty >> money;
	price = price * qty;
	if (money >= price)
		mom = 0;
	if (money < price)
		mom = price - money;

	cout << mom;
}