#include <stdio.h>
#include <math.h>

int main() {
    double m, theta, d, wavelength;

    printf("Enter the values of m, theta, and d: ");
    scanf("%lf %lf %lf", &m, &theta, &d);

    d = d * 1e-6;

    wavelength = (d * sin(theta * M_PI / 180)) / m;

    wavelength = wavelength * 1e9;

    printf("Wavelength: %.2f nm\n", wavelength);

    if (wavelength >= 380 && wavelength <= 450) {
        printf("Color: Violet\n");
    } else if (wavelength > 450 && wavelength <= 485) {
        printf("Color: Blue\n");
    } else if (wavelength > 485 && wavelength <= 500) {
        printf("Color: Cyan\n");
    } else if (wavelength > 500 && wavelength <= 565) {
        printf("Color: Green\n");
    } else if (wavelength > 565 && wavelength <= 590) {
        printf("Color: Yellow\n");
    } else if (wavelength > 590 && wavelength <= 625) {
        printf("Color: Orange\n");
    } else if (wavelength > 625 && wavelength <= 750) {
        printf("Color: Red\n");
    } else {
        printf("Color: Not in visible range\n");
    }

    return 0;
}