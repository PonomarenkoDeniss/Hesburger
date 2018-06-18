#include "produktii.h"
#include "Lietotajs.h"
#include <Lietotajs.h>



#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <sstream>

produktii::produktii()
{
    //ctor
}

produktii::~produktii()
{
    //dtor
}


void produktii::pievienosana(string nosaukums,string temp){
    string s;
    string cena;

    cout<<"Ievadiet "<<temp<<endl;
    fflush(stdin);
    getline(cin,temp);

    cout<<"Ievadiet cenu"<<endl;
    fflush(stdin);
    getline(cin,cena);
    int Nr=1;
    int number_line=1;

    ifstream file(string(string(nosaukums)).c_str());
        while(getline(file,s)){
            number_line++;
        }
        file.close();

    ofstream fout((string(string(nosaukums)).c_str()),ios::app);
        fout<<""<<temp<<" | "<<cena<<endl;
        file.close();
}

void produktii::dzesana(string nosaukums,string nosaukumss){
    int i_number_line_now;
    string s;

    ifstream file(string(string(nosaukums)).c_str());
        cout<<"Ievadi rindu :"<<endl;
        int number_line_editing;
        cin>>number_line_editing;
        i_number_line_now=0;
    ofstream output((string(string(nosaukumss)).c_str()));
        while(getline(file,s )){
            i_number_line_now++;
            if(i_number_line_now!=number_line_editing){
                output<<s<<endl;
            }
        }
    file.close();
    output.close();
        ifstream gg(string(string(nosaukumss)).c_str());
            ofstream filee((string(string(nosaukums)).c_str()));
                while (getline(gg,s)){
                    filee<<s<<endl;
                }
    gg.close();
    filee.close();
}

void produktii::Nopirkt(string nosaukums){


    int izvele;
    cout<<"Gribi nopirkt ? 1-Ja 0-Ne:";
    cin>>izvele;
    if(izvele){

        Lietotajs * la ;
        la->izvade(nosaukums);

        ifstream brokastiss(string(string(nosaukums)).c_str());
        int line_number_now;
        int line_number_chose;

        cout<<"izveles produktu:";
        cin>>line_number_chose;

        fflush(stdin);

        line_number_now=0;
        string nauda;
        string line;
        while(getline(brokastiss,line)){
            line_number_now++;
            if (line_number_now==line_number_chose){
                getline(brokastiss,nosaukums,'|');
                getline(brokastiss,nauda);

                double out;
                stringstream st;
                st << nauda;
                st >> out;

                double nauda_nauda;
                nauda_nauda=out;
                cout<<nauda_nauda<<endl;

                string konta_numurs;
                string nauda_konta;
                string nosaukums;

                nosaukums="Konts.txt";
                ifstream konts(string(string(nosaukums)).c_str());

                string s;

                ofstream output("tempfile.txt");
                    while (!konts.eof()){
                            getline(konts,konta_numurs,',');
                            getline (konts, nauda_konta);

                                int outt;
                                stringstream stt;
                                stt << nauda_konta;
                                stt >> outt;

                                cout<<outt;

                                if(outt>nauda_nauda){
                                    double  summa;
                                    summa=outt-nauda_nauda;
                                    cout<<konta_numurs<<endl;
                                    cout<<"Viss ir apmaksats no jusu konta"<<endl;
                                    output<<konta_numurs<<","<<summa;
                                }
                                        else{
                                                cout<<""<<endl;
                                                cout<<"Nepietiek lidzekljus"<<endl;
                                                cout<<"Pievienojiet karti!"<<endl;
                                                cout<<""<<endl;
                                                //system("pause");
                                            break;
                                            }
                            }

                konts.close();
                output.close();
                remove(nosaukums.c_str());
                remove(nosaukums.c_str());
                rename("tempfile.txt",nosaukums.c_str());
                }
        }



    }

}




void produktii::brokastinsShow(){
}

void produktii::burgersShot(){
}

void produktii::tortilija(){
}

void produktii::dzerienss(){
}

void produktii::kartowka(){
}

void produktii::salat(){
}

void produktii::sous(){
}

void produktii::saldejums(){
}



void produktii::nopirktBrokast(){
}

void produktii::nopirktBurg(){
}

void produktii::nopitkrTort(){
}

void produktii::NopirktDzer(){
}

void produktii::NopirktKart(){
}
void produktii::nopirktMerce(){
}
void produktii::nopirktSalats(){
}
void produktii::nopirktDes(){
}
