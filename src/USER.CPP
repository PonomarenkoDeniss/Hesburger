#include "USER.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <sstream>

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

void USER::MenuUser(){
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
            //arg->nopirktBrokast();
        break;
        }
        case 2:{
            cout<<"BURGERI:"<<endl;
            //b=new burgerss;
           // b->nopirktBurg();
            break;
        }

        case 3:{
            string nosaukums;
            nosaukums="tortilas.txt";
           // Nopirkt(nosaukums);
            break;
        }

        case 4:{
            string nosaukums;
            nosaukums="dzeriens.txt";
            //Nopirkt(nosaukums);
            break;
        }

        case 5:{
            string nosaukums;
            nosaukums="kartupelis.txt";
           // Nopirkt(nosaukums);
            break;
        }

        case 6:{
            string nosaukums;
            nosaukums="merce.txt";
            //Nopirkt(nosaukums);
            break;
        }

        case 7:{
            string nosaukums;
            nosaukums="salats.txt";
           // Nopirkt(nosaukums);
            break;
        }

        case 8:{
            string nosaukums;
            nosaukums="deserts.txt";
            //Nopirkt(nosaukums);
            break;
        }

    }
    }while(izvele!=9);
}







