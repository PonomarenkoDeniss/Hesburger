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
    cout<<"2-Labot:"<<endl;
    cout<<"3-Pievienot:"<<endl;
    cout<<"4-BACK"<<endl;
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



        case 3:{
            string nosaukums,temp;
            nosaukums="dzeriens.txt";
            temp="dzeriens";
            produktii * arg = new produktii;
            arg->pievienosana(nosaukums,temp);
        }
    }


}
