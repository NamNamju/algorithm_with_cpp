#include <iostream>
using namespace std;

// 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

int main() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	// 계산 값 출력
	cout << (num1 + num2) % num3 << endl;
	cout << (num1 % num3 + num2 % num3) % num3 << endl;
	cout << (num1 * num2) % num3 << endl;
	cout << (num1 % num3 * num2 % num3) % num3 << endl;

	return 0;
}