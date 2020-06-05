#include <iostream>
#include <windows.h>
#include <string>
#include <cstdint>
#include <cstdlib>


class Prostokat
{
private:
	int a;
	int b;
public:
	Prostokat();
	Prostokat(const int a, const int b);

	void Print() const;

	~Prostokat();
};

int main(int argc, char* argv[])
{
	Prostokat pierwszy;
	pierwszy.Print();

	Prostokat drugi(7, 8);
	drugi.Print();

	Prostokat trzeci(20, 30);
	trzeci.Print();

	system("pause");
	return EXIT_SUCCESS;
}

Prostokat::Prostokat() :
	a(5),
	b(10)
{

}

Prostokat::Prostokat(const int a, const int b) :
	a(a),
	b(b)
{

}

void Prostokat::Print() const
{
	using std::cout;
	cout << "Prostokat o bokach: A = " << a << " B = " << b << '\n';
}

Prostokat::~Prostokat()
{
	this->a = 0;
	this->b = 0;
}