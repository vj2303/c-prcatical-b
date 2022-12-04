
#include <iostream>

using namespace std;

class complex
{
    
    private:
        int r,i;
    public:
        complex operator +(complex &c)
        {
            complex t;
            t.r = r + c.r;
            t.i = i + c.i;
            return  t;
        }
        complex operator *(complex &c)
        {
            
            complex t;
            t.r = (r*c.r)-(i*c.i);
            t.i = (r*c.i)+(i*c.r);
            return t;
        }
        friend istream & operator >>(istream &in, complex &c);
        friend ostream & operator <<(ostream &out, complex &c);
    
};

istream & operator >>(istream &in, complex &c)
{
    
    cout<<"enter the real and imaginary part: "<<endl;
    in>>c.r>>c.i;
    
}

ostream & operator <<(ostream &out, complex &c)
{
    
    out<<c.r<<"+"<<c.i<<"i"<<endl;
    
}
int main()
{
    complex c1,c2;
    
    cin>>c1;
    cin>>c2;
    
    complex c3 = c1+c2;
    complex c4 = c1*c2;
    cout<<c3;
    cout<<c4;

    return 0;
}
