#include<iostream>
#include<iomanip>
using namespace std;

struct date_of_birth
{
	int date, month, year;
};
class customer
{
private:
	char fullname[30], cmt[10], ho_khau[50];
	date_of_birth a;
	int n;
public:
	void cin_information(customer t[])
	{
		cout << "(?) Nhap so khach hang can quan ly: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin.ignore(1);
			cout << "Nhap khach hang thu " << i + 1 << endl;
			cout << "Nhap ten khach hang: "; cin.getline(t[i].fullname, 30);
			cout << "Nhap lan luot ngay thang nam sinh cua khach hang: "; cin >> t[i].a.date >> t[i].a.month >> t[i].a.year;
			cin.ignore();
			cout << "Nhap so chung minh thu cua khach hang: "; cin.getline(t[i].cmt, 10);
			cin.ignore(0);
			cout << "Nhap ho khau: "; cin.getline(t[i].ho_khau, 50);
		}
	}
	void cout_information(customer t[])
	{
		for (int i = 0; i < n; i++)
		{
			cout << setw(30) << t[i].fullname << setw(10) << t[i].a.date << "/" << t[i].a.month << "/" << t[i].a.year << setw(10) << t[i].cmt << setw(20) << t[i].ho_khau << endl;
		}
	}
	void arrange(customer a[])
	{
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
			{
				if (a[i].fullname[0] > a[j].fullname[0])
				{
					customer tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
	}
	void cout_month_12(customer t[])
	{
		cout << "\t (!) So khach hang co thang sinh 12!" << endl;
		for (int i = 0; i < n; i++)
		{
			if (t[i].a.month == 12)
				cout << setw(30) << t[i].fullname << setw(10) << t[i].a.date << "/" << t[i].a.month << "/" << t[i].a.year << setw(10) << t[i].cmt << setw(20) << t[i].ho_khau << endl;
		}	
	}
};
int main()
{
	customer t[100]; 
	t->cin_information(t);
	cout << "\t(!) Danh sach khach hang tang theo thu tu tang dan cua ho ten!" << endl;
	t->cout_information(t);
	t->cout_month_12(t);
}
