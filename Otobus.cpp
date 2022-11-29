#include "Otobus.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

    Otobus::Otobus(string p, string m, int b)
    {
        plaka=p;
        markaModel=m;
        biletUcreti=b;
        for (int i=0; i<30; i++)
        {
            this->koltuk[i]=0;

        }
    }
    int Otobus::getBosKoltukSayisi() const
    {
        int boskoltuk=0;;
        for (int i=0; i<30; i++)
        {
            if( this->koltuk[i]==0)
                boskoltuk++;

        }
        return boskoltuk;


    }
    Otobus Otobus::dahabos(Otobus b)
    {
       if( this->getBosKoltukSayisi() > b.getBosKoltukSayisi() )
            return *this;
        else if ( this->getBosKoltukSayisi() < b.getBosKoltukSayisi() )
            return b;
        else
            return b;


    }
    bool Otobus::operator==(const Otobus& b) const
    {
       int bilet_satis1 = ( 30 - this->getBosKoltukSayisi() )*this->biletUcreti;
       int bilet_satis2 = ( 30 - b.getBosKoltukSayisi() ) *b.biletUcreti;

        if(bilet_satis1 == bilet_satis2)
            return true;
        else
            return false;

    }
    void Otobus::setYolcu(int sayi)
    {

     if(getBosKoltukSayisi()< sayi)
     {

        for(int i=0; i<30; i++)
        {
            if(this->koltuk[i] == 0 && sayi > 0)
            {
                koltuk[i] = 1;
                sayi--;
            }
        }
    }

    }
    int Otobus::ilkBosKoltuk()
    {
        int ilkboskoltuk=0;


            for (int i=0; i<30; i++)
            {
                if( this->koltuk[i]==0)
                ilkboskoltuk=i+1;
                break;

            }

        return ilkboskoltuk;

    }
    ostream& operator<<(ostream& out, const Otobus& o)
    {

        out << o.plaka
        <<", "
        << o.markaModel<<endl;
        out<<"Koltuklar:"<<endl;
        for ( int i=0; i<13; i++)
        {

            out<< o.koltuk[i]*o.biletUcreti<<"|";
        }

        out<<endl;

        for( int i=13; i<30; i++)
        {

            out<< o.koltuk[i]*o.biletUcreti<<"|";
        }

    return out;

    }
