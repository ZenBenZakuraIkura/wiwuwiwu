#include <stdio.h>
#include <stdlib.h>

void ohmsLaw();
void decToBin();
void decToOct();
void octToDec();
void clearScreen();
void power();
void series();
void parallel();
void hexToDec();

int main(void) {
    int menu_main;
    int menu_sec;
    int menu_third;

    do {
        clearScreen();
        puts("\n====<<< Electrical Calculator Kit >>>====");
        puts("[1] Circuits Calculator");
        puts("[2] Number Conversion Calculator");
        puts("Press 0 to Exit");

        if (scanf("%d", &menu_main) != 1) return 1;
        if (menu_main == 0) break;

        clearScreen();

        switch (menu_main) {

            case 1:
                do {
                    puts("\n====<<< Electrical Calculator Kit >>>====");
                    puts("1.  Ohm`s Law");
                    puts("2.  Machine 22");
                    puts("3.  Machine 23");
                    puts("4.  Machine 24");
                    puts("Press 0 to enter previous menu");

                    if (scanf("%d", &menu_sec) != 1) return 1;
                    if (menu_sec == 0) break;

                    switch (menu_sec) {
                        case 1:
                            ohmsLaw();
                            break;

                        case 2:
                            printf("function 2 will go here later\n");
                            break;

                        case 3:
                            printf("function 3 will go here later\n");
                            break;

                        case 4:
                            printf("function 4 will go here later\n");
                            break;

                        default:
                            puts("Not in the Menu\n");
                            break;
                    }

                } while (1);
                break;

            case 2:
                do {
                    clearScreen();
                    puts("\n====<<< Number Conversion Calculator Kit >>>====");
                    puts("1.  Decimal to other forms");
                    puts("2.  Machine 32");
                    puts("3.  Oktal to decimal");
                    puts("4.  Hexadecimal to decimal");
                    puts("Press 0 to enter previous menu");

                    if (scanf("%d", &menu_sec) != 1) return 1;
                    if (menu_sec == 0) break;

                    switch (menu_sec) {
                        case 1:
                            do {
                                puts("\n====<<< Number Conversion Calculator Kit >>>====");
                                puts("1.  Decimal to Binary");
                                puts("2.  Decimal to Octal");
                                puts("3.  Decimal to Hexadecimal (Belum aku sentuh)");
                                puts("Press 0 to enter previous menu");

                                if (scanf("%d", &menu_third) != 1) return 1;
                                if (menu_third == 0) break;

                                switch (menu_third) {
                                    case 1:
                                        decToBin();
                                        break;

                                    case 2:
                                        decToOct();
                                        break;

                                    default:
                                        puts("Not in the Menu\n");
                                        break;
                                }

                            } while (1);
                            break;

                        case 2:
                            printf("function 2 will go here later\n");
                            break;

                        case 3:
                            octToDec();
                            break;

                        case 4:
                            hexToDec();
                            break;

                        default:
                            puts("Not in the Menu\n");
                            break;
                    }

                } while (1);
                break;

            default:
                puts("Not in the Menu\n");
                break;
        }

    } while (1);

    return 0;
}


void decToBin() {
    int repeat = 1;
    while (repeat) {
        clearScreen();

        int n, binary[32];

        puts("Insert a Decimal Number here: ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
        }

        if (n == 0) {
            puts("Binary: 0");
            printf("\n");
        } else {
            int i = 0;
            int temp = n;
            while (temp > 0 && i < 32) {
                binary[i] = temp % 2;
                temp = temp / 2;
                i++;
            }

            puts("Binary: ");
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binary[j]);
            }
            printf("\n");
        }

        char tmp;
        printf("again? (y/n) : ");
        scanf(" %c", &tmp);
        if (tmp == 'y' || tmp == 'Y') repeat = 1;
        else repeat = 0;
    }
}


void decToOct() {
    int repeat = 1;
    while (repeat) {
        clearScreen();

        int n, octal[32];

        puts("Insert a Decimal Number here: ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
        }

        if (n == 0) {
            puts("Octal: 0");
            printf("\n");
        } else {
            int i = 0;
            int temp = n;
            while (temp > 0 && i < 32) {
                octal[i] = temp % 8;
                temp = temp / 8;
                i++;
            }

            puts("Octal: ");
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", octal[j]);
            }
            printf("\n");
        }

        char tmp;
        printf("again? (y/n) : ");
        scanf(" %c", &tmp);
        if (tmp == 'y' || tmp == 'Y') repeat = 1;
        else repeat = 0;
    }
}


