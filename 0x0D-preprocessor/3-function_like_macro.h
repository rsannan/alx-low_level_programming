#ifndef 3_FUNCTION_LIKE_MACRO_H
#define 3_FUNCTION_LIKE_MACRO_H

#define ABS(x) if (x < 0) \
		x = -x; \
		else \
		x;

#endif