#include"employee.h"
#include"salariedempoyee.h"
#include"manager.h"
#include"staff.h"
#include"hourlyemployee.h"
#include"fulltime.h"
#include"parttime.h"

void print(Employee *p)
{
		cout<<"	"<<(*p).getName()<<"		Monthly Pay:	";

		float r=(*p).monthlyPay()-(int)(*p).monthlyPay();
		if(r == 0){ printf("%g.00",(*p).monthlyPay()); }
		else
		{
			r=r * 10;
			r=r - (int)r;
			if(r == 0){printf("%g0",(*p).monthlyPay()); }
			else{printf("%g",(*p).monthlyPay());}
		}

		cout<<"		Annual Pay:	";

		r=(*p).annualPay()-(int)(*p).annualPay();
		if(r == 0){printf("%g.00 \n",(*p).annualPay());}
		else
		{
			r=r*10;
			r=r - (int)r;
			if(r == 0){printf("%g0 \n",(*p).annualPay());}
			else{printf("%g \n",(*p).annualPay());}
		}
}

void main()
{
	// qiuq test
	//Employee p; 0
	//Employee *p; 1

	//salarieDEmployee p; 0
	//salarieDEmployee *p; 1

	//Employee *p=new Manager("Thomas",2003,97000);
	//cout<<" "<<(*p).getName()<<" "<<(*p).monthlyPay()<<" "<<(*p).annualPay()<<"\n";
	//p=new Staff("Johnson",1994,65000);
	//cout<<" "<<(*p).getName()<<" "<<(*p).monthlyPay()<<" "<<(*p).annualPay()<<"\n";

	//hourlyemployee p; 0
	//hourlyemployee *p; 1

	//Employee *p=new FullTime("Campion",2005,40,18.75);
	//cout<<" "<<(*p).getName()<<" "<<(*p).monthlyPay()<<" "<<(*p).annualPay()<<"\n";
	//p=new PartTime("Lewis",2006,25,12.50);
	//cout<<" "<<(*p).getName()<<" "<<(float)((*p).monthlyPay())<<" "<<(float)((*p).annualPay())<<"\n";

	//cout<<(long double)1.0; 
	//printf("%f",0); 1

	// MAIN
	
	//FILE POINTER && OPEN FILE
	FILE *fptr=NULL;
	fptr=fopen("DATA.txt","r");
	if(fptr == NULL)return;

	// MEMBERS OF FILE COUNT
	int count=0;
	char li[100000];
	while(!feof(fptr)){fgets(li,100,fptr); count++; }
	//cout<<" : "<<count<<"\n";

	//allocated pointers point to base for polymorphism
	Employee **E=new Employee*[count];
	
	rewind(fptr);
	Employee *p=NULL;
	for(int i=0; i<count ;i++)
	{
		char x[100];
		fscanf(fptr,"%s",x);
		//cout<<x<<"\n";

		char y[100];//name employee
		fscanf(fptr,"%s",y);

		int ye;// hire year
		fscanf(fptr,"%d",&ye);

		if(strcmp(x,"Staff")==0) 	
		{ 
			int ns; fscanf(fptr,"%d",&ns); 
			p=new Staff(y,ye,ns);
		}

		if(strcmp(x,"Manager")==0)
		{
			int ns;
			fscanf(fptr,"%d",&ns);
			p=new Manager(y,ye,ns);
		}

		if(strcmp(x,"Parttime")==0)
		{
			int hpw;
			double hw;
			fscanf(fptr,"%d",&hpw);
			fscanf(fptr,"%lf",&hw);
			p=new PartTime(y,ye,hpw,hw);
		}

		if(strcmp(x,"Fulltime")==0)
		{
			int hpw;
			double hw;
			fscanf(fptr,"%d",&hpw);
			fscanf(fptr,"%lf",&hw);
			p=new FullTime(y,ye,hpw,hw);
		}

		//cout<<" "<<(*p).getName()<<" "<<(*p).monthlyPay()<<" "<<(*p).annualPay()<<"\n";
		(*(E+i))=p;
		p=NULL;

	}
	
	//print as special format short floating number from 2 digits fraction 
		for(int i=0;i<count;i++)
	{
		p=(*(E+i));
		print(p);
	}
	fcloseall();

	//print in new text file as format long float number from 6 digits fraction 
	fptr=fopen("SD.txt","w");

			for(int i=0;i<count;i++)
	{
		p=(*(E+i));
		fprintf(fptr,"	%s		Monthly Pay:		%lf		Annual Pay:		%lf \n",(*p).getName(),(*p).monthlyPay() ,(*p).annualPay());

	}

fcloseall();

// FREE Alocated Memory
for(int tt=0;tt<count;tt++){delete (*(E+tt)); (*(E+tt))=NULL; }
delete []E;
E=NULL;

}