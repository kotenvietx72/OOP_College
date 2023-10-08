#include<iostream>
using namespace std;

int main()
{
	int n;
	float S = 0;
	cout << "Nhap so luong phan so can tinh tong: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cout << "Nhap lan luot tu va mau cua phan so thu " << i + 1 << ": ";
		cin >> a >> b;
		S += a * 1.0 / b;
	}
	cout << "Tong cua " << n << " phan so la: " << S << endl;	
}