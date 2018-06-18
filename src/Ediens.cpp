#include "Ediens.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
Ediens::Ediens()
{
    //ctor
}

Ediens::~Ediens()
{
    //dtor
}

void Ediens::pievienosana(string nosaukums){
string s;
string cena;
            cout<<"Ievadiet"<<nosaukums<<"  piedavajumus"<<endl;
            fflush(stdin);
            getline(cin,nosaukums);

            cout<<"Ievadiet cenu"<<endl;
            getline(cin,cena);
            int Nr=1;
            int number_line=1;

            ifstream file(string(string(nosaukums)).c_str());
                while(getline(file,s)){
                    number_line++;
                }
            file.close();
            Nr=number_line;

            fstream fout((string(string(nosaukums)).c_str()));
            fout<<Nr<<".| "<<nosaukums<<" | "<<cena<<endl;
file.close();
}



