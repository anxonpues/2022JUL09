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
	/*
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
	const auto f = ci; // deduced type of ci is int; f has type const int
	auto& g = ci; // g is a const int& that is bound to ci
	//auto& h = 42; // error: we can't bind a plain reference to a literal 
	auto& h = d;
	const auto& j = 42; // ok: we can bind a const reference to a literal
	auto k = ci, & l = ii; // k is int; l is int&
	auto& m = ci, * pn = &ci; // m is a const int&;p is a pointer to const int
	// error: type deduced from i is int; type deduced from &ci is const int
	//auto& n = ii, * p2 = &ci;
	
	// Exercise 2.33: Using the variable definitions from this section, determine
	// what happens in each of these assignments :
	a = 42;
	b = 42;
	c = 42;
	// d = 42;	d is an int* not an int
	// e = 42;  e is a const int* not an int
	// g = 42;  g is a reference to a const int bound to ci that is a const int that con not be changed
	*/
	/*
	Exercise 2.35: Determine the types deduced in each of the following
	definitions. Once you’ve figured out the types, write a program to see
	whether you were correct.
	*/


	const int i = 42;	// const int
	auto j = i;		// int    i has top_level const so is lost
	const auto& k = i;	//  const (because declared as const explicit) ref to int 
	auto* p = &i;	//	const (because &i is low_level) ptr to int
	const auto j2 = i, & k2 = i; 	//j2 const int  explicit, k2 const ref to int


	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cin.get();

	return 19550608;

}