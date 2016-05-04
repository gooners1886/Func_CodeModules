#ifndef _INLINE_FUNCTION_USAGE_H_
#define _INLINE_FUNCTION_USAGE_H_

inline int my_max(int i, int j, int k)
{
	if ( i < j )
	{
		i = j;
	}
	if ( i < k )
	{
		i = k;
	}

	return i;
}

#endif