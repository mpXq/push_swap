#include "push_swap.h"

int	find2thirdsmin(int a[], int lena, int baselena)
{
	int	i;
	int	x;
	int	lower;
	int	tmplower;

	i = 0;
	lower = a[findminus(a, lena)];
	while (i < baselena / 3)
	{
		tmplower = 0;
		x = 0;
		while (x < lena)
		{
			if (a[x] < a[tmplower] && a[x] < lower)
				tmplower = x;
			x++;
		}
		lower = a[tmplower];
		i++;
	}
	return (lower);
}

int	findclosest(int	a[], int lena, int baselena)
{
	int	x;
	int	minus;
	int	breaker;

	x = -1;
	breaker = 0;
	while (++x < lena && breaker == 0)
		if (a[x] < find2thirdsmin(a, lena, baselena))
				breaker++;
	minus = --x;
	x = lena;
	breaker = 0;
	while (--x > lena && breaker == 0)
		if (a[x] < find2thirdsmin(a, lena, baselena))
				breaker++;
	if (++x / 2 > minus)
		return (minus);
	return (x);
}

int     firstsorttest(int a[], int b[], int lena, int lenb)
{
        int     i;
        int     min;

        i = 0;
        while (lena)
        {
                min = a[findminus(a,lena)];
                if (findminus(a,lena) >= lena / 2)
                        while (a[0] != min)
                                i += rra(a, lena);
                else
                        while (a[0] != min)
                                i += ra(a, lena);
                i += pb(a, b, lena--, lenb++);
        }
        return (i);
}

int	secondsort(int a[], int b[], int lena, int lenb)
{
	int	i;
	int	baselena;
	int	closest;

	i = 0;
	while (lena > 3)
	{
		baselena = lena;
		while (lena > baselena - (baselena / 3))
		{
			closest = findclosest(a, lena, baselena);
			if (closest < lena / 2)
				while (closest--)
					i += ra(a, lena);
			else
				while (closest++ < lena)
					i += rra(a, lena);
			i += pb(a, b, lena--, lenb++);
		}
	}
	sort3(a, lena, i);
	while (lena)
		i += pb(a, b, lena--, lenb++);
	i += firstsorttest(b, a, lenb, lena);
	return (i);
}
