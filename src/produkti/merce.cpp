#include "merce.h"
#include "Lietotajs.h"
#include "produktii.h"
merce::merce()
{
    //ctor
}

merce::~merce()
{
    //dtor
}

void merce::sous(){
    int izvele;
    string nosaukums;

    nosaukums="merce.txt";
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
            nosaukums="merce.txt";
            nosaukumss="temp.txt";
            dzesana(nosaukums,nosaukumss);
        break;}

        case 3:{
            string nosaukums,temp;
            nosaukums="merce.txt";
            temp="merce";
            produktii * arg = new produktii;
            arg->pievienosana(nosaukums,temp);
        break;}
    }

}
