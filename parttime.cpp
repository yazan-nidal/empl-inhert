#include"parttime.h"

	PartTime :: PartTime(char * N,int hy,int hpw,double hw):hourlyemployee(N,hy,hpw,hw){/*cout<<" const PartTime \n";*/}

	float PartTime :: annualPay(){ return ((*this).getHOURS_PER_WEEK()*50.0*(*this).getHORLy_WAGE()); }

	PartTime :: ~PartTime(){ /*cout<<" dst PartTime \n";*/ }
