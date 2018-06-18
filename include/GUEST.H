#ifndef GUEST_H
#define GUEST_H
#include <string>
#include <iostream>

using namespace std;

class Guest{
    public:
        Guest();
        virtual ~Guest();

        void ShowMenu();
        void jautajumi();
        void atsauksme();

        void bonusklubs();
        void restorans();
        void cits();

        void darbs();


    protected:

    private:


};

#endif // GUEST_H
