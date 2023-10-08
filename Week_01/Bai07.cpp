#include<iostream>
using namespace std;

int main()
{
	int x1, y1, x2, y2;
	cout << "Nhap lan luot phan thuc va phan ao cua so phuc thu nhat: "; cin >> x1 >> y1;
	cout << "Nhap lan luot phan thuc va phan ao cua so phuc thu hai: "; cin >> x2 >> y2;
	cout << "Tong cua hai so phuc la: " << x1 + x2 << " + " << y1 + y2 << "i " << endl;
	cout << "Hieu cua hai so phuc la: " << x1 - x2 << " + " << y1 - y2 << "i " << endl;
}