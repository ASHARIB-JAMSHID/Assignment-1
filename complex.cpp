#include "complex.h"
#include <iostream>

using namespace std;

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
