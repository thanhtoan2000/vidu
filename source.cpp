#include <iostream>
using namespace std;
int tong(int a, int b);
{
return a+b;
}
int hieu(int a, int b);
{
return a-b;
}
int tich(int a, int b);
{
return a*b;
}
void chanLe(int a){
 if( a % 2 == 0)
	count <<"so chan";
else{
	count<<"so le";
}
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;
	if(phepToan=="-"){
	count<<"Hieu ="<<hieu(a,b)<<endl;

        if(phepToan=="+")
        count<<"Tong :"<<tong(a,b)<<endl;

 	if(phepToan=="*")
        count<<"Tich :"<<tich(a,b)<<endl;

	cout << "Nhap so nguyen a: ";
	cin >> a;
 	chanLe(a);
	system("pause");
	return 0;
}