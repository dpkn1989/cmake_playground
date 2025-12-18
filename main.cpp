#include <iostream>
#include "Car.h"

int main(int agrc, char* argv[])
{
   std::cout << "Om Ganesaya namaha!" << std::endl;

   Car C1;
   Car C2("BMW", "Black", 150.0f);

   C1.accelerate();
   C1.accelerate();

   C2.accelerate();
   C2.brake();

   C1.displayStatus();
   C2.displayStatus();
   return 0;
}
