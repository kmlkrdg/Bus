#ifndef OTOBUS_H
#define OTOBUS_H

#include <iostream>
#include <string>
using namespace std;

class Otobus
{
    private:
        string plaka;
        string markaModel;
        int biletUcreti;
        int koltuk[30];

    public:
        Otobus(string p="", string m="", int b=0);
        int getBosKoltukSayisi() const;
        Otobus dahabos(Otobus b);
        bool operator==(const Otobus& b) const;
        void setYolcu(int sayi);
        int ilkBosKoltuk();
        friend ostream& operator<<(ostream& out, const Otobus& o);
};

#endif // OTOBUS_H

