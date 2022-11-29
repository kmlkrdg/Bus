
#include <iostream>
using namespace std;
#include "Otobus.h"
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Otobus a("06J346", "Mercedes Travego", 25);
    Otobus b("67J879", "MAN Neoplan", 50), c;
    a.setYolcu(6); //06J346’ya 6 kisi ata
    b.setYolcu(3); //67J879’a 3 kisi ata
    cout<<a; //06J346’nin bilgilerini yazdir
    cout<<endl;
    cout << "06J346’daki bos koltuk sayisi: ";
    a.getBosKoltukSayisi();
    //06J346’daki ilk bos koltuk numarasi hangisi?
    cout<<endl;
    cout << "06J346’daki ilk bos koltuk" << endl;
    a.ilkBosKoltuk();
    //06J346 ile 67J879 birbirine esit mi?
    if (a==b)
        cout << " 06J346 ile 67J879 birbirine esit " << endl;
    else
        cout << " 06J346 ile 67J879 farkli " << endl;
    c = a.dahabos(b);
    // 06J346 ile 67J879 daha bos olani c ye aktar
    cout << "Daha bos olan:" << endl;
    cout<<c; //c’nin bilgilerini yazdır

    return 0;
}
