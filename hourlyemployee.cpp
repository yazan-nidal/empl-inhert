#include"hourlyemployee.h"

	hourlyemployee :: hourlyemployee(char * N,int hy,int hpw,double hw):Employee(N,hy),hoursPerWeek(hpw),hourlyWage(hw){ /*cout<<" const hourlyemployee \n"; */}

	void hourlyemployee :: setHOURS_PER_WEEK(int n){ (*this).hoursPerWeek=n; }
	void hourlyemployee :: setHORLy_WAGE(double n){ (*this).hourlyWage=n; }

	int hourlyemployee :: getHOURS_PER_WEEK(){ return (*this).hoursPerWeek; }
	double hourlyemployee :: getHORLy_WAGE(){ return (*this).hourlyWage; }

	float hourlyemployee :: monthlyPay(){ return ((*this).getHOURS_PER_WEEK()*4.0*(*this).getHORLy_WAGE()); }

	hourlyemployee :: ~hourlyemployee(){/*cout<<" dst hourlyemployee \n";*/ }