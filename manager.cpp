#include"manager.h"

	Manager :: Manager(char * N,int hy,int n):salarieDEmployee(N,hy,n){ /*cout<<" const Manager \n";*/ }

	float Manager :: annualPay(){ return ( (*this).annualsalary + ((*this).annualsalary * 0.10) ); }

	Manager :: ~Manager(){ /*cout<<" dst Manager \n";*/ }