#include <stdio.h>

int main()
{
    FILE *fp;
    int number, quantity, i;
    float price, value;
    char item[10], filename[10];

    printf("Input file name\n");
    scanf("%s", filename);
    fp = fopen(filename, "w");
    printf("Input inventory data\n\n");
    printf("Item name Number Price Quantity\n");
    for (i = 1; i <= 3; i++)
    {
        fscanf(stdin, "%s %d %f %d",
               item, &number, &price, &quantity);
        fprintf(fp, "%5s %5d %5.2f %5d\n",
                item, number, price, quantity);
    }
    fclose(fp);
    fprintf(stdout, "\n\n");

    fp = fopen(filename, "r");

    printf("Item name  Number  Price  Quantity  Value\n");
    for (i = 1; i <= 3; i++)
    {
        fscanf(fp, "%s %d %f %d",
               item, &number, &price, &quantity);
        value = price * quantity;
        printf("%-9s  %-6d  %-5.2f  %-8d  %-5.2f\n",
               item, number, price, quantity, value);
    }
    fclose(fp);
}