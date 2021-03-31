#include<iostream>
using namespace std;
int main()
{
	float p,l,a,s,t,L,r,V,phi=3.14;
	int menu;
	char ulang;
	
	do{
	cout << " ========================================= \n";
    cout << " >> M BAHRUL ULUM <<            == \n";
    cout << " >> 1902011027            <<            == \n";
    cout << " >> TEKNIK INFORMATIKA    <<            == \n";
    cout << " ========================================= \n";
	cout << " == Menghitung Luas Dan Volume          == \n";
	cout << "========================================== \n";
	cout << "1. LUAS PERSEGI PANJANG \n" ;
	cout << "2. LUAS SEGITIGA \n" ;
	cout << "3. LUAS LINGKARAN \n" ;
	cout << "4. VOLUME KUBUS \n" ;
	cout << "5. VOLUME TABUNG \n" ;
	cout << "6. VOLUME KERUCUT \n" ;
	cout << "====================\n\n" ;
	cout <<"Jawab : "; cin >> menu ;
	cout << "\n\n**************************" <<endl;
	
	switch (menu)
	{
	case 1:
		cout << "MENGHITUNG LUAS PERSEGI PANJANG \n\n" ;
		cout<<"masukan panjang       = "; 
		cin>>p;
        cout<<"masukan lebar         = "; 
		cin>>l;
        L=p*l;
        cout<<"luas persegi panjang  = "<<L<<endl;

		break;
		
	case 2: 
		cout << "MENGHITUNG LUAS SEGITIGA \n\n " ;
		cout << "Masukkan panjang alas segitiga : " ; 
		cin >> a;
		cout << "Masukkan tinggi segitiga : " ; 
		cin >> t;
		L = a*t/2;
		cout << "Luasnya adalah : " << L <<endl;
		break;
		
	case 3:
		cout << "MENGHITUNG LUAS LINGKARAN \n\n " ;
		cout << "Masukkan panjang jari jari lingkaran : " ; 
		cin >> r;
		L = 3.14 * r * r;
		cout << "Luasnya adalah : " << L <<endl;
		break;
	
	case 4:
		cout<<"perhitungan volume kubus"<<endl;
		cout<<"panjang rusuk kubus = ";
		cin>>a;
		V = a*a*a;
		cout<<"volume kubus = "<<V<<endl;
		break;
		
	case 5:
		cout<<"perhitungan volume tabung "<<endl<<"\n";
		cout<<"masukkan panjang jari-jari alas tabung = ";
		cin>>r;
		cout<<"masukkan tinggi tabung = ";
		cin>>t;
		V = phi*r*r*t;
		cout<<"volume tabung adalah = "<<V<<endl<<"\n";
		break;
		
	case 6:
		cout<<"perhitungan volume kerucut "<<endl<<"\n";
		cout<<"masukkan panjang jari-jari kerucut = ";
		cin>>r;
		cout<<"masukkan tinggi kerucut = ";
		cin>>t;
		V=(phi*r*r*t)/3;
		cout<<"volume kerucut adalah = "<<V<<endl<<"\n";
		break;
		
		default :
			
			cout << "Pilihan anda tidak ada di sistem"<<endl;
			
		}
		
		
		cout << "\nKembali ke menu utama ? (y/n) ";
		cin >>  ulang; // untuk kembali ke dalam blok do-while
		
}
		while (ulang == 'y' || ulang == 'Y' );
	

		
			
}
