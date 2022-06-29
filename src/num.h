#include <cstdint>

#define EVENODD_NAMESPACE_BEGIN namespace EveNOdd{
#define EVENODD_NAMESPACE_END }

EVENODD_NAMESPACE_BEGIN

	using number_t = uint64_t;
	number_t min_value();
	number_t max_value();
	bool is_even(number_t number);
	bool is_not_even(number_t number);
	
	bool is_odd(number_t number);
	bool is_not_odd(number_t number);
	
	
EVENODD_NAMESPACE_END