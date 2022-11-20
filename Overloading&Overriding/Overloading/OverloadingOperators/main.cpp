#include <iostream>
using namespace std;
class Line 
{
    public: 
        double operator + (const Line& l)
        {   
            Line line; 
            line.l = this->l+ l.l;
            return line.l;
        }


        double addLengths(Line& l1, Line& l2)
        {
            double L = l1.l+l2.l; 
            return L; 

        }
        double l; 
}; 

int main()
{
    Line l1; 
    Line l2;
    l1.l = 10; 
    l2.l = 2; 

    double l3 = l1+l2;
    cout << l3<< endl;

    return 0;

}

