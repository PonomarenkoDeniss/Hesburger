#ifndef TORTILA_H
#define TORTILA_H

#include "produktii.h"

class tortila : public produktii
{
    public:
        tortila();
        virtual ~tortila();

        void tortilija();
        void nopitkrTort();

    protected:

    private:
};

#endif // TORTILA_H
