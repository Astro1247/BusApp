#include "Bus.h"
#include <cstdlib>
#include "Mainform.h"
#include "time.h"



/*Bus::Bus(int id, int stationID, int routeID)
{
	
}*/

Bus::Bus() {
	money = 0;
	pass = 0;
	sum_pass += pass;
}

void Bus::stop() {
	srand(time(NULL));
	pass_out = pass - rand() % (pass + 1);
	pass = pass - pass_out;
	pass_1 = pass + rand() % 20 - pass;
	pass = pass_1;
	money = money + pass_1 * 5;
	sum_pass += pass;
}

int Bus::Info(int k) {
	if (k == 1) return money;
	if (k == 2) return pass;
	if (k == 3) return sum_pass;
}

