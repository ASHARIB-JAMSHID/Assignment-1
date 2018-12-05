Assignment 1 done by Asharib Jamshid.
https://github.com/ASHARIB-JAMSHID/Assignment-1.
It contains 3 cpp files and two header files. 
In main.cpp header files of two classes are added there are objects formed and functions from the class are formed.
In two header files there are protype of the functions. 
In complex and link list .cpp file required fucttions are created.


In main.cpp we have include the two classes ("complex and link list") and created two objects(in case in which operator overloading is not used) one of complex class and one of link list class. we are calling following functions to obtain the explained below 
uses by using suitable objects:

Function from link list:

	iend():insert at the end
        delpos():delete at specific position
        valpos():get value at a specific position
        iafpos():insert after a position
        traverse():print the link list

Function from complex:

	complex():constructor in which there is no initialization. 
        complex(int ,int):constructor in which there is initialization.
        add():For addition of two numbers.
        sub():For subtraction of two numbers.
        mul():For multiplication of two numbers.
        div():For division of two numbers.
        complex operator+(complex):addition of two numbers with operator overloading.
        complex operator-(complex):subtraction of two numbers with operator overloading.
        complex operator*(complex):multiplication of two numbers with operator overloading.
        complex operator/(complex):division of two numbers with operator overloading.


In header files there are functions prototypes declared.

From complex.h:

	complex();
        complex(int ,int);
        add(double ,double ,double& ,double& );//addition function in which two variables are being passed by reference so that complex number after performing opertion can returned.
        sub(double ,double ,double& ,double& );//subtraction function in which two variables are being passed by reference so that complex number after performing opertion can returned.
        mul(double ,double ,double& ,double& );//multiplication function in which two variables are being passed by reference so that complex number after performing opertion can returned.
        div(double ,double ,double& ,double& );//division function in which two variables are being passed by reference so that complex number after performing opertion can returned.
        complex operator+(complex);//addition with operator overloading and returning a bnew object.
        complex operator-(complex);//subtraction with operator overloading and returning a bnew object.
        complex operator*(complex);//multiplication with operator overloading and returning a bnew object.
        complex operator/(complex);//division with operator overloading and returning a bnew object.

From Link list.h:

	linklist()://constructor in which there is no initialization.
	iend(double r,double i);//insert at the end in the link list.
        delpos(int p);//delete at position in the link list.
        valpos(double &a,double &b,int p);//value at a position in the link list.
        iafpos(double r,double i,int p);//insert after a position in the link list.
        traverse();//print the link list.

In cpp files of complex and link list there are bodies of the functions.

In complex.cpp:

	complex::complex()
	{

	}
	complex::complex(int a,int b)
	{
	re=a;
	im=b;
	}

	complex::add(double fr,double fi,double& nr,double& ni)
	{
  	  nr=fr+nr;
   	 ni=fi+ni;
	}


	complex::sub(double fr,double fi,double& nr,double& ni)
	{
  	  nr=fr-nr;
  	  ni=fi-ni;
	}


	complex::mul(double fr,double fi,double& nr,double& ni)
	{   int n;
 	   n=(fr*nr)+(fi*ni*(-1));
  	  ni=(fr*ni)+(fi*nr);
  	  nr=n;
	}


	complex::div(double fr,double fi,double& nr,double& ni)
	{
    double nur,nui,de;
    if(ni<0)
    {
        nur=(fr*nr)+(fi*ni*(-1));
    }
    else
        {
            nur=(fr*nr)+(fi*ni*(1));
        }
	 nui=(fr*-ni)+(fi*nr);
	
 	try
    {
    de=nr*nr+ni*ni;
    if (de==0)
    {
    throw(12);
    }
    nr=nur/de;
    ni=nui/de;

    }
    
    catch(...)

    {
    cout<<"error the answer will not be correct"<<endl;
    }

	}


	complex complex::operator+(complex aso)
	{
    complex bnew;
    bnew.re=re+aso.re;
    bnew.im=im+aso.im;
    return bnew;
	}

	complex complex::operator-(complex aso)
	{
    complex bnew;
    bnew.re=re-aso.re;
    bnew.im=im-aso.im;
    return bnew;
	}

	complex complex::operator*(complex aso)
	{
    complex bnew;
    double n;
    bnew.re=re*aso.re+im*aso.im*-1;
    bnew.im=re*aso.im+im*aso.re;

    return bnew;
	}

	complex complex::operator/(complex aso)
	{
    complex bnew;
    double n;
    
    try
    {
    if(((aso.re*aso.re)+(aso.im*aso.im))==0) 
    {
        throw(1);
    }
    }
    
    catch(...)
    {
       cout<<"error the answer will not be correct"<<endl;
    }
    
    if(aso.im<0)
    {
        bnew.re=(((re*aso.re)+(im*aso.im*(-1))))/((aso.re*aso.re)+(aso.im*aso.im));
    }
    else
        {
            bnew.re=((re*aso.re)+(im*aso.im*(1)))/((aso.re*aso.re)+(aso.im*aso.im));
            }

            bnew.im=(((re*-aso.im)+(im*aso.re)))/((aso.re*aso.re)+(aso.im*aso.im));

    return bnew;
	}
	
