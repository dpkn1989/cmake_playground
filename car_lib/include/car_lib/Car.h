#include <iostream>

class Car{
    std::string m_oem;
    std::string m_color;
    float m_fuel;
    int m_speed;

public:
    Car();

    Car(std::string oem, std::string color, float fuel);

    virtual void accelerate(void);

    virtual void brake(void);

    void displayStatus(void);
};