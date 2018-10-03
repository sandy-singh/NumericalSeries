/*!	\file	Limits_main.cpp
	\author	Sandeep Singh	
	\date	September 25, 2018
	\brief	Test the numerical limits of our algorithms.
*/
#define NOMINMAX //To deacticate MAX function of Windows.h
#include "../include/pell.hpp"
#include "../include/sylvester.hpp"
#include "../include/catalan.hpp"
#include "stopwatch.hpp"
#include <limits.h>
#include <iostream>
#include <limits>   
#include < iomanip>
using namespace std;
#include<boost/multiprecision/cpp_int.hpp>;

using namespace boost::multiprecision;

using big_integer = boost::multiprecision::cpp_int;



int main() {
	big_integer index = 0; //Represents index
	big_integer num = 0; //Represents the actual value at that index

	cout << "====================================Pell Limits==================================================" << endl << endl;
	//Limit for 16-bit  signed
	for (big_integer i = 0; ; i++)
	{
		num = pell(i);
		if (num >= std::numeric_limits<signed short int>::max())
		{
			i--;
			num = pell(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Pell(" << index << ")  -> 16-bit  signed" << endl;

	//Limit for 16-bit  unsigned
	for (big_integer i = 0; ; i++)
	{
		num = pell(i);
		if (num >= std::numeric_limits<unsigned short int>::max())
		{
			i--;
			num = pell(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Pell(" << index << ")  -> 16-bit  unsigned" << endl;

	//	//Limit for 32-bit  signed
	for (big_integer i = 0; ; i++)
	{
		num = pell(i);
		if (num >= std::numeric_limits<signed long int>::max()) //Fnding max of a data type
		{
			i--;
			num = pell(i);
			index = i;
			break;
		}
	}
	cout <<  fixed << setw(39) << num << " = " << "Pell(" << index << ")  -> 32-bit  signed" << endl;

	//Limit for 32-bit  unsigned
	for (big_integer i = 0; ; i++)
	{
		num = pell(i);
		if (num >= std::numeric_limits<unsigned long int>::max())
		{
			i--;
			num = pell(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Pell(" << index << ")  -> 32-bit  unsigned" << endl;

	//Limit for 64-bit  signed
	for (big_integer i = 0; ; i++)
	{
		num = pell(i);
		if (num >= std::numeric_limits<signed long long int>::max())
		{
			i--;
			num = pell(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Pell(" << index << ")  -> 64-bit  signed" << endl;

	//Limit for 64-bit  unsigned
	for (big_integer i = 0; ; i++)
	{
		num = pell(i);
		if (num >= std::numeric_limits<unsigned long long int>::max())
		{
			i--;
			num = pell(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Pell(" << index << ")  -> 64-bit  unsigned" << endl;

	//Limit for 128-bit  signed
	for (int i = 0; ; i++)
	{
		num = pell(i);
		if (num >= std::numeric_limits<int128_t>::max())
		{
			i--;
			num = pell(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Pell(" << index << ")  -> 128-bit  signed" << endl;

	//Limit for 128-bit  unsigned
	for (big_integer i = 0; ; i++)
	{
		num = pell(i);
		if (num >= std::numeric_limits<uint128_t>::max())
		{
			i--;
			num = pell(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Pell(" << index << ")  -> 128-bit  unsigned" << endl << endl;

	cout << "====================================Sylvester Limits=============================================" << endl << endl;
	for (big_integer i = 0; ; i++)
	{
		num = sylvester(i);
		if (num >= std::numeric_limits<signed short int>::max())
		{
			i--;
			num = sylvester(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Sylvester(" << index << ")  -> 16-bit  signed" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = sylvester(i);
		if (num >= std::numeric_limits<unsigned short int>::max())
		{
			i--;
			num = sylvester(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Sylvester(" << index << ")  -> 16-bit  unsigned" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = sylvester(i);
		if (num >= std::numeric_limits<signed long int>::max())
		{
			i--;
			num = sylvester(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Sylvester(" << index << ")  -> 32-bit  signed" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = sylvester(i);
		if (num >= std::numeric_limits<unsigned long int>::max())
		{
			i--;
			num = sylvester(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Sylvester(" << index << ")  -> 32-bit  unsigned" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = sylvester(i);
		if (num >= std::numeric_limits<signed long long int>::max())
		{
			i--;
			num = sylvester(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Sylvester(" << index << ")  -> 64-bit  signed" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = sylvester(i);
		if (num >= std::numeric_limits<unsigned long long int>::max())
		{
			i--;
			num = sylvester(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Sylvester(" << index << ")  -> 64-bit  unsigned" << endl;

	for (int i = 0; ; i++)
	{
		num = sylvester(i);
		if (num >= std::numeric_limits<int128_t>::max())
		{
			i--;
			num = sylvester(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Sylvester(" << index << ")  -> 128-bit  signed" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = sylvester(i);
		if (num >= std::numeric_limits<uint128_t>::max())
		{
			i--;
			num = sylvester(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Sylvester(" << index << ")  -> 128-bit  unsigned" << endl << endl;

	cout << "====================================Catalan Limits===============================================" << endl << endl;
	for (big_integer i = 0; ; i++)
	{
		num = catalan_bionomial(i);
		if (num >= std::numeric_limits<signed short int>::max())
		{
			i--;
			num = catalan_bionomial(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Catalan(" << index << ")  -> 16-bit  signed" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = catalan_bionomial(i);
		if (num >= std::numeric_limits<unsigned short int>::max())
		{
			i--;
			num = catalan_bionomial(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Catalan(" << index << ")  -> 16-bit  unsigned" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = catalan_bionomial(i);
		if (num >= std::numeric_limits<signed long int>::max())
		{
			i--;
			num = catalan_bionomial(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Catalan(" << index << ")  -> 32-bit  signed" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = catalan_bionomial(i);
		if (num >= std::numeric_limits<unsigned long int>::max())
		{
			i--;
			num = catalan_bionomial(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Catalan(" << index << ")  -> 32-bit  unsigned" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = catalan_bionomial(i);
		if (num >= std::numeric_limits<signed long long int>::max())
		{
			i--;
			num = catalan_bionomial(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Catalan(" << index << ")  -> 64-bit  signed" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = catalan_bionomial(i);
		if (num >= std::numeric_limits<unsigned long long int>::max())
		{
			i--;
			num = catalan_bionomial(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Catalan(" << index << ")  -> 64-bit  unsigned" << endl;

	for (int i = 0; ; i++)
	{
		num = catalan_bionomial(i);
		if (num >= std::numeric_limits<int128_t>::max())
		{
			i--;
			num = catalan_bionomial(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Catalan(" << index << ")  -> 128-bit  signed" << endl;

	for (big_integer i = 0; ; i++)
	{
		num = catalan_bionomial(i);
		if (num >= std::numeric_limits<uint128_t>::max())
		{
			i--;
			num = catalan_bionomial(i);
			index = i;
			break;
		}
	}
	cout << fixed << setw(39) << num << " = " << "Catalan(" << index << ")  -> 128-bit  unsigned" << endl << endl;


	cout << "Comparison of the Catalan Product series and Binomial Series" << endl;
	//Timer function by Garth Santor
	gats::StopWatch sw;
	locale mylocale(""); //Locale
	cout.imbue(mylocale);

	sw.start(); //Starting timer
	for (auto i = 0; i <= 1000; ++i)
	{
		auto result_cb = catalan_bionomial(i); //result
	}
	sw.stop();
	int binomial_ticks = sw.ticks();
	cout << "Catalan Binomial Series = " << binomial_ticks << " ticks" <<  endl;


	sw.start(); //Starting Timer
	for (auto i = 0; i <= 1000; ++i)
	{
		auto result_cp = catalan_product_series(i); //result
	}
	sw.stop();
	int product_ticks = sw.ticks();
	cout << "Catalan Product Series = " << sw.ticks() << " ticks" << endl << endl;



	//Comparison
	if (binomial_ticks > product_ticks)
	{
		cout << "Catalan Product Series Algorithm is fastest. It takes " << binomial_ticks - product_ticks << " less ticks than the Catalan Binomial Series Algorithm." << endl;
	}
	else if (binomial_ticks == product_ticks)
	{
		cout << "Both Algorithms takes same number of ticks" << endl;
	}
	else
	{
		cout << "Catalan Binomial Series Algorithm is fastest. It takes " << product_ticks - binomial_ticks << " less ticks than the Catalan Product Series Algorithm." << endl;
	}


}