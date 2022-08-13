#include <iostream>
using namespace std;
int Sequences(int y, int z, int s);
int main() {
	int size = 0;
	int a = 0;
	int d = 0;
	cout << "Enter value of a :";
	cin >> a;
	cout << "Enter value of d :";
	cin >> d;
	Sequences(a, d,size);
	return 0;
}
int Sequences(int y, int z, int s) {
	if (s == 0) {
		cout << y << " ";
		return Sequences(y, z, s + 1);
	}
	else if (s == 10) {
		return 0;
	}
	else {
		cout << y + z * s << " ";
		return Sequences(y, z, s + 1);
	}

}