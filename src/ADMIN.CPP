#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>

#include "Lietotajs.h"
#include "Admin.h"
#include "produktii.h"

#include "tortila.h"
#include "brokastis.h"
#include "burgerss.h"
#include "kartupelis.h"
#include "salats.h"
#include "merce.h"
#include "dzeriens.h"
#include "deserts.h"


using namespace std;
Admin::Admin()
{
    //ctor
}

Admin::~Admin()
{
    //dtor
}

void Admin::dzesana(string nosaukums,string nosaukumss){
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

void Admin::pievenot_rest(string nosaukums){
    string s,pilseta,iela;
    cout<<"Ievadiet pilsetu"<<endl;
    fflush(stdin);
    getline(cin,pilseta);

    fflush(stdin);
    cout<<"Ievadiet ielu "<<endl;
    getline(cin,iela);

    ofstream fout((string(string(nosaukums)).c_str()),ios::app);
    fout<<"| "<<pilseta<<" | "<<iela<<" | "<<endl;
    fout.close();
}

void Admin::MainMenu(){

    int izvele;
    int pass;

    cin>>pass;
    if (pass==445){
    do{
        system("CLS");
        cout<<" "<<endl;
        cout<<"MENU"<<endl;
        cout<<"1-PRODUCTS"<<endl;
        cout<<"2-SHOW Restaurants"<<endl;
        cout<<"3-EXIT"<<endl;
        cout<<""<<endl;
        cin>>izvele;

        switch(izvele){
            case 1:{
                this ->products();
                break;
            }

            case 2:{
                this ->show_restaurants();
                break;
            }
        }
    }while(izvele!=3);
    }
}

void Admin::products(){//DONE

    int izvele;
    do{
        system("CLS");
        cout<<"PRODUCT MENU:"<<endl;
        cout<<"1-BROKASTIS"<<endl;
        cout<<"2-BURGERI"<<endl;
        cout<<"3-TORTILAS"<<endl;
        cout<<"4-DZERIENI"<<endl;
        cout<<"5-KARTUPELI FRI"<<endl;
        cout<<"6-MERCES UN MAJONEZES"<<endl;
        cout<<"7-SALATI"<<endl;
        cout<<"8-DESERTI"<<endl;
        cout<<"9-BACK"<<endl;

        cin>>izvele;

        produktii * arg ;

    switch(izvele){
            case 1:{//BROKASTIs
                system("CLS");
                cout<<"BROKASTIS:"<<endl;
                arg = new brokastis;
                arg->brokastinsShow();
           break;}

            case 2:{//BURGERI
                system("CLS");
                arg = new burgerss;
                arg->burgersShot();
            break;}

            case 3:{//TORTILAS
                system("CLS");
                produktii*arg = new tortila;
                arg ->tortilija();
            break;}

            case 4:{//DZERIENS
                system("CLS");
                arg = new dzeriens;
                arg->dzerienss();
            break;}

            case 5:{//KARTUPELI FRI
                system("CLS");
                arg = new kartupelis;
                arg ->kartowka();
            break;}

            case 6:{//MERCES UN MAJONEZES
                system("CLS");
                arg = new merce;
                arg->sous();
           break; }

            case 7:{//SALATI
                system("CLS");
                arg = new salats;
                arg->salat();
            break;}

            case 8:{//DESERTI
                system("CLS");
                arg = new deserts;
                arg->saldejums();
            break;}
       }
        }while(izvele!=9);


}

void Admin::show_restaurants(){
    system("CLS");
    cout<<"RESTARANU SARAKSTS:"<<endl;
    string adrese;
    adrese="adrese.txt";
    cout<<" "<<endl;
    Lietotajs::izvade(adrese);

    int izvele;

    cout<<""<<endl;
    cout<<"1-Dzest:"<<endl;
    cout<<"2-Pievienot:"<<endl;
    cout<<"3-BACK"<<endl;
    cout<<""<<endl;
    cin>>izvele;

    switch (izvele){

        case 1:{
            string nosaukums,nosaukumss;
            nosaukums="adrese.txt";
            nosaukumss="temp.txt";
            dzesana(nosaukums,nosaukumss);
            break;
        }

        case 2:{
            string nosaukums;
            nosaukums="adrese.txt";
            pievenot_rest(nosaukums);
            break;
        }
    }

}
