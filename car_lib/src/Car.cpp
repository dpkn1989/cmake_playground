#include "car_lib/Car.h"

Car::Car(): Car{"FORD", "White", 100.0f} 
{
   std::cout << "Default Constructor of Car Called\n";
}

Car::Car(std::string oem, std::string color, float fuel)
        : m_oem{oem}, m_color{color}, m_fuel{fuel}, m_speed{0}{
    std::cout << "Parameterized Constructor of Car Called\n";
}

void Car::accelerate(void){
    m_speed++;
    m_fuel -= 0.5f;
}

void Car::brake(void){
    if(m_speed > 0)
        m_speed--;
}

void Car::displayStatus(void){
    std::cout << "OEM: " << m_oem << "\nColor: " << m_color
            << "\nFuel: " << m_fuel << "\nSpeed: " << m_speed << "\n";
}