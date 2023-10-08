#include<iostream>
using namespace std;

class student
{
private:
	float toan, li, hoa;
public:
	string student_code, fullname, grade;
	student(int x, int y, int z, string a, string b, string c)
	{
		toan = x;
		li = y;
		hoa = z;
		student_code = a;
		fullname = b;
		grade = c;
	}
	void cout_information()
	{
		cout << "\t(!) Thong tin cua hoc sinh" << endl;
		cout << "Ma hoc sinh: " << student_code << endl
			 << "Ho va ten: " << fullname << endl
			 << "Lop: " << grade << endl
			 << "Diem toan: " << toan << endl
			 << "Diem li: " << li << endl
			 << "Diem hoa: " << hoa << endl;
	}
};
int main()
{
	student *A = new student(10, 10, 10,"12345","Nguyen Viet Anh","DHTI16A1CL");
	A->cout_information();
	delete A;
}