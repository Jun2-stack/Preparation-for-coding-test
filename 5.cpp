#include<iostream>
#include<string>
using namespace std;

int main()
{
	string RRN;
	int front = 0, rear = 0;
	
	cin >> RRN;
	front = stoi(RRN.substr(0, 6));
	rear = stoi(RRN.substr(7, RRN.length()));

	front = front / 10000;
	rear = rear / 1000000;

	if (rear == 1 || rear == 2)
		cout << 2019 - 1900 - front + 1 << " ";
	else
		cout << 2019 - 2000 - front + 1 << " ";

	if (rear == 1 || rear == 3)
		cout << "M";
	else
		cout << "W";

	return 0;
}