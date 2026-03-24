#include "sedan.cpp"
#include <assert.h>
#include <iostream>

void test1(){
    Sedan s; // car starts in reverse gear

    double step_size = 0.01;
    double start_time = 0.0;
    double end_time = 10.0;
    int n_steps = static_cast<int>((end_time - start_time) / step_size);

    assert(s.get_speed() == 0.0);

    s.shift_up(); // remember to shift from -1 -> 1 gear

        for (int i = 0; i < n_steps; ++i)
        {
            s.step(step_size, 1.0);

            if (i % (n_steps / 100) == 0)
            {
                std::cout << "time: '" << i * step_size << "': "
                          << "speed of the car is:'" << s.get_speed() << "' ms/s and engine rpm is: '" << s.get_engine_rpm() << "'" << std::endl;
            }
        }
    assert(s.get_speed() <= 33 && s.get_speed() >= 31);
}

void test2(){
    Sedan s; // car starts in reverse gear

    double step_size = 0.01;
    double start_time = 0.0;
    double end_time = 10.0;
    int n_steps = static_cast<int>((end_time - start_time) / step_size);

    for (int i = 0; i < n_steps; ++i)
        {
            s.step(step_size, 1.0);

            if (i % (n_steps / 100) == 0)
            {
                std::cout << "time: '" << i * step_size << "': "
                          << "speed of the car is:'" << s.get_speed() << "' ms/s and engine rpm is: '" << s.get_engine_rpm() << "'" << std::endl;
            }
        }

    assert(s.get_speed() >= -33 && s.get_speed() <= -31); // car should hit ~ -32 m/s after 10 seconds
}


int main(){
    
    test1();
    test2();

    








}