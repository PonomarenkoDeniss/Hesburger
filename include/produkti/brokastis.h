#ifndef BROKASTIS_H
#define BROKASTIS_H

#include <produktii.h>


class brokastis : public produktii
{
    public:
        brokastis();
        virtual ~brokastis();

        void brokastinsShow();
        void nopirktBrokast();

    protected:

    private:
};

#endif // BROKASTIS_H
