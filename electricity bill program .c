/* program use to calculate electricity 
Programmer ;EDISON CHEPKWONY 
            CT101/G/23928/24
Date;09/10/24*/


#include <stdio.h>

int main() {
    int customerID, unitsconsumed;
    char customerName[20];
    float chargePerUnit, totalAmount, surcharge = 0.0;

    // enter the customer details and consumedunits
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter UnitsConsumed: ");
    scanf("%d", &unitsconsumed);

    // Calculate the charge per unit based on the units consumed
    if (unitsconsumed < 200) 
    {
        chargePerUnit = 1.20;
    } else if (unitsconsumed >= 200 && unitsconsumed < 400) 
    {
        chargePerUnit = 1.50;
    } else if (unitsconsumed >= 400 && unitsconsumed < 600) 
    {
        chargePerUnit = 1.80;
    } else 
    {
        chargePerUnit = 2.00;
    }

    // Calculate the total bill
    totalAmount = unitsconsumed * chargePerUnit;

    // Add surcharge if the total exceeds 400 units
    if (unitsconsumed > 400) 
    {
        surcharge = totalAmount * 0.15;  //15% surcharge fee
        totalAmount += surcharge;
    }

    // to make minimum bill is 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    // Displays the bill details
    printf("\n\n\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsconsumed);
    printf("Charge per Unit: %.2f\n", chargePerUnit);
    printf("Surcharge: %.2f\n", surcharge);
    printf("Total Amount to Pay: %.2f\n", totalAmount);

    return 0;
}