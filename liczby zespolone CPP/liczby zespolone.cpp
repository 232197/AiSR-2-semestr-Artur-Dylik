#include <iostream>
#include <windows.h>
#include <string>
#include <cstdint>
#include <cstdlib>


class Complex
{
private:
	float im;
	float re;
public:
	Complex();
	Complex(const float im, const float re);
	Complex(const Complex& Object);

	void Print();

	/*
		Operators
	*/
	//JEDNOARGUMENTOWE
	Complex& operator=(const Complex& Object);		//1

	Complex& operator*=(const Complex& Object);		//2
	Complex& operator+=(const Complex& Object);		//3
	Complex& operator-=(const Complex& Object);		//4
	Complex& operator*=(const float value);			//5
	Complex& operator+=(const float value);			//6
	Complex& operator-=(const float value);			//7

	//DWUARGUMENTOWE
	friend std::ostream& operator<<(std::ostream& lhs, const Complex& rhs);//8
	friend bool operator==(const Complex& lhs, const Complex& rhs);//9
	friend Complex operator*(const Complex& lhs, const Complex& rhs);//10	
	friend Complex operator-(const Complex& lhs, const Complex& rhs);//11
	friend Complex operator+(const Complex lhs, const Complex& rhs);//12
	friend Complex operator*(const Complex& lhs, const float value);	//13
	friend Complex operator-(const Complex& lhs, const float value);//14
	friend Complex operator+(const Complex& lhs, const float value);//15
	friend Complex operator*(const float value, const Complex& rhs);	//16
	friend Complex operator-(const float value, const Complex& rhs);//17
	friend Complex operator+(const float value, const Complex& rhs);//18


	~Complex();
};


int main(int argc, char* argv[])
{
	Complex A(1.0f, 2.0f);

	Complex B(0.5f, -1.5f);

	std::cout << A;//8
	A.Print();
	B.Print();

	Complex C;
	std::cout << C;//8
	C *= A;//2
	std::cout << C;//8
	C += A;//3
	std::cout << C;//8
	C -= A;//4
	std::cout << C;//8
	C = A * B;//10
	std::cout << C;//8
	C = A - B;//11
	std::cout << C;//8
	C = A + B;//12
	std::cout << C;//8
	C = B;//1
	std::cout << C;//8


	A *= 3.f;//5
	A += 3.f;//6
	A -= 3.f;//7

	C = C * 2.f;//13
	C = C + 2.f;//15
	C = C - 2.f;//14

	B = 1.5f * A;//16
	B = 1.5f + A;//18
	B = 1.5f - A;//17

	if (A == B)//9
	{
		std::cout << "Rowne\n";
	}
	else
	{
		std::cout << "Nierowne\n";
	}



	system("pause");
	return EXIT_SUCCESS;
}

Complex::Complex() :
	im(0.0f),
	re(0.0f)
{
}

Complex::Complex(const float im, const float re) :
	im(im),
	re(re)
{

}

Complex::Complex(const Complex& Object) :
	im(Object.im),
	re(Object.re)
{

}

void Complex::Print()
{
	using std::cout;
	using std::endl;
	cout << "Im: " << im << " Re: " << re << endl;
}

Complex& Complex::operator=(const Complex& Object)
{
	if (this != &Object)
	{
		this->im = Object.im;
		this->re = Object.re;
	}
	return *this;
}

Complex& Complex::operator*=(const Complex& Object)
{
	this->im *= Object.im;
	this->re *= Object.re;
	return *this;
}

Complex& Complex::operator+=(const Complex& Object)
{
	this->im += Object.im;
	this->re += Object.re;
	return *this;
}

Complex& Complex::operator-=(const Complex& Object)
{
	this->im -= Object.im;
	this->re -= Object.re;
	return *this;
}

Complex& Complex::operator*=(const float value)
{
	this->im *= value;
	this->re *= value;
	return *this;
}

Complex& Complex::operator+=(const float value)
{
	this->im += value;
	this->re += value;
	return *this;
}

Complex& Complex::operator-=(const float value)
{
	this->im -= value;
	this->re -= value;
	return *this;
}

Complex::~Complex()
{
	this->im = 0.f;
	this->re = 0.f;
}

std::ostream& operator<<(std::ostream& lhs, const Complex& rhs)
{
	using std::endl;
	lhs << "Im: " << rhs.im << " Re: " << rhs.re << std::endl;
	return lhs;
}

bool operator==(const Complex& lhs, const Complex& rhs)
{
	if (lhs.im == rhs.im && lhs.re == rhs.re)
	{
		return true;
	}
	return false;
}

Complex operator*(const Complex& lhs, const Complex& rhs)
{
	Complex wynik;
	wynik.im = lhs.im * rhs.im;
	wynik.re = lhs.re * rhs.re;
	return wynik;
}

Complex operator-(const Complex& lhs, const Complex& rhs)
{
	Complex wynik;
	wynik.im = lhs.im - rhs.im;
	wynik.re = lhs.re - rhs.re;
	return wynik;
}

Complex operator+(const Complex lhs, const Complex& rhs)
{
	Complex wynik;
	wynik.im = lhs.im + rhs.im;
	wynik.re = lhs.re + rhs.re;
	return wynik;
}

Complex operator*(const Complex& lhs, const float value)
{
	Complex wynik;
	wynik.im = lhs.im * value;
	wynik.re = lhs.re * value;
	return wynik;
}

Complex operator-(const Complex& lhs, const float value)
{
	Complex wynik;
	wynik.im = lhs.im - value;
	wynik.re = lhs.re - value;
	return wynik;
}

Complex operator+(const Complex& lhs, const float value)
{
	Complex wynik;
	wynik.im = lhs.im + value;
	wynik.re = lhs.re + value;
	return wynik;
}

Complex operator*(const float value, const Complex& rhs)
{
	Complex wynik;
	wynik.im = value * rhs.im;
	wynik.re = value * rhs.re;
	return wynik;
}

Complex operator-(const float value, const Complex& rhs)
{
	Complex wynik;
	wynik.im = value - rhs.im;
	wynik.re = value - rhs.re;
	return wynik;
}

Complex operator+(const float value, const Complex& rhs)
{
	Complex wynik;
	wynik.im = value + rhs.im;
	wynik.re = value + rhs.re;
	return wynik;
}