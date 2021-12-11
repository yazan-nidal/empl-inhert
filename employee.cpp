#include"employee.h"

	Employee :: Employee(char *N,int hy):name(NULL){ (*this).setName(N); (*this).setHYear(hy); /*cout<<" const EMpLOyEE \n";*/ }

	//Deep Copy for name
	void Employee :: setName(char *n){ if((*this).name != NULL){delete [](*this).name; (*this).name=NULL;}(*this).name=new char[strlen(n) + 1]; strcpy(((*this).name),n); }
	void Employee :: setHYear(int n){ this->hireYear=n; }

	char * Employee :: getName()const{ return (*this).name; }
	int Employee :: getHYear()const{ return this->hireYear; }

	//this section convert for pure virtual then this not use
	//float Employee :: monthlyPay(){return 0;}
	//float Employee :: annualPay(){return 0;}

	Employee ::	~Employee(){ if((*this).name != NULL){delete [](*this).name;} (*this).name=NULL; hireYear=0; /*cout<<" dst EMPlOyEe \n";*/ }