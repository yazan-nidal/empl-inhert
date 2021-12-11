#include"salariedempoyee.h"

	salarieDEmployee :: salarieDEmployee(char * N,int hy,int n):Employee(N,hy),annualsalary(n){ /*cout<<" const salariedempoyee \n";*/ }

	void salarieDEmployee :: setANNUAlsalary(int n){ (*this).annualsalary=n; }

	//int salarieDEmployee :: getANNUAlsalary(){ return (*this).annualsalary; }

	float salarieDEmployee :: monthlyPay(){  return ((*this).annualsalary/12.0) ; }

	salarieDEmployee :: ~salarieDEmployee(){ /*cout<<" dst salariedempoyee \n";*/ }