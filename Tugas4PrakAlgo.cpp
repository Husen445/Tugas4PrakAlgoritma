#include <iostream>
using namespace std;
main (){
	int Pilih, Nilai1, Nilai2, Nilai, i;
	
	cout<< "=====Perkalian dan Perpangkatan=====\n";
	cout<< "1. Perkalian" <<endl;
	cout<< "2. Perpangkatan" <<endl;
	cout<< "====================================\n";
	cout<< "Pilih = "; cin>> Pilih;
	switch(Pilih){
		case 1:
		cout<< "Input Nilai A = "; cin>> Nilai1;
		cout<< "Input Nilai B = "; cin>> Nilai2;
		cout<< "Hasil " << Nilai1 << " x " << Nilai2 << endl;
		Nilai = 0;
		for(i=1;i<=Nilai1;i++)
		{
		Nilai = Nilai + Nilai2;
		if(i<Nilai1){
		cout<< Nilai2 << " + ";
		}else{
			cout<< Nilai2;
		}
		}
		cout<< " = " << Nilai << endl;
		cout<< "Sama-Sama :) " <<endl;
		return 0;
		break;
		case 2:
		cout<< "Input Nilai A = "; cin>> Nilai1;
		cout<< "Input Nilai B = "; cin>> Nilai2;
		cout<< "Hasil " << Nilai1 << " ^ " << Nilai2 << endl;
		Nilai = 1;
		for(i=1;i<=Nilai2;i++)
		{
		Nilai = Nilai * Nilai1;
		if(i<Nilai2){
		cout<< Nilai1 << " x ";
		}else{
			cout<< Nilai1;
		}
		}
		cout<< " = " << Nilai << endl;
		cout<< "Sama-Sama :) " <<endl;
		return 0;
		break;
		default:
		cout<< "Tidak Ada Input Nilai!" <<endl;
	}

}
