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
