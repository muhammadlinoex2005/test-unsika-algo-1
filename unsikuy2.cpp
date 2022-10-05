#include <iostream>

using namespace std;

// npm ardho = 2210631170082

int main(){
	double npmuser;
	double npm = 2210631170082;
	string nama;
	int umur;
	string kelas;
	string hobi; 
	string citacita;

	cout << "Masukan NPM anda: \n";
	cin >> npmuser;

	if(npmuser != npm){
		cout << "\nPENYUSUP!\n\n";
	}

	else{
		cout << "\nApakah anda Muhammad Ardho Rantisy? (ya/bukan): ";
		
		char jawaban;
		cin >> jawaban;

		switch(jawaban)
		{
			case 'y':
			case 'Y':
			cout << "\nSelamat Datang Ardho!\n\n";
			cout << "Ini adalah biodata anda: \n\n" << "Nama: Muhammad Ardho Rantisy\n" << "Kelas: 1C Informatika\n" << "NPM: 2210631170082\n" << "Umur: 17 Tahun\n" << "Hobi: Berenang, main game, dan membaca sejarah\n" << "Cita-cita: Memimpin Indonesia kearah yang lebih baik\n\n";
			break;

			case 'b':
			case 'B':
			cout << "\nPENYUSUP!!!\n\nAksi anda ini sudah dilaporkan ke pihak yang berwajib! \n\nharap matikan komputer anda!\n\n";
			break;

			default:
			cout << "MASUKAN JAWABAN YANG BENAR! (ya/bukan)";
			break;
		}
		
	}

	return 0;

}