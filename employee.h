#ifndef employee_h
#define employee_h
#include<iostream>
using namespace std;

#define NY 2007 //suppose now year 2007

//Abstract Class
class Employee
{

protected :

	char *name;
	int hireYear;

public :

	Employee(char * N="Employee",int hy=0);

	void setName(char *n);
	void setHYear(int n);

	char *getName()const;
	int getHYear()const;

	//pure virtual function then this Class is Abstract Class
	virtual float monthlyPay()=0;
	virtual float annualPay()=0;

	virtual ~Employee();

};


#endif