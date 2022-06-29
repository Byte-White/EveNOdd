#include "num.h"

EVENODD_NAMESPACE_BEGIN

	bool is_not_even(number_t number)
	{
		return !is_even(number);
	}
	bool is_odd(number_t number)
	{
		return is_not_even(number);
	}
	bool is_not_odd(number_t number)
	{
		return is_even(number);
	}
EVENODD_NAMESPACE_END