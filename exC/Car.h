class Car: Vehicle {
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