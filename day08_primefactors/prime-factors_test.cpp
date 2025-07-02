#include "gmock/gmock.h"
#include "prime-factors.cpp"

using std::vector;

TEST(primefactors, PrimeTest) {
	EXPECT_EQ(1, 1);
}

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector <int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
