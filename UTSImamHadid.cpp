#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <dos.h>
#include <conio.h>



#define huruf 200
using namespace std;

struct stack {
    int input;
    char data [huruf], dta[huruf];
}Tumpukan;

/*--Class inisialisasi--*/
void init(){
	Tumpukan.input = -1;
}

/*Class untuk mengisi stack (menyiapkan data) sekaligus membuat tanggapan apabila kondisi data penuh*/
bool datapenuh() {
    if (Tumpukan.input == huruf-1)return true;
       else return false;
}
void push(char dta) {
    if (datapenuh() == false)
    {
        Tumpukan.input++;
           Tumpukan.data[Tumpukan.input]=dta;
    }
    else {
        puts("\nMaaf data penuh");
    }
}
/*Memberikan tampilan notif data telah tersimpan setelah memasukan data*/
void print() {
    cout
      <<" ";
    for(int i=0; i<=Tumpukan.input; i++) {
        cout
         <<Tumpukan.data[i];
   }
}
/*untuk menampilkan stack secara terbalik sekaligus memberikan tanggapan apabila kondisi data kosong*/
bool datakosong() {
    if (Tumpukan.input == -1) return true;
       else return false;
}
void printStack() {
	if (datakosong()) {
		cout
         << "Data kosong";
	}
	else {
    cout
      << "\nData Tersimpan\n"
      << "Secara Terbalik : ";
		for (int i = Tumpukan.input; i >= 0; i--)
			cout
            << Tumpukan.data[i] << ((i == 0) ? " " : ",");
    cout
      <<"\nSecara Urutan : ";
    for(int i=0; i<=Tumpukan.input; i++) {
        cout
         <<Tumpukan.data[i] << ((i == -1) ? " " : ",");
	   }
   }
}

/*--Class untuk mengambil isi tumpukan--*/
void pop() {
    while (datakosong() == false) {
        cout
         <<Tumpukan.data[Tumpukan.input];
           Tumpukan.input--;
    }
}

/*--Main Program--*/



int main() {

    static
    char string[200];
    int menu;
    int color;
    char isi;

    SetConsoleTitleA("Program Stack [Push & Pop] ");
   
     system("color 0a");
      cout
         <<"\n\n\n\t\t\t\tPlease Wait... Runing Machine\n\n";
      char a=177, b=219;
      cout<<"\t\t\t\t";
      for (int i=0;i<=30;i++)
      cout
         <<a
         <<"\r"
         <<"\t\t\t\t";
      for (int i=0;i<=30;i++) {
      cout<<b;
      for (int j=0;j<=1e8;j++); 
      }

      cout
         <<"\n\n\n\t\t\t\t\n\n";
      system ("pause");
      system("clear"); 



      init();
      do {
            cout
               <<"----------------------------------\n"
               <<"1 - Push data [memasukan data] \n"
               <<"2 - Pop data [keluarkan data] \n"
               <<"3 - Tampilkan data \n"
               <<"4 - Config tema\n"
               <<"5 - Created\n"
               <<"6 - Bersihkan Program\n"
               <<"0 - Akhiri Program\n"
               <<"----------------------------------\n"
               <<"Silahkan Pilih Menu\n"
               <<"----------------------------------\n";

         cin>>menu;

         if (menu==1) {

            cout
               <<"----------------------------------\n"
               <<"Silahkan Masukan kata : \n";

                  cin>>string;
            system("clear"); 
            for(int i=0;string[i]; i++)
               push(string[i]);
                  cout
                     <<"----------------------------------\n";
               print();
                  cout
                     <<" Data Berhasil Disimpan\n";
         


         }

         else if (menu==2) {
            system("clear"); 
               cout
                     <<"----------------------------------\n";
            print();
               cout
                  <<" menjadi ";
            pop();
               cout
                  <<"\n";

         }

         else if (menu==3){
            system("clear"); 
            printStack();
               cout
                  <<"\n";
         }

         else if (menu==4) {
            system("clear"); 
            cout
               <<"----------------------------------\n"
               <<"Pilih Tema : \n"
               <<"1. Merah\n"
               <<"2. Putih\n"
               <<"3. Hijau\n"
               <<"4. Biru\n"
               <<"masukan angka\n";
               cin>>color;
                  if (color==1){
                     system("Color 04");

                  }
                  else if (color==2){
                     system("Color 07");

                  }
                  else if (color==3){
                     system("Color 02");

                  }
                  else if (color==4){
                     system("Color 01");

                  }
                  else{
                     cout
                        <<"----------------------------------\n"
                        <<"tema tidak tersedia";
                  }
                  

         }


         else if (menu==0) {
            system("clear"); 
            cout
               <<"----------------------------------\n"
               <<"Terima kasih telah menggunakan program ini";
            exit(0);

         }

         else if (menu==5) {
            system("clear"); 
            cout
               <<"----------------------------------\n"
               <<"Created By. \n"
               <<"Kelas : IFB1J\n"
               <<"Fakultas Ilmu Komputer\n"
               <<"Universitas Mulia\n";

         }

         else if (menu==6) {
            
            system("clear");

         }

         else {
            system("clear"); 
            cout
               <<"----------------------------------\n"
               <<"input tidak terdaftar \n";

         }
      
      }
         
   while (menu!=0);

}