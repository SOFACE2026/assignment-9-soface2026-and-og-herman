#include "sedan.hpp"
#include <array>

static const std::array<double, 7> gear_ratios = {-1, 1, 2, 3, 4, 5, 6};

Sedan::Sedan() : current_gear(0)
{
}

void Sedan::shift_up()
{
    current_gear += 1;
}

void Sedan::shift_down()
{
    current_gear -= 1;

}

double Sedan::get_torque(double engine_rpm, double throttle)
{
    // beregn throttle ud fra opgavens formel
    return 100 * throttle;
}

double Sedan::get_weight()
{  
    // vi antager at vi har med en meget let bil at gøre idag. C1'er
    return 155.0;
}

double Sedan::get_wheel_radius()
{   // med meget små hjul
    return 0.2;
}

double Sedan::get_current_gear_ratio()
{   
    // få gear ratio fra listen med ratioer. Hver plads i arrayen giver udtryk for dette
    return gear_ratios[current_gear];
}