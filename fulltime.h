#ifndef fulltime_h
#define fulltime_h
#include"hourlyemployee.h"

class FullTime : public hourlyemployee
{

public :

	FullTime(char * N="hourly Employee FullTime",int hy=0,int hpw=0,double hw=0);

	float annualPay();

	~FullTime();
};

#endif