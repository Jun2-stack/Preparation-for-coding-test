#include<iostream>
#include<string>
using namespace std;

int main()
{
	string RRN;
	int front = 0, rear = 0;
	
	cin >> RRN; 
	front = stoi(RRN.substr(0, 6)); // 주민등록번호 앞자리
	rear = stoi(RRN.substr(7, RRN.length())); // 주민등록번호 뒷자리

	front = front / 10000; // 년도
	rear = rear / 1000000; // 뒷자리 번호 구분

	if (rear == 1 || rear == 2) 
		cout << 2019 - 1900 - front + 1 << " "; // 1900년대생
	else
		cout << 2019 - 2000 - front + 1 << " "; // 2000년대생

	if (rear == 1 || rear == 3) // 남여 구분
		cout << "M";
	else
		cout << "W";

	return 0;
}
