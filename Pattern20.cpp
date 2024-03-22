#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int n;
	cout << "Enter number of rows:";
	cin >> n;
	for (int i = 1;i <= n;i++) {  //rows
		for (int j = 1;j <= n - i;j++) {  //spaces
			cout << " " << " ";
		}

		for (int j = 1;j <=2*i-1;j++) {   //stars
			cout << "*" << " ";
		}
		cout << endl;
	}
	return 0;
}