#include"fullTime.h"

	FullTime :: FullTime(char * N,int hy,int hpw,double hw):hourlyemployee(N,hy,hpw,hw){/*cout<<" const FullTime \n";*/}

	float FullTime :: annualPay(){ return (((*this).getHOURS_PER_WEEK()*50.0*(*this).getHORLy_WAGE()))+(((*this).getHOURS_PER_WEEK()*2.0*(*this).getHORLy_WAGE())); }

	FullTime :: ~FullTime(){ /*cout<<" dst FullTime \n";*/ }
	