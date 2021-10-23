// Vehicle.h

#include <string>
#include "Moveable.h"
#include "Resizeable.h"
using namespace std;
class Vehicle: public Moveable, public Resizeable {
    protected:
        string name;
    public:
        Vehicle(string);
        virtual void move() = 0;
        void setName(string);
        string getName();
};