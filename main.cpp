#include <iostream>
#include <fstream>
#define N 10000
#define M 20000

int main(){
	int n, a, sum, b;
	int mas[N];
	sum = 0;
	int c = 0;
	int num = 0;
	int k = 0;

	std::ifstream in("input.txt");
	std::ofstream out("output.txt");
	
	in >> n;
	for (int i = 0; i < n-1; i++) {
		in >> mas[i];
	}
	for (int i = 0; i < n-1; i++) {
		a = mas[i];
		while (a > 0) {
			b = a % 10;
			sum += b;
			a /= 10;
		}
		if (!(sum % 6 == 0)) {
			mas[c] = mas[i];
			c += 1;
		}
		b = 0;
		sum = 0;

	}
	for (int i = 0; i < c; i++) {
		num = mas[i];
		while (num > 9)
			num = num / 10;
		//if (num == 1) {
		//}
	}
	for (int i = 0; i < c; k++) {
		out << mas[i] << " ";
	}

	


}

