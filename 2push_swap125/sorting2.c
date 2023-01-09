#include "push_swap.h"

int	findstackmin(int a[], int lena, int baselena)
{
	int	i;
	int	x;
	int	lower;
	int	tmplower;

	i = 1;
	lower = a[findminus(a, lena)];
	while (i < baselena / 5)
	{
		tmplower = 0;
		x = 0;
		while (x < lena)
		{
			if (a[x] < a[tmplower] && a[x] > lower)
				tmplower = x;
			x++;
		}
		lower = a[tmplower];
		i++;
	}
	return (lower);
}

int	findclosest(int	a[], int lena, int baselena, int min)
{
	int	x;
	int	minus;
	int	breaker;

	x = -1;
	breaker = 0;
	while (++x < lena && breaker == 0)
		if (a[x] <= min)
				breaker++;
	minus = --x;
	x = lena;
	breaker = 0;
	while (--x && breaker == 0)
		if (a[x] <= min)
				breaker++;
	if (-(++x - baselena) > minus)
		return (minus);
	return (x);
}

int     findmax(int a[], int lena)
{
        int     x;
        int     rep;

        x = 0;
        rep = x;
        while (x < lena)
        {
                if (a[rep] < a[x])
                        rep = x;
                x++;
        }
        return (rep);
}

int	findclosestmin(int a[], int b[], int lena)
{
        int     x;
        int     rep;

        x = 0;
        rep = findminus(a, lena);
        while (x < lena)
        {
                if (a[rep] < a[x] && a[x] < b[0])
                        rep = x;
                x++;
        }
        return (rep);
}

int	secondsort(int a[], int b[], int lena, int lenb)
{
	int	i;
	int	baselena;
	int	count;
	int	closest;
	int	min;

	i = 0;
	count = 0;
	baselena = lena;
	min = findstackmin(a, lena, baselena);
	while (i < baselena / 5)
	{
		closest = findclosest(a, lena, baselena, min);
		if (closest > lena / 2)
			while (closest++ < lena)
				count += rra(a, lena);
		else
			while (closest--)
				count += ra(a, lena);
		i++;
		if (lenb > 0 && a[0] > b[findmax(b, lenb)])
			while (b[0] != b[findmax(b, lenb)])
				count += rb(b, lenb);
		else if (lenb > 0 && a[0] < b[findminus(b, lenb)])
			while (b[0] != b[findminus(b, lenb)])
				count += rb(b, lenb);
		else if (lenb > 1)
		{
			while (findclosestmin(b, a, lenb) != lenb - 1)
				count += rb(b, lenb);
			printf("%d > %d\n", a[0], b[findclosestmin(b, a, lenb)]);
		}
		count += pb(a, b, lena--, lenb++);
	}
	while (b[0] != b[findmax(b, lenb)])
		count += rb(b, lenb);
	while (lenb)
		count += pa(a, b, lena++, lenb--);
	return (count);
}
