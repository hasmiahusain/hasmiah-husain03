#include <iostream>
using namespace std;

int main () {
	int x,y;
	string operasi;
	
	cout<< "======= NILAI ARITMATIKA =====" <<endl<<endl;
	cout<< "pilihannya yaitu :" <<endl;
	cout<< "1. penjumlahan" <<endl;
	cout<< "2. perkalian" <<endl;
	cout<< "3. pengurangan" <<endl;
	cout<< "4. pembagian" <<endl<<endl;
	cout<< "input nilai x : ";
	cin >>x;
	cout<< "input nilai y : ";
	cin >> y; 
	cout<< "==============================" <<endl;
	cout<<"operasi   ";
	cin>> operasi;
	
	if(operasi == "+"){
		cout << "hasil= " <<x+y<<endl;
		}
		else if (operasi == "*"){
			cout << "hasil= " <<x*y<<endl;
		}
		else if (operasi == "-"){
			cout << "hasil= " <<x-y<<endl;
		}
		else if (operasi == ":") {
			cout << "hasil= "<<x/y<<endl;
		}
		else {
			cout <<"tidak memilih" <<endl;
		}
		
		cout <<"=====================================" <<endl;
	cout << "program ini adalah program kalkulator sederhana" <<endl;
	


return 0;
}
