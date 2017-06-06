#include "New_r.h"



New_r::New_r()
{
}

void New_r::Point(int k) {
	if (n == 0) {
		if (k == 1) {
			mass(526, 27,1);
		}
		if (k == 2) {
			mass(21, 544,1);
		}
		if (k == 3) {
			mass(980, 544,1);
		}
		n++;
	}

	if (n == 1) {
		if (k == 1) {
			mass(526, 138,1);
		}
		if (k == 2) {
			mass(526, 264,1);
		}
		if (k == 3) {
			mass(416, 411,1);
		}
		if (k == 4) {
			mass(526, 508,1);
		}
		if (k == 5) {
			mass(814, 555,1);
		}
	}
	
	
}
int road_x[7] = { 0,0,0,0,0,0 };
int road_y[7] = { 0,0,0,0,0,0 };

int New_r::mass(int k1, int k2, int k3) {

	if (k3 == 1) {
		road_x[i] = k1;
		road_y[i] = k2;
		i++;
	}
	if (k3 == 0) {
		if (k1 == -1)
			return road_y[k2];

		if (k2 == -1)
			return road_x[k1];
	}
}
