#include "burgerss.h"
#include <iostream>
#include "Lietotajs.h"
using namespace std;

burgerss::burgerss()
{
    //ctor
}

burgerss::~burgerss()
{
    //dtor
}
void burgerss::burgersShot(){

        int izvele;
        string nosaukums;

        nosaukums="burgers.txt";
        Lietotajs* arg;
        arg ->izvade(nosaukums);

        cout<<""<<endl;
        cout<<"1-Dzest:"<<endl;
        cout<<"2-Pievienot:"<<endl;
        cout<<"3-BACK"<<endl;
        cout<<""<<endl;

        cin>>izvele;

        switch(izvele){
            case 1:
                {
                    string nosaukums,nosaukumss;
                    nosaukums="burgers.txt";
                    nosaukumss="temp.txt";
                    dzesana(nosaukums,nosaukumss);
                    break;
                }

            case 2:{
                string nosaukums,temp;
                nosaukums="burgers.txt";
                temp="burgers";
                produktii * arg = new produktii;
                arg->pievienosana(nosaukums,temp);
                break;
            }
        }
}

void burgerss::nopirktBurg()
{
    string nosaukums;
    nosaukums="burgers.txt";
    produktii * kek = new produktii;
    kek->Nopirkt(nosaukums);

}


