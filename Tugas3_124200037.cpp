#include <iostream>
#include <string>
using namespace std ;
int main ()
{
		string nama, pass;
		double a, b, c ;
	 	int kalku, algo, z ;
	cout <<"Login Akun ==============="<<endl ;
	cout <<"Username		:  ";
	cin >>nama ;
	cout <<"Password 		:  ";
	cin >>pass;
	cout <<"==========================="<<endl ;
	if ( nama == "augysdellea" && pass == "124200037" ){
	cout <<" Login Sukses "<<endl ;
	cout<<"/n/"<<endl ;
	cout<<"Input Nilai Mata Kuliah"<<endl ;
	cout<<"1. Algoritma dan pemprograman  "<<endl ;
	cout<<"2. Kalkulus					  "<<endl ;
	cout<<"Pilihan : " ;
	cin>>z ;
	if (z == 1){
	
	cout<<"Pilih : 1"<<endl ;
	cout<<"Nilai Harian : " ;
	cin>>a ;
	cout<<"Nilai UTS 	: " ;
	cin>>b ;
	cout<<"Nilai UAS	: " ;
	cin>>c;
	
	if ((a+b+c)/3>=80){
		cout<<"Anda Lulus Algoritma dan pemprograman dengan nilai "<<(a+b+c)/3<<endl ;
	}
	else if ((a+b+c)/3 <= b){
		cout<<"Anda Tidak Lulus Algoritma dan Pemprograman dengan nilai "<<(a+b+c)/3<<endl ;
	}}
	else if (z == 2){
		cout<<"Pilih : 2"<<endl ;
	cout<<"Nilai Harian : " ;
	cin>>a ;
	cout<<"Nilai UTS 	: " ;
	cin>>b ;
	cout<<"Nilai UAS	: " ;
	cin>>c;
	
	if ((a+b+c)/3>=80){
		cout<<"Anda Lulus Kalkulus dengan nilai "<<(a+b+c)/3<<endl ;
	}
	else if ((a+b+c)/3 <= b){
		cout<<"Anda Tidak Lulus Kalkulus dengan nilai "<<(a+b+c)/3<<endl ;
	}
	}
	
}
else if ( pass !="124200037" && nama == "augysdellea")
{
	cout <<"Password salah"<<endl ;
}
else if ( nama !="augysdellea" && pass == "124200037" )
{
	cout <<"Username salah"<<endl ;
}

else 
{
	cout <<"Username dan Password Salah"<<endl ;

}

}
