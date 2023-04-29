#include <stdio.h>
#include <string.h>

int main() {
    char car_type[10];
    float car_price, fitting_price, total, discount, gst, net;

    printf("Enter the type of car (Hatchback, Sedan, SUV, MUV): ");
    scanf("%s", car_type);
    printf("Enter the price of the car: ");
    scanf("%f", &car_price);
    printf("Enter the extra fitting price: ");
    scanf("%f", &fitting_price);

    total = car_price + fitting_price;

    if (strcmp(car_type, "Hatchback") == 0) {
        discount = total * 0.03;
        gst = (total - discount) * 0.12;
    }
    else if (strcmp(car_type, "Sedan") == 0) {
        discount = total * 0.05;
        gst = (total - discount) * 0.12;
    }
    else if (strcmp(car_type, "SUV") == 0) {
        discount = total * 0.10;
        gst = (total - discount) * 0.12;
    }
    else if (strcmp(car_type, "MUV") == 0) {
        discount = total * 0.15;
        gst = (total - discount) * 0.12;
    }
    else {
        printf("Invalid Type\n");
        return 0;
    }

    net = total - discount + gst;

    printf("Total amount: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("GST: %.2f\n", gst);
    printf("Net amount: %.2f\n", net);

    return 0;
}
