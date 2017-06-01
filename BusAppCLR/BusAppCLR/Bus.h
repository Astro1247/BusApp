#pragma once
ref class Bus
{
public:
	int busCount;
	Bus();
	void stop();
	static void print();
	//Bus(int id, int stationID, int routeID);
	//Bus(int k) { busCount = k; };
private:
	int money;
	int pass;
	int pass_out;
	int count;
};

