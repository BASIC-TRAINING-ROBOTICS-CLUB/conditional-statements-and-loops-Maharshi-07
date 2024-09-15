#include <stdio.h>
#include "work_energy.h"

int main() {
    double mass, initial_velocity, final_velocity, force, distance;

    // Get user input
    printf("Enter the mass of the object (in kg): ");
    scanf("%lf", &mass);

    printf("Enter the initial velocity of the object (in m/s): ");
    scanf("%lf", &initial_velocity);

    printf("Enter the final velocity of the object (in m/s): ");
    scanf("%lf", &final_velocity);

    printf("Enter the force applied (in N): ");
    scanf("%lf", &force);

    printf("Enter the distance over which the force is applied (in meters): ");
    scanf("%lf", &distance);

    // Calculate the work done
    double work_done = calculate_work(force, distance);
    printf("Work done by the force: %.2lf J\n", work_done);

    // Calculate the change in kinetic energy
    double initial_kinetic_energy = calculate_kinetic_energy(mass, initial_velocity);
    double final_kinetic_energy = calculate_kinetic_energy(mass, final_velocity);
    double delta_ke = final_kinetic_energy - initial_kinetic_energy;
    printf("Change in kinetic energy: %.2lf J\n", delta_ke);

    // Validate Work-Energy Theorem
    if (work_done == delta_ke) {
        printf("The work done equals the change in kinetic energy, validating the Work-Energy Theorem.\n");
    } else {
        printf("The work done does not match the change in kinetic energy.\n");
    }

    return 0;
}
