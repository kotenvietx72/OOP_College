#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct hocsinh {
	string masv, ten, quequan;
	float tong = 0;
};
void nhap(hocsinh a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
		cout << "Nhap ma sinh vien: "; getline(cin, a[i].masv);
		cout << "Nhap ten sinh vien: "; getline(cin, a[i].ten);
		cout << "Nhap que quan: "; getline(cin, a[i].quequan);
		cout << "Nhap tong diem: "; cin >> a[i].tong;
	}
}
void sapxep(hocsinh a[], int n)
{
	for(int i=0;i<n-1;i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].tong < a[j].tong)
			{
				hocsinh tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
}
void dautrang()
{
	cout << "\t\t\t\t\t ----- DANH SACH HOC SINH -----" << endl
		 << "\t+-------+---------+------------------------------+------------------------------+-----------+" << endl
		 << "\t| " << setw(6) << left << "STT" << setw(10) << left << "| Ma so" << setw(31) << left << "| Ho va ten" << setw(31) << left << "| Que quan" << setw(10) << left << "| Tong diem" << " |" << endl
		 << "\t+-------+---------+------------------------------+------------------------------+-----------+" << endl;
}
void cuoitrang()
{
	cout << "\t+-------+---------+------------------------------+------------------------------+-----------+" << endl;
}
void in_1(hocsinh a[], int n)
{
	dautrang();
	sapxep(a, n);
	for(int i=0;i<n;i++)
		cout << "\t|" << setw(7) << left << i + 1 << "|" << setw(9) << left << a[i].masv << "|" << setw(30) << left << a[i].ten << "|" << setw(30) << left << a[i].quequan << "|" << setw(11) << left << a[i].tong << "|" << endl;
	cuoitrang();
}
void in_2(hocsinh a[], int n)
{
	dautrang();
	for (int i = 0; i < n; i++)
	{
		if (a[i].quequan == "Nam Dinh")
			cout << "\t|" << setw(7) << left << i+1 <<"|"<< setw(9) << left << a[i].masv << "|" << setw(30) << left << a[i].ten << "|" << setw(30) << left << a[i].quequan << "|" << setw(11) << left << a[i].tong << "|" << endl;
	}
	cuoitrang();
}
int main()
{
	hocsinh a[100]; int n;
	cout << "Nhap so luong hoc sinh can quan ly: "; cin >> n;
	nhap(a, n);
	cout << "Danh sach hoc sinh sap xep theo thu tu giam dan!" << endl; in_1(a, n);
	cout << "Danh sach hoc sinh co que o Nam Dinh!" << endl; in_2(a, n);
}