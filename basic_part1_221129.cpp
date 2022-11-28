#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

int remainder(int num1, int num2);
int quotient(int num1, int num2);
int numericComparison(int num1, int num2);
int add(int num1, int num2);
int angle(int angle);
int divisionTwoNumber(int num1, int num2);
int evenSum(int n);
double avgVector(vector<int> numbers);
int numberOfHeight(vector<int> array, int height);
int sameNumber(vector<int> array, int n);
vector<int> copyVector(vector<int> numbers, int num1, int num2);
int pizzaDivision(int n);
vector<int> evevNumOddNum(vector<int> num_list);
vector<int> reverseVector(vector<int> v);
string reverseString(string s);
vector<int> iceAmericano(int money);

int main() {
	//cout << "Hello, World!" << endl;
	//cout << remainder(3, 2) << endl;
	//cout << quotient(10, 5) << endl;
	//cout << numericComparison(10, 5) << endl;
	//cout << add(3, 1000) << endl;
	//cout << angle(105) << endl;
	//cout << divisionTwoNumber(3, 2) << endl;
	//cout << evenSum(10) << endl;

	vector<int> v = { 1, 2, 3, 4, 5 };
	//cout << avgVector(v) << endl;

	//cout << numberOfHeight(v, 3) << endl;
	//cout << sameNumber(v, 2) << endl;
	//for (auto i : copyVector(v, 1, 3)) cout << i << ' ';
	//cout << pizzaDivision(15) << endl;
	//for (auto i : evevNumOddNum(v)) cout << i << ' ';
	//for (auto i : reverseVector(v)) cout << i << ' ';
	string s = "VOCA-L";
	//cout << reverseString(s) << endl;
	//for (auto i : iceAmericano(15000)) cout << i << ' ';
}

int remainder(int num1, int num2) {
	return num1 % num2;
}

int quotient(int num1, int num2) {
	return num1 / num2;
}

int numericComparison(int num1, int num2) {
	return (num1 == num2) ? 1 : -1;
}

int add(int num1, int num2) {
	return num1 + num2;
}

int angle(int angle) {
	int answer = 0;

	if (0 < angle && angle < 90) answer = 1;
	else if (angle == 90) answer = 2;
	else if (90 <= angle && angle < 180) answer = 3;
	else answer = 4;

	return answer;

	//return angle % 90 == 0 ? angle / 90 * 2 : (angle / 90) * 2 + 1;
}

int divisionTwoNumber(int num1, int num2) {
	return (num1 / static_cast<double>(num2)) * 1000;
}

int evenSum(int n) {
	n = n / 2;
	int answer = (n * n) + n;
	return answer;
}

double avgVector(vector<int> numbers) {
	double answer = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
	return answer;
}

int numberOfHeight(vector<int> array, int height) {
	int answer = 0;
	//for (int i = 0; i < array.size(); i++) {
	//	(height < array[i]) ? answer++ : answer;
	//}
	//return answer;
	for (auto i : array)
		if (height < i) answer++;
	return answer;
}

int sameNumber(vector<int> array, int n) {
	int answer = 0;
	for (auto i : array) (i == n) ? answer++ : answer;
	return answer;
}

vector<int> copyVector(vector<int> numbers, int num1, int num2) {
	//vector<int> answer;
	//for (int i = num1; i < num2 + 1; i++) {
	//	answer.push_back(numbers[i]);
	//}
	//return answer;
	return vector<int>(numbers.begin() + num1, numbers.begin() + num2 + 1);
}

int pizzaDivision(int n) {
	//int answer = 1;
	//for (int i = 1; (i * 7) / n < 1; i++) {
	//	answer++;
	//	cout << i << ' ';
	//}
	//return answer;
	return (n - 1) / 7 + 1;
}

vector<int> evevNumOddNum(vector<int> num_list) {
	vector<int> eo;
	int even = 0; int odd = 0;
	for (auto i : num_list) {
		if (i % 2 == 0) even++;
		else odd++;
	}
	eo.push_back(even);
	eo.push_back(odd);
	return eo;
}

vector<int> reverseVector(vector<int> v) {
	reverse(v.begin(), v.end());
	return v;
}

string reverseString(string my_string) {
	reverse(my_string.begin(), my_string.end());
	return my_string;
}

vector<int> iceAmericano(int money) {
	vector<int> answer;

	answer.push_back(money / 5500);
	answer.push_back(money % 5500);
	return answer;
}
