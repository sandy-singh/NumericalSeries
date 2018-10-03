#pragma once
/*!	\file	pell.hpp
	\author	Sandeep Singh
	\date	September 20, 2018
	\brief	Pell number function implementations.
*/


#include <iomanip>
#include <iostream>




using namespace std;
#include <boost/multiprecision/cpp_int.hpp>
//using boost data types
using big_integer = boost::multiprecision::cpp_int;
using integer = std::uint64_t;


//Pell function's Iterative solution
big_integer pell(big_integer  n)
{
	big_integer n1 = 0;
	big_integer n2 = 1;
	big_integer next;

	for (integer i = 0; i <= n; ++i)
	{
		if (i == 0)
			next = 0;
		else if (i == 1)
			next = 1;
		else
			next = 2 * n2 + n1;
			n1 = n2;
			n2 = next;
	}

	return next;
}


//Pell function's recursive solution
big_integer rpell(big_integer n)
{
	if (n <= 2)
		return n;
	else
		return 2 * rpell(n - 1) + rpell(n - 2);
}