#include<iostream>
#include<conio.h>
using namespace std;
//int main() {
//	int n;
//	cout << "Enter number of rows:";
//	cin >> n;
//	for (int i = 1;i <= n;i++) {
//		for (int j = 4;j >=i;j--) {
//			cout << "*" << " ";
//		}
//		cout << endl;
//	}
//
//}
//second method
int main() {
	int n;
	cout << "Enter number of rows:";
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j<=n-i+1;j++) {
			cout << "*" << " ";
		}
		cout << endl;
	}

}