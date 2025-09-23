#include <stdio.h>
#include <math.h>

int main() {
    int m1 = 3, m2 = 2; 
    double lambda1 = 530e-9, theta1 = 65.0, lambda2 = 700e-9;

    double d = (m1 * lambda1) / sin(theta1 * M_PI / 180);
    double sin_theta2 = (m2 * lambda2) / d;

    if (sin_theta2 > 1 || sin_theta2 < -1) {
        printf("No diffraction occurs for red light at second order.\n");
    } else {
        double theta2 = asin(sin_theta2) * 180 / M_PI;
        printf("The angle for the second-order bright spot of red light: %.2f degrees\n", theta2);
    }
    return 0;
}