In linklist.cpp:

	linklist::linklist()
	{
    head=NULL;
	}

	linklist::  iend(double r,double i)//insert at the end
	{
	    if (head==NULL)
	{
 	   node *temp=new node;
		temp->re=r;
		temp->im=i;

			temp-> next =head;
	head=temp;

	}

	else
	   {

 	  node *n=new node;
	node *temp=head;
	while(temp ->next != NULL)
	{temp= temp->next;
	}
	temp->next =n;
	n->re=r;
	n->im=i;
	n->next=NULL;
	}
 	}

	linklist::delpos(int p)//delete at a position
	{
		node *pre=head;
		node *cur=head;
	if(p>1)
	{       for(int i=1;i<p-1;i++)
		{
			pre=pre->next;

		}

		for(int i=1;i<=p-1;i++)
		{
			cur=cur->next;

		}


		pre->next=cur->next;
		delete cur;
	}
	else
	{
  	  cur=cur->next;
  	  head=cur;
   	 delete pre;
	}
	}

	linklist::iafpos(double r,double i,int p)//insert after a position
	{
		node *pre=head;
		node *cur=head;
        node *n=new node;
		for(int i=1;i<p;i++)
		{
			pre=pre->next;

		}

		for(int i=1;i<=p;i++)
		{
			cur=cur->next;

		}
	n->re =r;
	n->im=i;
	n->next=cur;
	pre->next=n;

	}

	linklist::valpos(double &a,double &b,int p)//value at position
	{
  	  node * pre=head;
  	  for (int i=0;i<p-1;i++)
   	 {
        pre=pre->next;
   	 }
    	a=pre->re;
    	b=pre->im;

	}

	linklist::traverse()//print the list
	{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->re;
		if (temp->im>0)
        {
            cout<<"+";

        }   cout<<temp->im<<"j"<<"  ";
		temp=temp->next;
	}
	}


	Output looks like this:

	-4+5j  -3-3j  -4+3j
	-4+5j  -3-3j  -4+3j  -7+2j
	-4+5j  -3-3j  -4+3j  -7+2j  0+2j
	-4+5j  -3-3j  -4+3j  -7+2j  0+2j  21+3j
	-4+5j  -3-3j  -4+3j  -7+2j  0+2j  21+3j  1.24-0.32j
	-4+5j  -3-3j  -4+3j  0+2j  21+3j  1.24-0.32j  -7+2j

	Process returned 0 (0x0)   execution time : 0.259 s
	Press any key to continue.


NOTE:
We assume that reader understand the syntax and why we write 1.using namespace std; and 2.using namespace std; in every cpp file
