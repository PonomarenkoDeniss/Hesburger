#include "kartupelis.h"
#include "Lietotajs.h"

kartupelis::kartupelis()
{
    //ctor
}

kartupelis::~kartupelis()
{
    //dtor
}

void kartupelis::kartowka(){

    int izvele;
    string nosaukums;

    nosaukums="kartupelis.txt";
    Lietotajs* arg=new Lietotajs;
    arg ->izvade(nosaukums);


    cout<<""<<endl;
    cout<<"1-Dzest:"<<endl;
    cout<<"2-Pievienot:"<<endl;
    cout<<"4-BACK"<<endl;
    cout<<""<<endl;

    cin>>izvele;

    switch(izvele){
        case 1:{
            string nosaukums,nosaukumss;
            nosaukums="kartupelis.txt";
            nosaukumss="temp.txt";
            produktii *a=new produktii;
            a->dzesana(nosaukums,nosaukumss);
        break;}

        case 2:{
            string nosaukums,temp;
            nosaukums="kartupelis.txt";
            temp="kartupelis";
            produktii * arg = new produktii;
            arg->pievienosana(nosaukums,temp);
        break;}
    }

}

void kartupelis::nopirktKart(){
    string nosaukums;
    nosaukums="katrupelis.txt";
    produktii * kek = new produktii;
    kek->Nopirkt(nosaukums);
}
