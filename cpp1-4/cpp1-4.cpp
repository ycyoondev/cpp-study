#include <iostream>
#include <cfloat>

#pragma warning(disable: 4996)
#include <cstdio>

using namespace std;

int main()
{
	// -------------------
	cout << "부동소수" << endl;
	unsigned int num0 = 0b00111111100000000000000000000001;
	float num1;
	memcpy(&num1, &num0, sizeof(num0));

	cout.precision(64);
	cout << "num1 " << num1 << endl;
	cout << "max " << FLT_MAX << endl;
	cout << "min " << FLT_MIN << endl;

	// -------------------
	cout << endl << "문자열" << endl;

	char ch0 = 'a';
	char ch1 = 97; // 아스키

	cout << "ch0 " << ch0 << endl;
	cout << "ch1 " << ch1 << endl;
	cout << "ch0 " << (int)ch0 << endl;
	cout << "ch1 " << (int)ch1 << endl;
	cout << "(char)97 " << (char)97 << endl;

	// -------------------
	cout << endl << "불리언" << endl;

	bool b0 = 0 == 0;
	bool b1 = 0 < 1;
	bool b2 = 0 > 1;

	cout << "b0 " << b0 << endl;
	cout << "b1 " << b1 << endl;
	cout << "b2 " << b2 << endl;

	cout << "true " << true << endl;
	cout << "false " << false << endl;

	// -------------------
	cout << endl << "입출력" << endl;

	//int a;
	//cin >> a;
	//cout << "a " << a << endl;
	//cout << "a*2 " << a * 2 << endl;

	// -------------------
	cout << endl << "연산자 " << endl;

	int num = 0;
	cout << num++ << endl; //0
	cout << num << endl; //1
	cout << ++num << endl; //2


	

	return 0;
}