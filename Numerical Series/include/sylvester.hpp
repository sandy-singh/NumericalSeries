#pragma once
/*!	\file	sylvester.hpp
	\author	Sandeep Singh	
	\date	September 20, 2018
	\brief	Sylvester number function implementations.
*/


// ToDo:implement the sylvester() and rsylvester() functions.
#include <iomanip>
#include <iostream>




using namespace std;
#include <boost/multiprecision/cpp_int.hpp>

//using boost data types
using big_integer = boost::multiprecision::cpp_int;
using integer = std::uint64_t;

//Sylvester function's Iterative Solution
big_integer sylvester(big_integer n)
{
	big_integer n1 = 0;
	big_integer prev = 2;
	big_integer next;

	for (integer i = 0; i <= n; ++i)
	{
		if (i == 0)
			next = 2;
		else
			next = (prev * prev) - prev + 1;
		prev = next;
	}
	return next;

}

//Sylvester function's Recursive Solution
big_integer rsylvester(big_integer n)
{
	if (n == 0)
		return 2;
	else
		return rsylvester(n - 1) * rsylvester(n - 1) - rsylvester(n - 1) + 1;
}