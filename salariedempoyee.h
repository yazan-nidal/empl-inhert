#ifndef salariedemployee_h
#define salariedemployee_h
#include"employee.h"

class salarieDEmployee :public Employee
{

protected :

	int annualsalary;

public :

	salarieDEmployee(char * N="Salaried Employee",int hy=0,int n=0);

	void setANNUAlsalary(int n);
	//int getANNUAlsalary();

	float monthlyPay();

	~salarieDEmployee();

};

#endif