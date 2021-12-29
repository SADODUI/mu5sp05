#include "max.h"
#include <stdio.h>

void minim (int t[], int n, int *min)
{
 int i;int  val_min;
	val_min = t[0];
	for (i=0; i<n; i++)
	{
         if (t[i] < val_min)
		{
			val_min = t[i];
		}
	}
	*min = val_min;
}
