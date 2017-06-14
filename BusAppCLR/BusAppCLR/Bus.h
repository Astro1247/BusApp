#pragma once
ref class Bus
{
public:
	Bus();
	void stop();
	//void Print();
	int Info(int);
	//Bus(int id, int stationID, int routeID);
	//Bus(int k) { busCount = k; };
private:
	int money = 0;
	int pass = 0;
	int pass_1 = 0;
	int pass_out = 0;
	int sum_pass = 0;
	//int road_1[5];
};

