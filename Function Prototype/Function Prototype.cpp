#include <iostream>
#include <string>
using namespace std;

void FunctionPrototype();

int main(){
	
	string input, y, n, Y, N;
	cout << "\nApakah anda ingin mengakses fungsion Prototype ? [Y / N] "; cin >> input;
	
	while(true){
		if (input == "y" || input == "Y"){
			FunctionPrototype();
			break;
		}
		else if (input == "n" || input == "N"){
			cout << "\nTerimakasih Atas Kunjungannya!!!\n";
			break;
		}
		else{
			cout << "\nError Input ' " << input << " ' tidak valid!!!\n";
			break;
			
		}
	}
	
}

void FunctionPrototype(){
	
	cout << "\nIni adalah Function Prototype\n";
}
