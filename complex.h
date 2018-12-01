#ifndef COMPLEX_H
#define COMPLEX_H


class complex
{
    public:
        complex();
        complex(int ,int);
        add(double ,double ,double& ,double& );//addition
        sub(double ,double ,double& ,double& );//subtraction
        mul(double ,double ,double& ,double& );//multiplication
        div(double ,double ,double& ,double& );//division
        complex operator+(complex);//addition with operator overloading
        complex operator-(complex);//subtraction with operator overloading
        complex operator*(complex);//multiplication with operator overloading
        complex operator/(complex);//division with operator overloading



        double re,im;
};

#endif // COMPLEX_H
