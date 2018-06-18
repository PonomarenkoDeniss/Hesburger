#include "brokastis.h"
#include "Lietotajs.h"
#include "USER.H"

brokastis::brokastis()
{

}

brokastis::~brokastis()
{
    //dtor
}

void brokastis::brokastinsShow(){
    int izvele;

    string nosaukums;
    nosaukums="brokastiss.txt";
    cout<<" "<<endl;
    Lietotajs *a=new Lietotajs;
    a->izvade(nosaukums);

    cout<<""<<endl;
    cout<<"1-Dzest:"<<endl;
    cout<<"2-Pievienot:"<<endl;
    cout<<"3-BACK"<<endl;
    cout<<""<<endl;

    cin>>izvele;

    switch(izvele){
        case 1:{
            string nosaukums,nosaukumss;
            nosaukums="brokastiss.txt";
            nosaukumss="temp.txt";
            produktii *a=new produktii;
            a->dzesana(nosaukums,nosaukumss);
        break;}

        case 2:{
                string nosaukums,temp;
                nosaukums="brokastiss.txt";
                temp="brokastis";
                produktii * arg = new produktii;
                arg->pievienosana(nosaukums,temp);
        break;}
    }
}

void brokastis::nopirktBrokast(){
    string nosaukums;
    nosaukums="brokastiss.txt";
    produktii * kek = new produktii;
    kek->Nopirkt(nosaukums);
}