void ohmsLaw() {
    int again = 1;

    do {
        clearScreen();
        int scan;

        printf("======= Ohm's Law =======\n");
        printf("[1] Find Voltage (V)\n");
        printf("[2] Find Current (I)\n");
        printf("[3] Find Resistance (R)\n");
        printf("Enter your choice (1/2/3): ");

        if (scanf("%d", &scan) != 1) {
            while (getchar() != '\n');
            scan = -1;
        }

        clearScreen();
        printf("======= Ohm's Law =======\n");

        float V = 0, I = 0, R = 0;

        switch (scan) {
            case 1:
                do {
                    printf("Calculating Voltage Across a Resistor\n");
                    printf("Enter Current (I) in Amperes: ");

                    if (scanf("%f", &I) != 1 || I < 0) {
                        while (getchar() != '\n');
                        printf("Invalid input. Please enter a positive number.\n");
                        continue;
                    }

                    printf("Enter Resistance value (Ohms): ");

                    if (scanf("%f", &R) != 1 || R < 0) {
                        while (getchar() != '\n');
                        printf("Invalid input. Please enter a positive number.\n");
                        continue;
                    }

                    V = I * R;
                    printf("The voltage across a %.2f Ohm resistor with %.2f A current is: %.2f V\n",
                           R, I, V);

                    break;
                } while (1);
                break;

            case 2:
                do {
                    printf("Calculating Current in a Circuit\n");
                    printf("Enter Voltage source (V): ");

                    if (scanf("%f", &V) != 1) {
                        while (getchar() != '\n');
                        printf("Invalid input. Please enter a number.\n");
                        continue;
                    }

                    printf("Enter Total Resistance (Ohms): ");

                    if (scanf("%f", &R) != 1 || R < 0) {
                        while (getchar() != '\n');
                        printf("Invalid input. Please enter a positive number.\n");
                        continue;
                    }

                    if (R == 0) {
                        printf("Error: Short Circuit\n");
                        break;
                    }

                    I = V / R;
                    printf("The current flowing in a circuit with %.2f Ohm resistance and %.2f V source is: %.2f A\n",
                           R, V, I);

                    break;
                } while (1);
                break;

            case 3:
                do {
                    printf("Calculating Resistance in a Circuit\n");
                    printf("Enter Voltage source (V): ");

                    if (scanf("%f", &V) != 1) {
                        while (getchar() != '\n');
                        printf("Invalid input. Please enter a number.\n");
                        continue;
                    }

                    printf("Enter Current (I) in Amperes: ");

                    if (scanf("%f", &I) != 1 || I < 0) {
                        while (getchar() != '\n');
                        printf("Invalid input. Please enter a positive number.\n");
                        continue;
                    }

                    if (I == 0) {
                        printf("Error: Open Circuit\n");
                        break;
                    }

                    R = V / I;
                    printf("The resistance in a circuit with %.2f A current and %.2f V source is: %.2f Ohms\n",
                           I, V, R);

                    break;
                } while (1);
                break;

            default:
                printf("Invalid choice!\n");
                break;
        }

        printf("Do you want to try again? (y/n): ");
        char temp;
        scanf(" %c", &temp);

        if (temp == 'y' || temp == 'Y') again = 1;
        else again = 0;

    } while (again == 1);

    clearScreen();
}


void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


void octToDec() {
    int inp;
    int repeat = 1;

    while (repeat) {
        clearScreen();

        printf("====================================\n");
        printf("          OCTAL TO DECIMAL          \n");
        printf("====================================\n\n");

        if (scanf("%d", &inp) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
        } else {
            int original = inp;
            int ans = 0;
            int multiplier = 1;
            int valid = 1;
            int temp = inp;

            while (temp > 0) {
                int lastDig = temp % 10;
                if (lastDig > 7) {
                    printf("Error: Digit '%d' is not an octal digit!\n", lastDig);
                    valid = 0;
                    break;
                }
                ans += lastDig * multiplier;
                multiplier *= 8;
                temp /= 10;
            }

            if (valid) {
                printf("Decimal value of %d (base 8) is: %d\n", original, ans);
            }
        }

        char tmp;
        printf("Do you want to convert again? (y/n): ");
        scanf(" %c", &tmp);

        if (tmp == 'y' || tmp == 'Y') repeat = 1;
        else repeat = 0;
    }
}


