#include "USER.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <sstream>
#include <cstdlib>

#include<Lietotajs.h>
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

USER::USER()
{
    //ctor
}

USER::~USER()
{
    //dtor
}

void USER::konts(string nosaukums){
    string konta_numurs;
    string nauda_konta;

    cout<<"Ievadiet jusu konta numuru:"<<endl;
    fflush(stdin);
    getline(cin,konta_numurs);

    cout<<"Ievadiet jusu konta summu:"<<endl;
    fflush(stdin);
    getline(cin,nauda_konta);

    string s;
    int Nr=1;
    int number_line=1;

    ofstream fout((string(string(nosaukums)).c_str()));
    fout<<konta_numurs<<" | "<<nauda_konta<<endl;
    fout.close();

    izvade(nosaukums);
    system("Pause");
}




void USER::Nopirkt(){
int izvele;
do{
    cout<<"PRODUCT MENU:"<<endl;
    cout<<"1-BROKASTIS (katru dienu no 8.00 lidz 12.00)"<<endl;
    cout<<"2-BURGERI"<<endl;
    cout<<"3-TORTILAS"<<endl;
    cout<<"4-DZERIENI"<<endl;
    cout<<"5-KARTUPELI FRI"<<endl;
    cout<<"6-MERCES UN MAJONEZES"<<endl;
    cout<<"7-SALATI"<<endl;
    cout<<"8-DESERTI"<<endl;
    cout<<"9-BACK"<<endl;
    cin>>izvele;

    produktii * arg;

    switch(izvele){

        case 1:{
            cout<<"BROKASTIS:"<<endl;
            arg = new brokastis;
            arg->nopirktBrokast();
            break;
        }
        case 2:{
            cout<<"BURGERI:"<<endl;
            arg=new burgerss;
            arg->nopirktBurg();
            break;
        }
        case 3:{
            cout<<"TORTILAS:"<<endl;
            arg=new tortila;
            arg->nopitkrTort();
            break;
        }
        case 4:{
            cout<<"DZERIENI:"<<endl;
            arg=new dzeriens;
            arg->NopirktDzer();
            break;
        }
        case 5:{
            cout<<"KARTUPELIS:"<<endl;
            arg=new kartupelis;
            arg->NopirktKart();
            break;
        }
        case 6:{
            cout<<"MERCES:"<<endl;
            arg=new merce;
            arg->nopirktMerce();
            break;
        }
        case 7:{
            cout<<"SALATI:"<<endl;
            arg=new salats;
            arg->nopirktSalats();
            break;
        }
        case 8:{
            cout<<"DESERTS:"<<endl;
            arg=new deserts;
            arg->nopirktDes();
            break;
        }
    }
    }while(izvele!=9);


}


void USER::Menu(){
    int izvele;

    do{
    cout<<"1-Buy product"<<endl;
    cout<<"2-Credit card"<<endl;
    cout<<"3-Back"<<endl;

    cin>>izvele;

    switch(izvele){
        case 1:{
            Nopirkt();
            break;
        }

        case 2:{
            string nosaukums="Konts.txt";
            konts(nosaukums);
            break;
        }

    }

    }while(izvele!=3);


}







