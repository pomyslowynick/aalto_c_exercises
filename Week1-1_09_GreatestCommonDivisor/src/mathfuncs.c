#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mathfuncs.h"


int gcd(int a, int b) {	
	int temp, r;

	if (a < b) {
		temp = a;
		a = b;
		b = temp;
		gcd(a,b);
	} else {
		r = a % b; 
		if (r == 0) {
			return b;
		}else {
			gcd(b,r);
		}
	}
}


int gcd_iterative(int a, int b) {
	int temp,i,r;
	r = a % b;
	while(r != 0) {
		if (a < b) {
			temp = a;
			a = b;
			b = temp;
		} else {
			r = a % b;
			if (r == 0) {
				return b;
			} else {
				a = b;
				b = r;
			}
		}

	}
	return b;
	// for(i = 0; ;++i) {

	// }
	// return 0;
}
