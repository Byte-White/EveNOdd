#include"num.h"


EVENODD_NAMESPACE_BEGIN
	#define GET_MIN_V1 1<<(sizeof(number_t)-1)
	#define GET_MIN_V2 0

	#define GET_MAX_V1 ~(1<<(sizeof(number_t)-1))
	#define GET_MAX_V2 ~0

	number_t min_value()
	{
		return GET_MIN_V1 < GET_MIN_V2 ? GET_MIN_V1 : GET_MIN_V2;
	}
	number_t max_value()
	{
		return  GET_MAX_V1 > GET_MAX_V2 ? GET_MAX_V1 : GET_MAX_V2;
	}
	EVENODD_NAMESPACE_END