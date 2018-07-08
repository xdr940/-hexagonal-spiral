

#include "stdafx.h"
#include "comdef.h"
#include "funcs.h"

double Y(int n, int t) {
	int max = 6 * n;
	int ret = 0;

	if (t <= (n - 1)) {// 1  -
		ret = -n;
	}
	if ((n - 1)<t&&t <= 2 * n - 1) {//   2 -
		ret = -((2 * n - 1) - t);
	}
	if (2 * n - 1<t&&t <= (3 * n - 2)) {// 3 +
		ret = t - (2 * n - 1);
	}

	if ((3 * n - 2)<t&&t <= 4 * n - 1) { // 4 +
		ret = n;
	}
	if (4 * n - 1<t&&t <= 5 * n - 1) { //5 + 
		ret = 5 * n - 1 - t;
	}
	if (5 * n - 1<t&&t <= 6 * n - 1) { // 6-
		ret = -(t - (5 * n - 1));
	}
	if (6 * n - 1<t&&t <= 6 * n) { // 6-
		ret = -n;
	}
	return(double) ret*miu;

}
