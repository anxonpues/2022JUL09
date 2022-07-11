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


	int ii = 0, & r = ii;
	auto a = r; // a is an int (r is an alias for i, which has type int)

	const int ci = ii, & cr = ci;
	auto b = ci; // b is an int (top-level const in ci is dropped)
	auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
	auto d = &i; // d is an int*(& of an int object is int*)
	auto e = &ci; // e is const int*(& of a const object is low-level const)



	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cin.get();

	return 19550608;

}