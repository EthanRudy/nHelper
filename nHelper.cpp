// Initialization for nHelper
// @file nHelper.cpp
// @author Ethan Rudy
// @version 1.0

#include "nHelper.h"

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                NTH SPECIAL                                //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

// Generates the nth triangular number
int tri(int n) {
	return n * (n + 1) / 2;
}

// Generates the nth square number
int squ(int n) {
	return n * n;
}

// Generates the nth pentagonal number
int pen(int n) {
	return n * (3 * n - 1) / 2;
}

// Generates the nth hexagonal number
int hex(int n) {
	return n * (2 * n - 1);
}

// Generates the nth heptagonal number
int hep(int n) {
	return n * (5 * n - 3) / 2;
}

// Generates the nth octagonal number
int oct(int n) {
	return n * (3 * n - 2);
}

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                 IS SPECIAL                                //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

// Checks whether the passed integer is a triangular numbers
bool is_Tri(int n) {
	float root = (-1 + sqrt(1 - (-8 * n))) / 2;
	return floor(root) == root;
}

// Checks whether the passed integer is a square number
bool is_Squ(int n) {
	float root = sqrt(n);
	return floor(root) == root;
}

// Checks whether the passed integer is a pentagonal number
bool is_Pen(int n) {
	float root = (1 + sqrt(24 * n + 1)) / 6;
	return floor(root) == root;
}

// Checks whether the passed integer is a hexagonal number
bool is_Hex(int n) {
	float root = (1 + sqrt(8 * n + 1)) / 4;
	return floor(root) == root;
}

// Checks whether the passed integer is a heptagonal number
bool is_Hep(int n) {
	float root = (3 + sqrt(40 * n + 9)) / 10;
	return floor(root) == root;
}

// Checks whether the passed integer is an octagonal number
bool is_Oct(int n) {
	float root = (2 + sqrt(12 * n + 4)) / 6;
	return floor(root) == root;
}


///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                 N VECTORS                                 //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

// Generates a vector of n triangular numbers
std::vector<int> genTri(int n) {
	std::vector<int> nums;
	for (int i = 1; i < n + 1; ++i) {
		nums.push_back(tri(i));
	}
	return nums;
}

// Generates a vector of n square numbers
std::vector<int> genSqu(int n) {
	std::vector<int> nums;
	for (int i = 1; i < n + 1; ++i) {
		nums.push_back(squ(i));
	}
	return nums;
}

// Generates a vector of n pentagonal numbers
std::vector<int> genPen(int n) {
	std::vector<int> nums;
	for (int i = 1; i < n + 1; ++i) {
		nums.push_back(pen(i));
	}
	return nums;
}

// Generates a vector of n hexagonal numbers
std::vector<int> genHex(int n) {
	std::vector<int> nums;
	for (int i = 1; i < n + 1; ++i) {
		nums.push_back(hex(i));
	}
	return nums;
}

// Generates a vector of n heptagonal numbers
std::vector<int> genHep(int n) {
	std::vector<int> nums;
	for (int i = 1; i < n + 1; ++i) {
		nums.push_back(hep(i));
	}
	return nums;
}

// Generates a vector of n octagonal numbers
std::vector<int> genOct(int n) {
	std::vector<int> nums;
	for (int i = 1; i < n + 1; ++i) {
		nums.push_back(oct(i));
	}
	return nums;
}


///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                               RANGE VECTORS                               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

// Generates a vector of triangular numbers from the passed min to the passed
// max exclusively
std::vector<int> genTriRange(int min, int max) {
	std::vector<int> vTri;
	for (int i = min; i < max; ++i) {
		vTri.push_back(tri(i));
	}
	return vTri;
}

// Generates a vector of square numbers from the passed min to the passed max
//	exculsively
std::vector<int> genSquRange(int min, int max) {
	std::vector<int> vSqu;
	for (int i = min; i < max; ++i) {
		vSqu.push_back(squ(i));
	}
	return vSqu;
}

// Generates a vector of pentagonal numbers from the passed min to the passed
// max exclusively
std::vector<int> genPenRange(int min, int max) {
	std::vector<int> vPen;
	for (int i = min; i < max; ++i) {
		vPen.push_back(pen(i));
	}
	return vPen;
}

// Generates a vector of hexagonal numbers from the passed min to the passed 
//	max exclusively
std::vector<int> genHexRange(int min, int max) {
	std::vector<int> vHex;
	for (int i = min; i < max; ++i) {
		vHex.push_back(hex(i));
	}
	return vHex;
}

// Generates a vector of heptagonal numbers from the passed min to the passed
// max exclusively
std::vector<int> genHepRange(int min, int max) {
	std::vector<int> vHep;
	for (int i = min; i < max; ++i) {
		vHep.push_back(hep(i));
	}
	return vHep;
}

// Generates a vector of octagonal numbers from the passed min to the passed
// max exclusively
std::vector<int> genOctRange(int min, int max) {
	std::vector<int> vOct;
	for (int i = min; i < max; ++i) {
		vOct.push_back(oct(i));
	}
	return vOct;
}


///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                   PRIME                                   //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

// Checks whether the passed integer is prime or not
bool is_prime(int n) {
	if (n == 1) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	if (!(n % 2)) {
		return false;
	}
	if (n < 9) {
		return true;
	}
	if (!(n % 3)) {
		return false;
	}
	int c = 5;
	while (c * c <= n) {
		if (!(n % c)) {
			return false;
		}
		if (!(n % (c + 2))) {
			return false;
		}
		c += 6;
	}
	return true;
}

std::vector<int> gen_primes(int min, int max) {
	std::vector<int> primes;
	if (min % 2 == 0) {
		if (min == 2) {
			primes.push_back(2);
		}
		++min;
	}
	for (int i = min; i < max; i += 2) {
		if (is_prime(i)) {
			primes.push_back(i);
		}
	}
	return primes;
}


///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                                 PALINDROME                                //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

// Checks whether the passed integer is palindromic or not
bool is_palindrome(int n) {
	std::string str = std::to_string(n);
	std::string rStr = str;
	std::reverse(rStr.begin(), rStr.end());
	if (str == rStr) {
		return true;
	}
	return false;
}
