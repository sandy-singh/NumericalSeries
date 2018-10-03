#pragma once
/*!	\file	catalan.hpp
	\author	Sandeep Singh
	\date	September 20, 2018
	\brief	Catalan number function implementations.
*/


#include <iomanip>
#include <iostream>




using namespace std;
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>

//using boost data types
using big_integer = boost::multiprecision::cpp_int;
using big_decimal = boost::multiprecision::cpp_dec_float_50;
using integer = std::uint64_t;

//Fatorial function's Iterative solution
big_integer ifactorial(big_integer  n)
{
	big_integer product = 1;
	for (big_integer i = 2; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

//Catalan Binomial Series Solution
big_integer catalan_bionomial(big_integer n)
{
	
	return ifactorial(2*n)/(ifactorial(n+1) * ifactorial(n));
}

//Catalan Product Series Solution
big_integer catalan_product_series(big_integer n)
{
	big_decimal product = 1;
	for (big_integer k = 2; k <= n; ++k)
	{
		product *= (big_decimal)(n + k) / (big_decimal)(k); //Casting
	}
	return (big_integer)round(product);
}