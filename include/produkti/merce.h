#ifndef MERCE_H
#define MERCE_H

#include <produktii.h>


class merce : public produktii
{
    public:
        merce();
        virtual ~merce();

        void sous();
        void nopirktMerce();

    protected:

    private:
};

#endif // MERCE_H
