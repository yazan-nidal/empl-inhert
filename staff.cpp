#include"staff.h"

	Staff :: Staff(char * N,int hy,int n):salarieDEmployee(N,hy,n){ /*cout<<" const Staff \n";*/ }

	float Staff :: annualPay(){	int i=NY-(*this).getHYear(); if(i >= 5){i=5;} return ((*this).annualsalary + ((*this).annualsalary * i * 0.02)); }

	Staff :: ~Staff(){ /*cout<<" dst staff\n";*/ }