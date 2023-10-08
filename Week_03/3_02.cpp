#include<iostream>
using namespace std;

class Polynomial
{
private:
	int a, b, c, d;
public:
	Polynomial()
	{
		a = 0;
		b = 0;
		c = 0;
		d = 0;
	}
	~Polynomial()
	{
		cout << "\t(!) Da xoa da thuc bac ba" << endl;
	}
	void cout_polynomial()
	{
		cout << "Da thuc bac ba: " << a << "x^3 " << "+ " << b << "x^2 " << "+ " << c << "x " << "+ " << d << endl;
	}
	void cin_polynomial()
	{
		cout << "Nhap lan luot he so cua da thuc bac ba: ";
		cin >> a >> b >> c >> d;
	}
	void sum_polynomial(Polynomial *X, Polynomial *Y)
	{
		cout<<"\t(!) Tong cua hai da thuc bac ba la: "<<X->a+Y->a << "x^3 " << "+ " << X->b+Y->b << "x^2 " << "+ " << X->c + Y->c << "x " << "+ " << X->d + Y->d << endl;
	}
};
int main()
{
	Polynomial* A = new Polynomial;
	Polynomial* B = new Polynomial;
	A->cin_polynomial(); B->cin_polynomial();
	A->cout_polynomial(); B->cout_polynomial();
	A->sum_polynomial(A,B);
	delete A;
}