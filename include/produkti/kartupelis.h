#ifndef KARTUPELIS_H
#define KARTUPELIS_H

#include <produktii.h>


class kartupelis : public produktii
{
    public:
        kartupelis();
        virtual ~kartupelis();

        void kartowka();
        void nopirktKart();

    protected:

    private:
};

#endif // KARTUPELIS_H