void hexToDec() {
    int repeat = 1;

    while (repeat) {
        clearScreen();

        char hex[100];
        int decimal = 0;
        int valid = 0; 

        printf("=====================================\n");
        printf("             HEX TO DECIMAL          \n");
        printf("=====================================\n\n");

        while (!valid) {
            printf("Enter hexadecimal number : ");
            if (scanf("%99s", hex) != 1) {
                while (getchar() != '\n');
                printf("Invalid input.\n");
                continue;
            }

            int length = 0;
            while (hex[length] != '\0') length++;

            decimal = 0;
            int base = 1;
            int ok = 1;

            for (int i = length - 1; i >= 0; i--) {
                char c = hex[i];
                if (c >= 'a' && c <= 'f') c = c - ('a' - 'A');

                int value;
                if (c >= '0' && c <= '9') {
                    value = c - '0';
                } else if (c >= 'A' && c <= 'F') {
                    value = c - 'A' + 10;
                } else {
                    ok = 0;
                    break;
                }

                decimal += value * base;
                base *= 16;
            }

            if (!ok) {
                printf("Invalid input! Only characters 0-9 and A-F are allowed.\n");
            } else {
                valid = 1;
            }
        }

        if (valid) {
            printf("\nDecimal value : %d\n\n", decimal);
        }

        char tmp;
        printf("Convert another? (y/n) : ");
        scanf(" %c", &tmp);

        if (tmp == 'y' || tmp == 'Y') repeat = 1;
        else repeat = 0;
    }
}


void power() {
    int repeat = 1;
    while (repeat) {
        clearScreen();

        double v, a;

        printf("Enter the Voltage (Volt) value:\n");
        if (scanf("%lf", &v) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
        }

        printf("Enter the Current (Ampere) value:\n");
        if (scanf("%lf", &a) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
        }

        printf("Electrical Power Value:\n");
        printf("%.2f Watt\n", v * a);

        char tmp;
        printf("again? (y/n) : ");
        scanf(" %c", &tmp);

        if (tmp == 'y' || tmp == 'Y') repeat = 1;
        else repeat = 0;
    }
}


void series() {
    int repeat = 1;
    while (repeat) {
        clearScreen();

        int n;
        double x = 0;

        printf("Number of resistors:\n");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
        } else if (n <= 0) {
            printf("Invalid number of resistors.\n");
        } else {
            double arr[n];

            printf("Enter the resistor value (for more than one resistor separate them by space):\n");
            for (int i = 0; i < n; i++) scanf("%lf", &arr[i]);

            for (int i = 0; i < n; i++) x += arr[i];

            printf("Total Resistance Value:\n");
            printf("%.2f Ohm\n", x);
        }

        char tmp;
        printf("again? (y/n) : ");
        scanf(" %c", &tmp);

        if (tmp == 'y' || tmp == 'Y') repeat = 1;
        else repeat = 0;
    }
}


void parallel() {
    int repeat = 1;
    while (repeat) {
        clearScreen();

        int n;
        double x = 0;

        printf("Number of resistors:\n");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
        } else if (n <= 0) {
            printf("Invalid number of resistors.\n");
        } else {
            double arr[n];

            printf("Enter the resistor value (for more than one resistor separate them by space):\n");
            for (int i = 0; i < n; i++) scanf("%lf", &arr[i]);

            for (int i = 0; i < n; i++) x += 1.0 / arr[i];

            printf("Total Resistance Value:\n");
            printf("%.2f Ohm\n", 1 / x);
        }

        char tmp;
        printf("again? (y/n) : ");
        scanf(" %c", &tmp);

        if (tmp == 'y' || tmp == 'Y') repeat = 1;
        else repeat = 0;
    }
}
