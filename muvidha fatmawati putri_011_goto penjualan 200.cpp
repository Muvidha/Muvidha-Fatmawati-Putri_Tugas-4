#include <iostream>

using namespace std;
int main()
{
    menu :
	int bayar,akhir,diskon,uang,sistem,menu;
    char ulang;
    
cout<<"MUVIDHA FATMAWATI PUTRI"<<endl<<"Kasir"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Total pembayaran : ";
    cin>>bayar;
    if ((bayar>=500000) && (bayar<10000000)){
        diskon=bayar*0.10;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((bayar>=200000) && (bayar<5000000)){
        diskon=bayar*0.05;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 5%"<<endl;
    } else if (bayar<=1000000){
        diskon=bayar;
        akhir=bayar;
        cout<<endl<<"diskon 0%"<<endl;
    }else {
        akhir=bayar;
    }
    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang : ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda : \n"<<kembalian;
   
   	cout << "Apakah Anda Ingin Menghitung ulang [y/n]? \n"; cin >> ulang;
	if (ulang == 'y' || ulang == 'Y'){
		system ("cls");
		goto menu;
	}
	else if (ulang == 'n' || ulang == 'N'){
		cout << "Terima kasih" << endl;
	}
	
	return 0;
}
