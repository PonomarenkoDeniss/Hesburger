#include "deserts.h"
#include "Lietotajs.h"

deserts::deserts()
{
    //ctor
}

deserts::~deserts()
{
    //dtor
}

void deserts::saldejums(){
    int izvele;
    string nosaukums;

    nosaukums="deserts.txt";
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
            nosaukums="deserts.txt";
            nosaukumss="temp.txt";
            produktii *a=new produktii;
            a->dzesana(nosaukums,nosaukumss);
            break;
        }
        case 2:{
            string nosaukums,temp;
            nosaukums="deserts.txt";
            temp="desert";
            produktii * arg = new produktii;
            arg->pievienosana(nosaukums,temp);
            break;
        }
    }
}

void deserts::nopirktDes(){
    string nosaukums;
    nosaukums="deserts.txt";
    produktii * kek = new produktii;
    kek->Nopirkt(nosaukums);
}
