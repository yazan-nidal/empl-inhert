#ifndef manager_h
#define manager_h
#include"salariedempoyee.h"

class Manager : public salarieDEmployee
{

public :

	Manager(char * N="Salaried Employee Manager",int hy=0,int n=0);

	float annualPay();

	~Manager();
};

#endif