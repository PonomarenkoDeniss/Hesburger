#include "tortila.h"
#include "Lietotajs.h"


tortila::tortila()
{
    //ctor
}

tortila::~tortila()
{
    //dtor
}
void tortila::tortilija(){

    int izvele;
    string nosaukums;

    nosaukums="tortilas.txt";
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
            nosaukums="tortilas.txt";
            nosaukumss="temp.txt";
            dzesana(nosaukums,nosaukumss);
        break;}

        case 2:{
            string nosaukums,temp;
            nosaukums="tortilas.txt";
            temp="tartilija";
            produktii * arg = new produktii;
            arg->pievienosana(nosaukums,temp);
        }
    }
}

void tortila::nopitkrTort(){
    string nosaukums;
    nosaukums="tortilas.txt";
    produktii * kek = new produktii;
    kek->Nopirkt(nosaukums);
}
