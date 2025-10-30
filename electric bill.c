/*
Name: Martin Maina
Reg:  CT100/G/26125/25
Description: Program to calculate electric bill, fare, and temperature conversion.
*/

// Q1: Function to calculate the electric bill
double calculateElectricBill(int units) {
    double bill = 0.0;
    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }
    return bill;
}

// Q2: Function to calculate the fare
double calculateFare(double distance) {
    return distance * 50;
}

// Q3: Function to convert Fahrenheit to Celsius
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    // Test Q1
    int units = 250;
    double electricBill = calculateElectricBill(units);
    printf("The electric bill for %d units is: KSh. %.2f\n", units, electricBill);

    // Test Q2
    double distance = 10;
    double fare = calculateFare(distance);
    printf("The fare for %.2f km is: KSh. %.2f\n", distance, fare);

    // Test Q3
    double fahrenheit = 68;
    double celsius = convertToCelsius(fahrenheit);
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}
