#ifndef BURGERSS_H
#define BURGERSS_H

#include <produktii.h>

#include <iostream>



class burgerss : public produktii
{
    public:
        burgerss();
        virtual ~burgerss();

        void burgersShot();
        void nopirktBurg();


    protected:

    private:
};
#endif // BURGERSS_H
