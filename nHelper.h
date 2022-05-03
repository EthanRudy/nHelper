// Declaration for nHelper
// @file nHelper.h
// @author Ethan Rudy
// @version 1.0

#pragma once
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                NTH SPECIAL                                //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

/*
	Generates the nth triangular number

	@param "n" of type INT

	@return the nth triangular number
*/
int tri(int n);

/*
	Generates the nth square number

	@param "n" of type INT

	@return the nth square number
*/
int squ(int n);

/*
	Generates the nth pentagonal number

	@param "n" of type INT

	@return the nth pentagonal number
*/
int pen(int n);

/*
	Generates the nth hexagonal number

	@param "n" of type INT

	@return the nth hexagonal number
*/
int hex(int n);

/*
	Generates the nth heptagonal number

	@param "n" of type INT

	@return the nth heptagonal number
*/
int hep(int n);

/*
	Generates the nth octagonal number

	@param "n" of type INT

	@return the nth octagonal number
*/
int oct(int n);

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                 IS SPECIAL                                //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

/*
	Checks whether the passed integer is a triangular number

	@param "n" of type INT

	@return whether the passed integer is a triangular number
*/
bool is_Tri(int n);

/*
	Checks whether the passed integer is a square number

	@param "n" of type INT

	@return whether the passed integer is a square number
*/
bool is_Squ(int n);

/*
	Checks whether the passed integer is a pentagonal number

	@param "n" of type INT

	@return whether the passed integer is a pentagonal number
*/
bool is_Pen(int n);

/*
	Checks whether the passed integer is a hexagonal number

	@param "n" of type INT

	@return whether the passed integer is a hexagonal number
*/
bool is_Hex(int n);

/*
	Checks whether the passed integer is a heptagonal number

	@param "n" of type INT

	@return whether the passed integer is a heptagonal number
*/
bool is_Hep(int n);

/*
	Checks whether the passed integer is an octagonal number

	@param "n" of type INT

	@return whether the passed integer is an octagonal number
*/
bool is_Oct(int n);


///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                 N VECTORS                                 //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

/*
	Generates a vector of n triangular numbers

	@param "n" of type INT

	@return a vector of n triangular numbers
*/
std::vector<int> genTri(int n);

/*
	Generates a vector of n square numbers

	@param "n" of type INT

	@return a vector of square numbers
*/
std::vector<int> genSqu(int n);

/*
	Generates a vector of n pentagonal numbers

	@param "n" of type INT

	@return a vector of n pentagonal numbers
*/
std::vector<int> genPen(int n);

/*
	Generates a vector of n hexagonal numbers

	@param "n" of type INt

	@return a vector of n hexagonal numbers
*/
std::vector<int> genHex(int n);

/*
	Generates a vector of n heptagonal numbers

	@param "n" of type INT

	@return a vector of n heptagonal numbers
*/
std::vector<int> genHep(int n);

/*
	Generates a vector of n octagonal numbers

	@param "n" of type INT

	@return a vector of n octagonal numbers
*/
std::vector<int> genOct(int n);


///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                               RANGE VECTORS                               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

/*
	Generates a vector of triangular numbers from the passed min to the 
		passed max exclusively

	@param "min" of type INT
	@param "max" of type INT

	@return a vector of traingular numbers from the passed min to the 
		passed max exclusively
*/
std::vector<int> genTriRange(int min, int max);

/*
	Generates a vector of square numbers from the passed min to the passed max
		exclusively

	@param "min" of type INT
	@param "max" of type INT

	@return a vector of square numbers from the paased min to the passed max 
		exclusively
*/
std::vector<int> genSquRange(int min, int max);

/*
	Generates a vector of pentagonal numbers from the passed min to the 
		passed max exclusively

	@param "min" of type INT
	@param "max" of type INT

	@return a vector of pentagonal numbers from the passed min to the 
		passed max exclusively
*/
std::vector<int> genPenRange(int min, int max);

/*
	Generates a vector of hexagonal numbers from the passed min to the
		passed max exclusively

	@param "min" of type INT
	@param "max" of type INT

	@return a vector of hexagonal numbers from the passed min to the 
		passed max exclusively
*/
std::vector<int> genHexRange(int min, int max);

/*
	Generates a vector of heptagonal numbers from the passed min to the 
		passed max exclusively

	@param "min" of type INT
	@param "max" of type INT

	@return a vector of heptagonal numbers from the passed min to the 
		passed max exclusively
*/
std::vector<int> genHepRange(int min, int max);

/*
	Generates a vector of octagonal numbers from the passed min to the passed
		max exclusively

	@param "min" of type INT
	@param "max" of type INT

	@return a vector of octagonal numbers from the passed min to the passed
		max exclusively
*/
std::vector<int> genOctRange(int min, int max);

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                   PRIME                                   //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

/*
	Checks whether the passed integer is prime or not

	@param "n" of type INT

	@return whether the passed integer is prime or not
*/
bool is_prime(int n);

/*
	Generates a list of primes from the passed min to the passed max 
		exclusively

	@param "n" of type INt

	@return a list of primes from the passed min to the passed max exclusively
*/
std::vector<int> gen_primes(int min, int max);


///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                 PALINDROME                                //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

/*
	Checks whether the passed integer is palindromic or not

	@param "n" of type INT

	@return whether the passed integer is panidromic or not
*/
bool is_palindrome(int n);
