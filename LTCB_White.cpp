#include <iostream>
using namespace std;
int main() {
	  int sodau, socuoi;
	int tong = 0;
		cout << "Nhap so dau:";
		cin >> sodau;
		cout << "nhap so cuoi:";
		cin >> socuoi;
		cout << "VONG LAP WHITE\N";
		while (sodau <= socuoi) {
			cout << sodau << " ";
			tong = tong + sodau;
			sodau++;
		}
		cout << "/ntong=" << tong;
			return 0;
	}

		


		

