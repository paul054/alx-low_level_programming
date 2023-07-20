#include "variadic_functions.h"


	/**
	 * sum_them_all - calculate the sum of all its paramters.
	 * @n: number of paramters passed into the function.
	 *
	 * Return: the resulting sum
	 *
	 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int i, sum = 0;


		va_start(ap, n);


		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}

