#include "Ksztalt.h"

class Trojkat: public Ksztalt{
    public:
        Trojkat() = default;
        Trojkat(int a, int b, int c);
        void wypisz(std::ostream& s) const;
        double polePow() const;
        ~Trojkat() = default;
    private:
    int _a,_b,_c;
};