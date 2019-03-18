#include<iostream>
using namespace std;
class cal{
pubic: int x,y;
	private:    int sum(int,int)
		    {return x+y;}
       int subst(int,int)
       { return x-y;}
       int multi(int,int)
       {return x*y;}
       int divide(int,int){return x/y;}
}a;
int main()
{	int x=10,y=5;
    a.sum(x,y);
    a.subst(x,y);
    a.multi(x,y);
    a.divide(x,y);
}

