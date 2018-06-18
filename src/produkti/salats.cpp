#include "salats.h"
#include "Lietotajs.h"
#include <iostream>
salats::salats()
{
    //ctor
}

salats::~salats()
{
    //dtor
}
void salats::salat(){

    int izvele;
    string nosaukums;

    nosaukums="salats.txt";
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
            nosaukums="salats.txt";
            nosaukumss="temp.txt";
            dzesana(nosaukums,nosaukumss);
        break;}
        case 3:{
            string nosaukums,temp;
            nosaukums="salats.txt";
            temp="salats";
            produktii * arg = new produktii;
            arg->pievienosana(nosaukums,temp);
        break;}
    }



}
