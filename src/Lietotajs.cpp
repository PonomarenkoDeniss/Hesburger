#include "Lietotajs.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <sstream>

#include "Admin.h"
#include "USER.H"

using namespace std;

Lietotajs::Lietotajs()
{
    //ctor
}

Lietotajs::~Lietotajs(){
    //dtor
}

void Lietotajs::izvade(string nosaukums){
string s;
int i=0;
ifstream file(string(string(nosaukums)).c_str());
    while(getline(file,s)){
        i++;
        cout<<i<<"|"<<s<<endl;
    }
file.close();
}
