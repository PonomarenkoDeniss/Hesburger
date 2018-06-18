#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
using namespace std;
#include "Lietotajs.h"

class Admin : public Lietotajs {
    public:
        Admin();
        virtual ~Admin();

        void pievenot_rest(string);
        void dzesana(string, string);
        void labosana(string, string);

        void restaurans();
        void products();
        void show_restaurants();
        void MainMenu();

    protected:

    private:
};

#endif // ADMIN_H
