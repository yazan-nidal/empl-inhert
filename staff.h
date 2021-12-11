#ifndef stafF_h
#define stafF_h
#include"salariedempoyee.h"

class Staff : public salarieDEmployee
{

public :

	Staff(char * N="Salaried Employee Staff",int hy=0,int n=0);

	float annualPay();

	~Staff();
};

#endif