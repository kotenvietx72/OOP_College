#include<iostream>
#include<iomanip>
using namespace std;

struct quanly 
{
	char ma[8];
	char ten[30];
	int sl;
	float don_gia, thanhtien;
};
void nhap(quanly a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap thong tin mat hang thu " << i + 1 << endl;
		cout << "Nhap ma hang: "; cin.getline(a[i].ma,8);
		cout << "Nhap ten mat hang: "; cin.getline(a[i].ten, 30);
		cout << "Nhap so luong mat hang: "; cin >> a[i].sl;
		cout << "Nhap don gia mat hang: "; cin >> a[i].don_gia;
	}
}
void tinh_thanhtien(quanly a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i].thanhtien = a[i].sl * a[i].don_gia;
}
void dau_trang()
{
	cout << "\t\t\t\t\t -----BANG THONG TIN HANG HOA-----" << endl
		 << "\t+------+------------+---------------------------------+----------+----------+-----------------+" << endl
		 << "\t" << setw(5) << "|  STT " << setw(10) << "|  Ma hang  " << setw(10) << "|Ten hang" << setw(36) << "| So luong " << setw(6) << "|  Don gia " << setw(10) << "|    Thanh tien   "  << "|" << endl
		 << "\t+------+------------+---------------------------------+----------+----------+-----------------+" << endl;
}
void cuoi_trang()
{
	cout << "\t+------+------------+---------------------------------+----------+----------+-----------------+" << endl;
}
void in (quanly a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].don_gia > 50)
			cout << "\t|" << setw(6) << left << i + 1  << "|" << setw(12) << left << a[i].ma  << "|" << setw(33) << left << a[i].ten  << "|" << setw(10) << left << a[i].sl  << "|" << setw(10) << left << a[i].don_gia  << "|" << setw(17) << left << a[i].thanhtien  << "|" << endl;
	}
}
int main()
{
	quanly a[100];
	int n;
	cout << "Nhap so luong mat hang can quan ly: "; cin >> n; 
	nhap(a, n);
	tinh_thanhtien(a, n);
	dau_trang();
	in(a, n);
	cuoi_trang();
}