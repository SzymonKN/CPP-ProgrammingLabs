#include "Ksztalt.h"

class Kwadrat: public Ksztalt{
    public:
        Kwadrat() = default;
        Kwadrat(int a);
        void wypisz(std::ostream& s) const;
        double polePow() const;
        ~Kwadrat() = default;
    private:
    int _a;
};