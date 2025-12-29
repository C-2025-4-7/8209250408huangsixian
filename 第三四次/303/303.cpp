#include<iostream>
#include "303.h"
using namespace std;
int main() {
	cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
	double cel = 40.0;
	double fah = 120.0;
    for (int i = 0; i < 10; i++) {
        double fah_val = celsius_to_fah(cel);
        double cel_val = fahrenheit_to_cels(fah);
        cout << cel << "\t" << fah_val << "\t\t|\t" << fah << "\t\t" << cel_val << endl;
        cel -= 1.0;
        fah -= 10.0;
    }

    return 0;
}