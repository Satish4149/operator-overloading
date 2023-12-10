using namespace std;
#include<iostream>
class complex
{ public:
	int real;
	int imagnary;
public:
	complex()
	{
		this->real=0;
		this->imagnary=0;
	}
	complex(int r,int i)
	{
		this->real=r;
		this->imagnary=i;
	}
	void setreal(int a)
	{
	this->real=a;
	}
	int getreal()
	{
		return this->real;
	}
	void setimagnary(int a)
	{
		this->imagnary=a;
	}
	int getimagnary()
	{
		return this->imagnary;
	}
	void display1()
	{
	cout<<"\n"<<this->real<<"+"<<this->imagnary<<"i";
	}
	complex operator+(complex c2)
	{
		complex t;
		t.real=this->real+c2.real;
		t.imagnary=this->imagnary+c2.imagnary;
		return t;
	}
	 virtual complex operator+(int a)
	{
		complex t;
		t.real=this->real+a;
		t.imagnary=this->imagnary+a;
		return t;
	}

		void display2()
	{
	cout<<"\n"<<this->real<<"-"<<this->imagnary<<"i";
	}
	complex operator-(complex c2)
	{
		complex t;
		t.real=this->real-c2.real;
		t.imagnary=this->imagnary-c2.imagnary;
		return t;
	}
	complex operator-(int a)
	{
		complex t;
		t.real=this->real-a;
		t.imagnary=this->imagnary-a;
		return t;
	}

		void display3()
	{
cout<<"\n"<<this->real<<"*"<<this->imagnary<<"i";
	}
	complex operator*(complex c2)
	{
		complex t;
		t.real=this->real*c2.real;
		t.imagnary=this->imagnary*c2.imagnary;
		return t;
	}
	complex operator*(int a)
	{
		complex t;
		t.real=this->real*a;
		t.imagnary=this->imagnary*a;
		return t;
	}
		
		void display4()
	{
	cout<<"\n"<<this->real<<"/"<<this->imagnary<<"i";
	}
	complex operator/(complex c2)
	{
		complex t;
		t.real=this->real/c2.real;
		t.imagnary=this->imagnary/c2.imagnary;
		return t;
	}
	complex operator/(int a)
	{
		complex t;
		t.real=this->real/a;
		t.imagnary=this->imagnary/a;
		return t;
	}
	
	/*void display5()
	{
	cout<<"\n"<<this->real<<"/"<<this->imagnary<<"i";
	}*/
	int operator<(complex c2)
	{
	
	if(this->real<c2.real && this->imagnary<c2.imagnary)
	
		return 1;
	
	else
	
		return 0;
	
	}
	int operator<(int a)
	{
		if(this->real<a && this->imagnary<a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	}
	
		int operator>(complex c2)
	{
	
	if(this->real>c2.real && this->imagnary>c2.imagnary)
	
		return 1;
	
	else
	
		return 0;
	
	}
	int operator>(int a)
	{
		if(this->real>a && this->imagnary>a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	}
	
	
}
//global
	complex operator+(int b,complex c1)
	{

		complex t;
		t.real=b+c1.real;
		t.imagnary=b+c1.imagnary;
		return t;
	}
	
			complex operator-(int b,complex c1)
	{
		complex t;
		t.real=b-c1.real;
		t.imagnary=b-c1.imagnary;
		return t;
	}
	
	complex operator*(int b,complex c1)
	{
		complex t;
		t.real=b*c1.real;
		t.imagnary=b*c1.imagnary;
		return t;
	}
	
		complex operator/(int b,complex c1)
	{
		complex t;
		t.real=b/c1.real;
		t.imagnary=b/c1.imagnary;
		return t;
	}
	
		int operator<(int b,complex c1)
	{
		if(b<c1.real && b<c1.imagnary)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	}
	
	int operator>(int b,complex c1)
	{
		if(b>c1.real && b>c1.imagnary)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	}
int main()
{
	complex c1,c2;
	printf("enter the real :");
	scanf("%d",&c1.real);
		printf("enter the imagnary : ");
	scanf("%d",&c1.imagnary );
		printf("enter the real :");
	scanf("%d",&c2.real);
		printf("enter the imagnary :");
	scanf("%d",&c2.imagnary );
	c1.display1();
	c2.display1();
	while(1){
		int choice;
	cout<<"\nEnter the choice\n 1: for add \n 2: for sub \n 3: for multi \n 4: for div  \n 5: for less than \n 6: for greater than \n 7: for over program  \n select :";
	cin>>choice;
	//for addition
	if(choice==1)
	{
		complex c3;
	c3=c1+c2;
	c3.display1();
	complex c4;
	int a=10;
	c4=c1+a;
	c4.display1();
	int b=10;
	complex c5;
	c5=b+c1;
	c5.display1();	
	}
	//for subtraction
	if(choice==2)
	{
		complex c3;
	c3=c1-c2;
	c3.display2();
	complex c4;
	int a=10;
	c4=c1-a;
	c4.display2();
	int b=10;
	complex c5;
	c5=b-c1;
	c5.display2();	
	}
	//for multiplication
	if(choice==3)
	{
		complex c3;
	c3=c1*c2;
	c3.display3();
	complex c4;
	int a=10;
	c4=c1*a;
	c4.display3();
	int b=10;
	complex c5;
	c5=b*c1;
	c5.display3();	
	}
	//for division
	if(choice==4)
	{
		complex c3;
	c3=c1/c2;
	c3.display4();
	complex c4;
	int a=10;
	c4=c1/a;
	c4.display4();
	int b=10;
	complex c5;
	c5=b/c1;
	c5.display4();	
	}
	
	if(choice==5)
	{
		//complex c3;
		//c3=c1<c2;
		if(c1<c2)
		{
			cout<<"\n c1 is less than c2 ";
		}
		else
	{
			cout<<"\n c1 is greater than c2 ";
		}
		//c4=c1<a;
		int a=10;
			if(c1<a)
		{
			cout<<"\n c1 is less than 10 ";
		}
		else
	{
			cout<<"\n c1 is greater than 10 ";
		}
		//global
		//c5=b<c1;
		int b=10;
			if(b<c1)
		{
			cout<<"\n 10 is less than c1 ";
		}
		else
	{
			cout<<"\n 10 is greater than c1 ";
		}
	}
	
/*//	c3.display5();
	complex c4;
	int a=10;
	c4=c1<a;
	//c4.display5();
	int b=10;
	complex c5;
	c5=b<c1;
	//c5.display5();	
	}*/
	if(choice==6)
	{
		//complex c3;
		//c3=c1>c2;
		if(c1>c2)
		{
			cout<<"\n c1 is greater than c2 ";
		}
		else
	{
			cout<<"\n c1 is less than c2 ";
		}
		//c4=c1>a;
		int a=10;
			if(c1>a)
		{
			cout<<"\n c1 is greater than 10 ";
		}
		else
	{
			cout<<"\n 10 is less than c1 ";
		}
		//global
		//c5=b>c1;
		int b=10;
			if(b>c1)
		{
			cout<<"\n 10 is greater than c1 ";
		}
		else
	{
			cout<<"\n 10 is less than c1 ";
		} }
	
//for over 
if(choice==7)
{
	printf("program is over");
	break;
	}
		
	
}
return 0;
}
