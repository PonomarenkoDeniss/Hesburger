#include <iostream>
#include "include\Admin.h"
#include "include\Guest.h"
#include "USER.H"

using namespace std;

int main(){
    int izvele;

    cout<<""<<endl;
    cout<<"Izveleties:"<<endl;
    cout<<"1-USER"<<endl;
    cout<<"2-ADMIN"<<endl;
    cout<<""<<endl;


    USER * gold;
    Admin * keks;

    cin>>izvele;

    switch(izvele){

        case 1:gold->MenuUser();
        break;

        case 2:keks->MainMenu();
        break;

    }
return 0;
}
