int main() {
    // Compute total owed, assuming 8% tax and 15% tip
    
    float subtotal =  (38 + 40 + 30);

    printf("Subtotal: $%.02f\n", subtotal);

    float totaltax = subtotal * .08;

    printf("Tax: $%.02f\n", totaltax);

    float totaltip = subtotal * .15;

    printf("Tip: $%.02f\n", totaltip);

    printf("Total: $%.02f\n", (subtotal + totaltax + totaltip));
}