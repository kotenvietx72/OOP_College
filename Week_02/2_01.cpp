#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct date_of_birth
{
	int date, month, year;
};
class student
{
private:
	string fullname;
	date_of_birth a;
	string gt;
	float toan, li, hoa, diemtb;
public:
	void cin_information()
	{
		cout << "\t(!) Nhap thong tin hoc sinh!" << endl;
		cin.ignore(0);
		cout << "(?) Nhap ten sinh vien: "; getline(cin, fullname);
		cout << "(?) Nhap gioi tinh: "; getline(cin, gt);
		cout << "(?) Nhap lan luot ngay thang nam sinh: "; cin >> a.date >> a.month >> a.year;
		cout << "(?) Nhap diem toan: "; cin >> toan;
		cout << "(?) Nhap diem li: "; cin >> li;
		cout << "(?) Nhap diem hoa: "; cin >> hoa;
	}
	void GPA()
	{
		diemtb = (toan + li + hoa) / 3;
	}
	void cout_information()
	{
		cout << "\t(!) Thong tin hoc sinh" << endl;
		cout << setw(15) << fullname << setw(10) << a.date << "/" << a.month << "/" << a.year << setw(10) << gt << setw(10) << toan << setw(10) << li << setw(10) << hoa << setw(10) << diemtb << endl;
	}
};
int main()
{
	student a;
	a.cin_information();
	a.GPA();
	a.cout_information();
}