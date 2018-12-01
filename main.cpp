#include <iostream>
#include "linklist.h"
#include "complex.h"
using namespace std;

int main()
{
    double fr,fi,sr,si;

    linklist l;
    complex m;
 l.iend(-4,5);
 l.iend(-3,-3);
 l.iend(-4,3);
 l.traverse();
 cout<<endl;
//assignment done without operator overloading
 l.valpos(fr,fi,1);
 l.valpos(sr,si,2);
 m.add(fr,fi,sr,si);
 l.iend(sr,si);
 l.traverse();
 cout<<endl;


 l.valpos(fr,fi,1);
 l.valpos(sr,si,3);
 m.sub(fr,fi,sr,si);
 l.iend(sr,si);
 l.traverse();
 cout<<endl;



 l.valpos(fr,fi,2);
 l.valpos(sr,si,3);
 m.mul(fr,fi,sr,si);
 l.iend(sr,si);
 l.traverse();
 cout<<endl;



 l.valpos(fr,fi,1);
 l.valpos(sr,si,3);
 m.div(fr,fi,sr,si);
 l.iend(sr,si);
 l.traverse();
 cout<<endl;


 l.valpos(fr,fi,4);
 l.delpos(4);
 l.iend(fr,fi);
 l.traverse();
 cout<<endl;


// assignment done with operator overloading
/*

 l.valpos(fr,fi,1);
 l.valpos(sr,si,2);
 complex m1(fr,fi);
 complex m2(sr,si);
 complex m3;
 m3=m1+m2;
 l.iend(m3.re,m3.im);
 l.traverse();
 cout<<endl;


 l.valpos(fr,fi,1);
 l.valpos(sr,si,3);
 complex m4(fr,fi);
 complex m5(sr,si);
 m3=m4-m5;
 l.iend(m3.re,m3.im);
 l.traverse();
 cout<<endl;

 l.valpos(fr,fi,2);
 l.valpos(sr,si,3);
 complex m6(fr,fi);
 complex m7(sr,si);
 m3=m6*m7;
 l.iend(m3.re,m3.im);
 l.traverse();
 cout<<endl;

 l.valpos(fr,fi,1);
 l.valpos(sr,si,3);
 complex m8(fr,fi);
 complex m9(sr,si);
 m3=m8/m9;
 l.iend(m3.re,m3.im);
 l.traverse();
 cout<<endl;

 l.valpos(fr,fi,4);
 l.delpos(4);
 l.iend(fr,fi);
 l.traverse();
 cout<<endl;
*/

}
