#ifndef LINKLIST_H
#define LINKLIST_H

struct node
{
    double re,im;
    node *next;
};
class linklist
{
        public:
        linklist();

        iend(double r,double i);//insert at the end
        delpos(int p);//delete at position
        valpos(double &a,double &b,int p);//value at a position
        iafpos(double r,double i,int p);//insert after a position
        traverse();//print the list

        private:
        node *head;
};

#endif // LINKLIST_H
