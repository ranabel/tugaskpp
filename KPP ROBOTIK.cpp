/*
Nama 	: Nabilah Atika Rahma
NRP		: 5025221005
Jurusan	: Teknik Informatika (TC)
*/

#include <iostream>
#include <cmath>

#define percepatan_gravitasi 10

using namespace std;

int main ()
{
	int kecepatan_awal, jarak, loss;
	float kecepatan_tangensial;
	
	cin >> kecepatan_awal;
	if (kecepatan_awal>=1 && kecepatan_awal <= 10){
			kecepatan_awal  = kecepatan_awal - 1;
			loss = 1;
	}
	else if (kecepatan_awal >= 11 && kecepatan_awal <= 20){
			kecepatan_awal = kecepatan_awal - 3;
			loss = 3;
	}
	else {
			kecepatan_awal = kecepatan_awal - 5;
			loss = 5;
	}
	jarak = pow(kecepatan_awal,2)*sin(90*3.1415/180)/percepatan_gravitasi;
	kecepatan_tangensial = sqrt(jarak*percepatan_gravitasi/sin(90*3.1415/180))+loss;
	
	cout<<jarak << " " << kecepatan_tangensial << endl;
	
	return 0;
}