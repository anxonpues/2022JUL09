#include <iostream>
#include <limits>



class objetoAnonimo
{
private:
	int box;
	int row;
	int line;
public:
	objetoAnonimo()
	{
		box=0;
		row = 0;
		line = 0;
	}
};

int main()
{
	/*
	Dealing with types
	type aliases
	*/
	typedef double wages; // wages is a synonym for double
	typedef wages base, * p; // base is a synonym for double, p for double*
	using SI = objetoAnonimo; // SI is a synonym for objetoAnonimo

	wages hourly(1.0f), weekly(40.0f); // same as double hourly, weekly;
	SI item0; // same as Sales_item item

	typedef char* pstring;
	const pstring cstr = 0; // cstr is a constant pointer to char
	const pstring* ps(nullptr); // ps is a pointer to a constant pointer to char
	wages val1(0.0f), val2(0.0f);
	// the type of item is deduced from the type of the result of adding val1 and val2
	auto item1 = val1 + val2; // item initialized to the result of val1 + val2

	auto i = 0, * pin = &i; // ok: i is int and p is a pointer to int
	auto sz = 0.0, pi = 3.14; // error: inconsistent types for sz and pi 
							  //( lo he cambiado a sz = 0.0  antes era sz = 0 (int))



	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cin.get();

	return 19550608;

}