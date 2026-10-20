#include <stdio.h>

int main(void) {
    float pucharseNet, markupPercent, sellingPrice;
    printf("Ener Net pucharse price\n");
    scanf("%f", &pucharseNet);
    printf("Enter markup\n");
    scanf("%f", &markupPercent);
    sellingPrice = pucharseNet * (1 + markupPercent/100);
    printf("Your selling price is %.2f\n", sellingPrice);
    return 0;

}
