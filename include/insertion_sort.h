#pragma once
#include <iostream>
#include <vector>
#include <ctime>
template <typename Iterator>
void insertion_sort(Iterator start, Iterator end)
{
	if (start >= end)
		return;

	for (Iterator i = start + 1; i != end; ++i)
	{
		for (Iterator j = i; j != start && *j < *(j - 1); --j)
		{
			*j ^= *(j - 1);
			*(j - 1) ^= *j;
			*j ^= *(j - 1);
		}
	}
}