#include "Guest.h"
#include "Admin.h"
#include <iostream>

#include "Admin.h"

using namespace std;

Guest::Guest()
{
    //ctor
}

Guest::~Guest()
{
    //dtor
}


void Guest::darbs(){

    cout<<" VAI TU MEKLE DARBAVIETU AR ELASTIGU DARBA LAIKU? "<<endl;
    cout<<" AUGSTU VERTE DARBU JAUNIESU KOMANDA?             "<<endl;
    cout<<" VELIES STRADAT UZTICAMA GIMENES UZNEMUMA         "<<endl;
    cout<<" UN SANEMT VISAS SOCIALAS GARANTIJAS?             "<<endl;
    cout<<"  ESI AKTIVS, UZNEMIGS UN GATAVS APKALPOT KLIENTUS?"<<endl;
    cout<<" "<<endl;

    cout<<" PIEVIENOJIES HESBURGER KOLEKTIVAM!"<<endl;
    cout<<" Aicinam sava komanda energiskus,"<<endl;
    cout<<" draudzigus un atbildigus klientu apkalpotajus,"<<endl;
    cout<<" sakot no 18 gadu vecuma."<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;


}

void Guest::bonusklubs(){//DONE
    int bkartesNum;
    int atsauksmee;

    cout<<""<<endl;
    cout<<"BONUSKLUBA ATSAUKSME"<<endl;
    cout<<"Nolietotu, bojātu vai nozaudētu Bonuskarti variet aizstāt ar jaunu,"<<endl;
    cout<<"to pasūtot no jauna."<<endl;
    cout<<""<<endl;
    cout<<"Boneskartes numurs:"<<endl;
    cin>>bkartesNum;
    cout<<""<<endl;
    cout<<"Atsauksme:"<<endl;
    cin>>atsauksmee;


}

void Guest::restorans(){//DONE

int atsauksmee;
int izvele;
double datums;
int Ceka_numurs;

    cout<<""<<endl;
    cout<<"ATSAUKSME PAR RESTORANU"<<endl;
    cout<<"Atsauksmes tips:"<<endl;
    cout<<"1-Pozitiva"<<endl;
    cout<<"2-Negativa"<<endl;
    cout<<"3-Ieteikums"<<endl;

    cin>>izvele;

    cout<<"Biju restarana.Datums:(DD/MM/YY) "<<endl;
    cin>>datums;

    cout<<"Ceka numurs:"<<endl;
    cin>>Ceka_numurs;

    cout<<"Atsauksme:"<<endl;
    cin>>atsauksmee;

}

void Guest::cits(){

    string atsauksmee;
    int izvele;
    cout<<""<<endl;
    cout<<"VISPAREJA SATURA ATSAUKSME"<<endl;
    cout<<"Mana atsauksme ir:"<<endl;
    cout<<"1-Pozitiva"<<endl;
    cout<<"2-Negativa"<<endl;
    cout<<"3-Ieteikums"<<endl;
    cin>>izvele;
    cout<<""<<endl;
    cout<<"Atsauksme:"<<endl;
    cin>>atsauksmee;






}

void Guest::atsauksme(){//DONE

    int izvele;
    cout<<"ATSAUKSME PAR RESTORÂNU"<<endl;
    cout<<"Atsauksmes tips:"<<endl;
    cout<<"1-BonusCLUB"<<endl;
    cout<<"2-Restorans"<<endl;
    cout<<"3-Cits"<<endl;

    cin>>izvele;

    switch(izvele){
        case 1:{this->bonusklubs();
        break;}

        case 2:{this->restorans();
        break;}

        case 3:{this->cits();
        break;}
    }




}

void Guest::jautajumi(){//DONE
cout<<"Vai Hesburger restorana Tev bija draudziga apkalposana?"<<endl;
cout<<"Vai pamaniji ko tadu, kam nepieciesami uzlabojumi?"<<endl;
cout<<"Vai Tev ir ieteikumi produktu sortimenta papildinasanai?"<<endl;
cout<<""<<endl;

cout<<"Pastasti mums par savu pieredzi un idejam."<<endl;
cout<<"Tas palidzes uzlabot un attistit musu darbibu,"<<endl;
cout<<"lai Tu nakotne sanemtu labaku apkalposanu."<<endl;
cout<<""<<endl;

cout<<"Lai Tavas atsauksmes mes saòemtu pec iespejas atrak,"<<endl;
cout<<"vispirms izvelies atsauksmes temu"<<endl;
cout<<"Ja atsauksme but attiecinata uz noteiktu restoranu"<<endl;
cout<<"ta tluit tiks nosutita konkretajam restoranam."<<endl;
cout<<""<<endl;

cout<<"Savu atsauksmi vari iesniegt arî anonîmi."<<endl;
cout<<"Gaidîsim Tavas atsauksmes!"<<endl;
cout<<" "<<endl;

cout<<"NO KURIENES TIEK IEGÛTAS HESBURGER LIELLOPU GALAS KOTLETES?"<<endl;
cout<<" Hesburger izmanto 100% liellopu galas burgeru kotletes."<<endl;
cout<<"Tas tiek gatavotas no izmekletas, augstas kvalitâtes liellopu gaïas izlases."<<endl;
cout<<"Kotletes Baltijas tirgum tiek razotas Biovela uznemuma Lietuva."<<endl;
cout<<""<<endl;

cout<<"NO KA TIEK GATAVOTI HESBURGER FRI KARTUPELI?"<<endl;
cout<<"Hesburger fri kartupeli tiek gatavoti no 100% kartupeliem."<<endl;
cout<<"Lai nodrosinatu kraukskigo teksturu,"<<endl;
cout<<"musu fri kartupeliem tiek pievienotas ari citas sastavdalas"<<endl;
cout<<"Tie tiek cepti 100% rapsu ella"<<endl;
cout<<"Izpeti informaciju par musu piedavatajiem produktiem musu majas lapa."<<endl;
cout<<" "<<endl;
}

void Guest::ShowMenu(){
    int izvele;

    cout<< "    LAIMIGA KAFIJAS STUNDA"     <<endl;
    cout<< "Katru ritu no  10:00 lidz 11:00 " <<endl;
    cout<< " svaigi grauzdeta melna kafija" <<endl;
    cout<< "   vai kaija ar pienu tika par"  <<endl;
    cout<< "                       0.20"   <<endl;
    cout<<""<<endl;

    cout<<""<<endl;
    cout<<"1-Produkti"<<endl;
    cout<<"2-Restorani"<<endl;
    cout<<"3-Bonusklubs"<<endl;
    cout<<"4-Sadala Berniem"<<endl;
    cout<<"5-Darbs"<<endl;
    cout<<"6-Atsauksme"<<endl;
    cout<<"7-Davanu karte"<<endl;
    cin>>izvele;

    switch(izvele){

        case 1:{

        break;}

        case 4:{ this ->darbs();
        break;}

        case 6:{this->atsauksme();
        break;}

    }
}
