#include <string>
#include "Vehicle.h"
using namespace std;
final class Car: public Vehicle {
    private:
        int seats;
    public:
        Car();
        Car(int, string);
        void setSeats(int);
        int getSeats();
        void forward();
        void backward();
        void move();
};