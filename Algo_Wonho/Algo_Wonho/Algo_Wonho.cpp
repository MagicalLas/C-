// Algo_Wonho.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

#include <vector>

#include <numeric>
#include <string>
#include <functional>
using namespace std;

class School_last_Play
{
public:
	School_last_Play();
	function<void(string)> println = [](string  x) { cout << x << endl; };
	int mal(int x, int y = 4) { return x*y; };
	function<void(int)> sq = [](int data) {return data*data;  };

	/*
	int add_5_input_number()
	{
	println("입력하세요");
	vector<int> v(20, 0);
	for (size_t i = 0; i < 5; i++)
	{
	cin >> v[i];
	}
	int sum = accumulate(v.begin(), v.end(), 0);
	//[](int aval) { cout << "result : " << aval << endl; }(sum);
	return sum;
	};
	*/
private:
	int add_5_input_number()
	{
		println("입력하세요");
		vector<int> v(20, 0);
		for (size_t i = 0; i < 5; i++)
		{
			cin >> v[i];
		}
		int sum = accumulate(v.begin(), v.end(), 0);
		//[](int aval) { cout << "result : " << aval << endl; }(sum);
		return sum;
	};
};

School_last_Play::School_last_Play()
{
	println("play");
}

namespace legacy {
	auto print = [](const char  *x) { cout << x << endl; };
	auto print_tmp = [](auto  x) { cout << x << ", "; };
	auto sq = [](int data) {return data*data; };
}
namespace Tmp {
	void upper(int &a, int &b, int c)
	{
		a += c;
		b += c;
	}
	void upper(int *a, int *b, int c)
	{
		*a += c;
		*b += c;
	}
	int ref_return(int& a)
	{
		a++;
		return a;
	}
	bool is_over_0(int x) {
		return (x > 0 ? true : false);
	}
}
void s(int * &x, int * &y) {
	int *_ = x;
	x = y;
	y = _;
}

class Point
{
public:
	Point(int x, int y);
	int x;
	int y;
	void cal(Point a, int &x, int &y) {
		this->x += a.x;
		this->y += a.y;
		x = this->x;
		y = this->y;
	};
private:

};

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

template<typename Name>
void print(Name a) {
	cout << a << endl;
};



class orange
{
public:
	orange(int a) { a = -5; }
	void set_a(int x) { this->a = x; };
	int return_a() {
		print("비교당함");
		print(this->a);
		return a;
	};
	virtual orange* operator= (orange * a) {
		cout << "s";
		return (a);
	};
	virtual bool operator== (orange a) {
		print(this->a);
		return this->a == a.return_a();
	};
	explicit orange(orange const& q) {
		cout << "qwer" << endl;
	}
	void aw(orange q) {

	};

private:
	int a;

};


template<typename _>
void is_same_(_ __, _ ___) {
	if (__ == ___)
		print("eq");
	else
		print("not");
}
enum MyEnum
{
	assistant, bear, crist, director
};
string MyEnum_[4] = { "assistant", "bear", "crist", "director" };
class qerty
{
public:
	qerty(string a, string b, string c, int d);
	qerty() {};
	void print_() {
		cout << "ADRESS " << this << endl;
		cout << "name " << a1 << endl;
		cout << "company " << b1 << endl;
		cout << "call num " << c1 << endl;
		cout << "position " << MyEnum_[d1] << endl << endl;
	};
private:
	string a1;
	string b1;
	string c1;
	int d1;
};

qerty::qerty(string a, string b, string c, int d) :a1(a), b1(b), c1(c), d1(d)
{

}



int main()
{
	auto print_ = [](int x) {cout << x << endl; };
	orange a(5);
	orange b(7);
	b.set_a(11);
	print(b.return_a());
	b.operator=(&a);
	print("qwewergffsd");
	print(b.return_a());

	b = &a;

	print("qw545456456");
	print(b.return_a());
	int tmp = (b.operator=(&a))->return_a();
	print(tmp);
	return 0;
}