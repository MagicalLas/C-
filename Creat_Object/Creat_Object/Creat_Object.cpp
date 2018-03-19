// Creat_Object.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;
class School_last_Play
{
public:
	School_last_Play();
	function<void(string)> println = [](string  x) { cout << x << endl; };
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

class Frist_class
{
public:
	int tmp;
	float apply(function<int(int,int)> fx, int value)
	{
		return fx(value,value);
	};
	void tmp_set(int input)
	{
		tmp = int(input);
	}
	void tmp_print()
	{
		printf("%d", tmp);
	}
private:
};

namespace Legacy
{
	auto print = [](const char  *x) { cout << x; };
	auto sq = [](int data) {return data*data; };
	int mal(int x = 5, int y = 4) { return x*y; };
}
namespace Latest
{
	auto print = [](auto x) { cout << x << endl; };
	auto start = []() {
		print("Program Start~!");
	};
	auto mal = [](auto x = 5, auto y = 4) { return x*y; };
	
}

class cal
{
public:
	cal() {	
		this->add_ = 0;
		this->div_ = 0;
		this->mal_ = 0;
		this->min_ = 0;
	};
	/*실제 동작하는 함수. 값을 계산하고 그 값을 리턴한다. 에러가 나면 0을 반환한다.*/
	inline double add(double x, double y) {
		try {
			this->add_++;
			return x + y;
		}
		catch (...) {
			return 0;
		}
	};
	inline double div(double x, double y=1) {
		try {
			this->div_++;
			return x / y;
		}
		catch (...) {
			return 0;
		}
	}; 
	inline double min(double x, double y) {
		try {
			this->min_++;
			return x - y;
		}
		catch (...) {
			return 0;
		}
	}; 
	inline double mal(double x, double y) {
		try {
			this->mal_++;
			return x * y;
		}
		catch (...) {
			return 0;
		}
	};
	void show() {
		cout << this->add_ << this->div_ << this->mal_ << this->min_ << endl;
	};
	/*이 아래 함수는 캡슐화 함수. FP가 변하진 않고 상태를 가져온다.*/
	inline int get_mal() {
		return this->mal_;
	};
	inline int get_add() {
		return this->add_;
	};
	inline int get_min() {
		return this->min_;
	};
	inline int get_div() {
		return this->div_;
	};
private:
	/*변수들을 선언하였다. 이 변수들의 값을 바꾸는 것은 계산할 때만 변경가능하다.*/
	int mal_;
	int min_;
	int div_;
	int add_;
};

class Print
{
public:
	void set_string(string _) {
		this->string_tmp = _;
	};
	void show_string() {
		cout << this->string_tmp << endl;
	}

private:
	string string_tmp;
};

class drew 
{
public:
	
private:
	point po;
};


class point
{
public:
	point(int x, int y) {
		this->x = x;
		this->y = y;
	};
	void _(int x, int y) {
		set_x(x);
		set_y(y);
	};
	int get_x() {
		return x;
	};
	int get_y() {
		return y;
	};
	void set_x(int x) {
		if (x < 0)
			x = 0;
		this->x = x;
	};
	void set_y(int y) {
		if (y < 0)
			y = 0;
		this->y = y;
	};
private:
	int x;
	int y;

};



class apple
{
public:
	int get_price() {
		return price;
	}
private:
	int price = 1000;
};

class seller {
	int money;
	apple apple_;
public:
	seller() {
		this->money = 2000;
	};
	vector<apple> send_apple(int num, byuyer &arg) {
		vector<apple> v = vector<apple>(num);
		for (size_t i = 0; i < num; i++)
		{
			v[i] = apple_;
		}
		this->money += num*apple_.get_price();
		arg.set_money(arg.get_money()- num*apple_.get_price());
		return  v;
	};
};

class byuyer
{
public:
	byuyer();
	int get_money()const {
		return money;
	};
	void set_money(int money)
	{
		this->money = money;
	}
	vector<apple> buy(int num, seller &sell) {
		this->v = sell.send_apple(num, *this);
	};
private:
	int money;
	vector<apple> v;
};

byuyer::byuyer()
{
	this->money = 3000;
}


int main()
{
	Latest::start();



    return 0;
}
