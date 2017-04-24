#include <catch.hpp>
#include "insertion_sort.h"

SCENARIO("test by vector", "[vector]") {
	std::vector <int> v;
	v.push_back(8);
	v.push_back(1);
	v.push_back(5);
	v.push_back(9);
	v.push_back(4);
	REQUIRE(v[0] == 8);
	REQUIRE(v[1] == 1);
	REQUIRE(v[2] == 5);
	REQUIRE(v[3] == 9);
	REQUIRE(v[4] == 4);
	insertion_sort(v.begin(), v.end())
	REQUIRE(v[0] == 1);
	REQUIRE(v[1] == 4);
	REQUIRE(v[2] == 5);
	REQUIRE(v[3] == 8);
	REQUIRE(v[4] == 9);
}
