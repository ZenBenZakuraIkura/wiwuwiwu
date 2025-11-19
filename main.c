#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
void ohmsLaw();
void power();
void series();
void parallel();
void decToBin();
void decToOct();
void binToDec();
void octToDec();
void hexToDec();
void clearScreen();

int main(void) {

    int menu_main, menu_sec, menu_third;

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

        // =========================== CIRCUIT CALCULATOR ===========================
        case 1:
            do {
                puts("\n====<<< Circuits Calculator >>>====");
                puts("[1] Ohm`s Law");
                puts("[2] Power Calculation");
                puts("[3] Series Resistance");
                puts("[4] Parallel Resistance");
                puts("Press 0 to enter previous menu");

                if (scanf("%d", &menu_sec) != 1) return 1;
                if (menu_sec == 0) break;

                switch (menu_sec) {
                    case 1: ohmsLaw(); break;
                    case 2: power(); break;
                    case 3: series(); break;
                    case 4: parallel(); break;
                    default: puts("Not in the Menu\n"); break;
                }

            } while (1);
            break;

        // =========================== NUMBER CONVERSION ===========================
        case 2:
            do {
                clearScreen();
                puts("\n====<<< Number Conversion Calculator >>>====");
                puts("[1] Decimal / Binary / Octal / Hex menu");
                puts("[2] (Reserved for future function)");
                puts("[3] Octal to Decimal");
                puts("[4] Hexadecimal to Decimal");
                puts("Press 0 to enter previous menu");

                if (scanf("%d", &menu_sec) != 1) return 1;
                if (menu_sec == 0) break;

                switch (menu_sec) {
                case 1:
                    do {
                        clearScreen();
                        puts("\n====<<< Number Base Conversions >>>====");
                        puts("[1] Decimal to Binary");
                        puts("[2] Decimal to Octal");
                        puts("[3] Decimal to Hexadecimal (Not implemented yet)");
                        puts("[4] Binary to Decimal");
                        puts("[5] Octal to Decimal");
                        puts("[6] Hexadecimal to Decimal");
                        puts("Press 0 to enter previous menu");

                        if (scanf("%d", &menu_third) != 1) return 1;
                        if (menu_third == 0) break;

                        switch (menu_third) {
                            case 1: decToBin(); break;
                            case 2: decToOct(); break;
                            case 3: puts("Decimal to Hex not implemented yet.\n"); break;
                            case 4: binToDec(); break;
                            case 5: octToDec(); break;
                            case 6: hexToDec(); break;
                            default: puts("Not in the Menu\n"); break;
                        }
                    } while (1);
                    break;

                case 2:
                    puts("Reserved function.\n");
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

// ===================== DECIMAL TO BINARY ======================
void decToBin() {
    int n, binary[32];
    puts("Insert a Decimal Number here: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return;
    }
    
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    puts("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// ===================== DECIMAL TO OCTAL ======================
void decToOct() {
    int n, octal[32];
    puts("Insert a Decimal Number here: ");
    scanf("%d", &n);

    int i = 0;
    while (n > 0) {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }

    puts("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// ===================== BINARY TO DECIMAL ======================
void binToDec() {
    int b;
    int d = 0, i = 0;

    printf("Enter binary number:\n");
    scanf("%d", &b);

    while (b > 0) {
        int x = b % 10;
        d += x * pow(2, i);
        b /= 10;
        i++;
    }

    printf("Decimal number value: %d\n", d);
}

// ===================== OCTAL TO DECIMAL ======================
void octToDec() {

    int inp;
    printf("Enter an Octal Number: ");
    scanf("%d", &inp);

    int original = inp;
    int ans = 0;
    int exp = 0;

    while (inp > 0) {
        int lastDig = inp % 10;
        if (lastDig > 7) {
            printf("Error: %d is not an octal digit!\n", lastDig);
            return;
        }
        ans += lastDig * pow(8, exp);
        inp /= 10;
        exp++;
    }

    printf("Decimal value of %d is: %d\n", original, ans);
}

// ===================== HEXADECIMAL TO DECIMAL ======================
void hexToDec() {
    char hex[20];
    printf("Enter Hexadecimal Number: ");
    scanf("%s", hex);

    int decimal = (int) strtol(hex, NULL, 16);

    printf("Decimal value: %d\n", decimal);
}

// ===================== OHM'S LAW ======================
void ohmsLaw() {
    int repeat = 1;

    while (repeat) {
        clearScreen();
        int scan;
        float V = 0, I = 0, R = 0;

        printf("======= Ohm's Law =======\n");
        printf("[1] Find Voltage (V)\n");
        printf("[2] Find Current (I)\n");
        printf("[3] Find Resistance (R)\n");
        printf("Enter your choice: ");
        scanf("%d", &scan);

        clearScreen();

        switch (scan) {
        case 1:
            printf("Enter Current (A): ");
            scanf("%f", &I);
            printf("Enter Resistance (Ohm): ");
            scanf("%f", &R);
            V = I * R;
            printf("Voltage = %.2f V\n", V);
            break;

        case 2:
            printf("Enter Voltage (V): ");
            scanf("%f", &V);
            printf("Enter Resistance (Ohm): ");
            scanf("%f", &R);
            I = V / R;
            printf("Current = %.2f A\n", I);
            break;

        case 3:
            printf("Enter Voltage (V): ");
            scanf("%f", &V);
            printf("Enter Current (A): ");
            scanf("%f", &I);
            R = V / I;
            printf("Resistance = %.2f Ohm\n", R);
            break;

        default:
            printf("Invalid choice!\n");
            break;
        }

        char ans;
        printf("Try again? (y/n): ");
        scanf(" %c", &ans);
        if (ans != 'y' && ans != 'Y') repeat = 0;
    }
}

void power() {
    double v, a;
    printf("Voltage (V): ");
    scanf("%lf", &v);
    printf("Current (A): ");
    scanf("%lf", &a);
    printf("Power = %.2f Watt\n", v * a);
}

void series() {
    int n;
    printf("Number of resistors: ");
    scanf("%d", &n);

    double sum = 0;
    double arr[n];

    printf("Enter resistor values: ");
    for (int i = 0; i < n; i++) scanf("%lf", &arr[i]);

    for (int i = 0; i < n; i++) sum += arr[i];

    printf("Total Series Resistance = %.2f Ohm\n", sum);
}

void parallel() {
    int n;
    printf("Number of resistors: ");
    scanf("%d", &n);

    double sum = 0;
    double arr[n];

    printf("Enter resistor values: ");
    for (int i = 0; i < n; i++) scanf("%lf", &arr[i]);

    for (int i = 0; i < n; i++) sum += 1.0 / arr[i];

    printf("Total Parallel Resistance = %.2f Ohm\n", 1.0 / sum);
}

// ===================== CLEAR SCREEN ======================
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
