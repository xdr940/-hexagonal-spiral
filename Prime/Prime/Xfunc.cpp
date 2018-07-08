

#include "stdafx.h"
#include "comdef.h"
#include "funcs.h"


double X(int n, int t) {
	int  ret = 0;
	int temp = 0;
	if (n == 1) {//start 
		if (t == 1) {
			ret = 2;
		}
		if (t == 2 || t == 6) {
			ret = 1;
		}
		if (t == 3 || t == 5) {
			ret = -1;

		}
		if (t == 4) {
			ret = -2;
		}
	}
	else {
		if (t <= n - 1) { // 1
			temp = 4 - n;//起始点选定决定了 "4" 
			if (t == 1) {
				ret = temp;
			}
			else {
				ret = temp + 2 * (t - 1);
			}
		}
		if (n - 1<t&&t <= 2 * n - 1) { //2
			temp = n + 1;
			ret = temp + t - n;
		}
		if (2 * n - 1<t&&t <= 3 * n - 1) {//3
			temp = 2 * n - 1;
			ret = temp - t + 2 * n;
		}
		if (3 * n - 1<t&&t <= 4 * n - 1) {//4
			temp = n - 2;
			ret = temp - 2 * t + 6 * n;
		}
		if (4 * n - 1<t&&t <= 5 * n - 1) {//5 -
			temp = (n + 1);
			ret = -(temp + t - 4 * n);
		}
		if (5 * n - 1<t&&t <= 6 * n - 1) {//6-
			temp = -(2 * n - 1);
			ret = temp - 5 * n + t;
		}
		if (t == 6 * n) {
			ret = X(n, 6 * n - 1) + 2;
		}
	}
	
	return (double)ret;

}
