#include <string>
#include "Moveable.h"
#include "Resizeable.h"
using namespace std;
class Vehicle:Moveable, Resizeable {
    private:
        string name;
    public:
        Vehicle(string);
        virtual void move();
        void setName(string);
        string getName();
        void setName(string);
};