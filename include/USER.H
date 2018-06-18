#ifndef USER_H
#define USER_H
#include <string>

#include <Lietotajs.h>
using namespace std;

class USER : public Lietotajs
{
    public:
        USER();
        virtual ~USER();

        void Nopirkt();

        void konts(string);
        void Menu();



    protected:

    private:
};

#endif // USER_H
