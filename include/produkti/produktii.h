#ifndef PRODUKTII_H
#define PRODUKTII_H
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;
class produktii
{
    public:
        produktii();
        virtual ~produktii();

        virtual void burgersShot();
        virtual void tortilija();
        virtual void dzerienss();
        virtual void kartowka();
        virtual void brokastinsShow();
        virtual void salat();
        virtual void sous();
        virtual void saldejums();

        virtual void nopirktBrokast();
        virtual void nopirktBurg();
        virtual void nopitkrTort();
        virtual void NopirktDzer();
        virtual void NopirktKart();
        virtual void nopirktMerce();
        virtual void nopirktSalats();
        virtual void nopirktDes();



        void dzesana(string ,string);
        void pievienosana(string ,string );
        void Nopirkt(string);

    protected:

    private:
};
#endif // PRODUKTII_H
