#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
	public:
		void display()
		{
			cout<<real;
			if(img>0)
			cout<<"+";
			cout<<img<<"i";
		}
		void set(int r,int i)
		{
			real=r;
			img=i;
		}
		complex add(complex *x,complex *y)
		{
			complex temp;
			temp.real=x->real+y->real;
			temp.img=x->img+y->img;
		}
		complex multi(complex *x,complex *y)
		{
			complex temp;
			temp.real=(x->real*y->real)-(x->img*y->img);
			temp.img=(x->real*y->img)+(x->img*y->real);
		}
};
int main()
{
	complex c1,c2,c3,c4;
	c1.set(5,4);
	c2.set(3,-2);
	cout<<"\n 1st complex number";
	c1.display();
	cout<<"\n 2nd complex number";
	c2.display();
	c3=c1.add(&c1,&c2);
	cout<<"\n addition two complex number";
	c3.display();
	c4=c1.multi(&c1,&c2);
	cout<<"\n multiplication of two complex numbers";
	c4.display();
	return 0;
}
