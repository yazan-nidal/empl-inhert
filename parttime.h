#ifndef parttime_h
#define parttime_h
#include"hourlyemployee.h"

class PartTime : public hourlyemployee
{

public :

	PartTime(char * N="hourly Employee PartTime",int hy=0,int hpw=0,double hw=0);

	float annualPay();

	~PartTime();
};

#endif