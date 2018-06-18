#include "burgers.h"

burgers::burgers()
{
    //ctor
}

burgers::~burgers()
{
    //dtor
}

                            string burgers;
                            burgers="burgers.txt";
                            cout<<" "<<endl;
                            izvade(burgers);

                            cout<<""<<endl;
                            cout<<"1-Dzest:"<<endl;
                            cout<<"2-Labot:"<<endl;
                            cout<<"3-BACK"<<endl;
                            cout<<""<<endl;

                            cin>>izvele;

                            switch(izvele){
                            case 1:{
                                string nosaukums,nosaukumss;
                                nosaukums="burgers.txt";
                                nosaukumss="temp.txt";
                                dzesana(nosaukums,nosaukumss);
                            break;}


                                }
                        break;}
