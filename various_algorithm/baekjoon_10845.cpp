#include <iostream>
#include <vector>
using namespace std;

// 정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
// baekjoon_10828과 다른 점은 push 이후 정수 X를 앞이 아닌 뒤에 넣는다.

int main() {
	int num,pnum;
	string str;
	vector <int> vec;
	cin >> num;

	for (int i = 0; i < num; i++) {

		cin >> str;
		if (str == "push") cin >> pnum;
		if (str == "push") { // push일 경우
			vec.push_back(pnum); // vec 앞에 숫자 삽입.
		}
		else if (str == "front") { // front일 경우
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[0] << "\n";
		}
		else if (str == "back") { // back일 경우
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[vec.size() - 1] << "\n";
		}


		else if (str == "size") cout << vec.size() << "\n"; // size일 경우

		else if (str == "empty") { // empty일 경우
			if (vec.size() == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}

		else // pop일 경우
		{
			if (vec.size() == 0) cout << -1 << "\n";
			else {
				cout << vec[0] << endl;
				vec.erase(vec.begin());
			}

		}
	}

	return 0;
}