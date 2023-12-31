#include <iostream>
class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction()
	{
		int numerator_ = 0;
		int denominator_ = 0;
	}
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator == (const Fraction& other)
	{
		return this->numerator_ * other.denominator_ == this->denominator_ * other.numerator_;
	}
	bool operator != (const Fraction& other)
	{
		return !(this->numerator_ * other.denominator_ == this->denominator_ * other.numerator_);
	}
	bool operator < (const Fraction& other)
	{
		return (this->numerator_ * other.denominator_ < this->denominator_ * other.numerator_);
	}
	bool operator > (const Fraction& other)
	{
		return (this->numerator_ * other.denominator_ > this->denominator_ * other.numerator_);
	}
	bool operator <= (const Fraction& other)
	{
		return (this->numerator_ * other.denominator_ <= this->denominator_ * other.numerator_);
	}
	bool operator >= (const Fraction& other)
	{
		return (this->numerator_ * other.denominator_ >= this->denominator_ * other.numerator_);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	return 0;
}