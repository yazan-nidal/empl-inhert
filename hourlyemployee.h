#ifndef hourlyemployee_h
#define hourlyemployee_h
#include"employee.h"

 class hourlyemployee : public Employee
 {

 protected :
	 
	 int hoursPerWeek;
	 double hourlyWage;

 public :

	 hourlyemployee(char * N="hourly Employee",int hy=0,int hpw=0,double hw=0);

	 void setHOURS_PER_WEEK(int n);
	 void setHORLy_WAGE(double n);

	 int getHOURS_PER_WEEK();
	 double getHORLy_WAGE();

	 float monthlyPay();

	 ~hourlyemployee();

 };

#endif