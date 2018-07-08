
#include "stdafx.h"
#include "comdef.h"
#include "funcs.h"


int isprime(int m) {

	int re=0;
	int i;

	for (i = 2;i<m;i++) {
		if (m%i == 0) {
			re = 0;

			break;
		}
		else {

			re = 1;
		}


	}
	return re;
}