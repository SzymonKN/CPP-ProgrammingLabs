#include "Ksztalt.h"

class Kolo: public Ksztalt{
    public:
        Kolo() = default;
        Kolo(int r);
        void wypisz(std::ostream& s) const;
        double polePow() const;
        ~Kolo() = default;
    private:
    int _r;
};