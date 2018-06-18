#include "dzeriens.h"
#include "produktii.h"
#include "Lietotajs.h"
dzeriens::dzeriens()
{
    //ctor
}

dzeriens::~dzeriens()
{
    //dtor
}

void dzeriens::dzerienss(){
        int izvele;
        string nosaukums;

        nosaukums="dzeriens.txt";
        Lietotajs* arg=new Lietotajs;
        arg ->izvade(nosaukums);


    cout<<""<<endl;
    cout<<"1-Dzest:"<<endl;
    cout<<"2-Pievienot:"<<endl;
    cout<<"3-BACK"<<endl;
    cout<<""<<endl;

    cin>>izvele;

    switch(izvele){
        case 1:{
            string nosaukums,nosaukumss;
            nosaukums="dzeriens.txt";
            nosaukumss="temp.txt";
            produktii *a=new produktii;
            a->dzesana(nosaukums,nosaukumss);
        break;}



        case 2:{
            string nosaukums,temp;
            nosaukums="dzeriens.txt";
            temp="dzeriens";
            produktii * arg = new produktii;
            arg->pievienosana(nosaukums,temp);
        }
    }


}


void dzeriens:: NopirktDzer(){
    string nosaukums;
    nosaukums="dzeriens.txt";
    produktii * kek = new produktii;
    kek->Nopirkt(nosaukums);
}
