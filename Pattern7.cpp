#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int n;
	cout << "Enter number of rows:";
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i;j++) {
			if (i == 2 || i == 4) {
				cout << (char)(j + 64) << " ";
			}
			else {
				cout << j << " ";
			}
		}
		cout << endl;
	}

}