// work_energy.c

#include "work_energy.h"

// Function to calculate work done (Work = Force * Distance)
double calculate_work(double force, double distance) {
    return force * distance;
}

// Function to calculate kinetic energy (KE = 0.5 * mass * velocity^2)
double calculate_kinetic_energy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}
