#include <stdio.h>

void decToBin();
void decToOct();
int main(void) {
    int menu_main;
    int menu_sec;
    int menu_third;

    do {
        puts("\n====<<< Electrical Calculator Kit >>>====");
        puts("[1] Circuits Calculator");
        puts("[2] Number Conversion Calculator");
        puts("Press 0 to Exit");

        if (scanf("%d", &menu_main) != 1) return 1;
        if (menu_main == 0) break;

        switch (menu_main) {

            case 1:
                do {
                    puts("\n====<<< Electrical Calculator Kit >>>====");
                    puts("1.  Machine 21");
                    puts("2.  Machine 22");
                    puts("3.  Machine 23");
                    puts("4.  Machine 24");
                    puts("Press 0 to enter previous menu");

                    if (scanf("%d", &menu_sec) != 1) return 1;
                    if (menu_sec == 0) break;

                    switch (menu_sec) {
                        case 1:
                            printf("function 1 will go here later\n");
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
                    puts("\n====<<< Number Conversion Calculator Kit >>>====");
                    puts("1.  Decimal to other forms");
                    puts("2.  Machine 32");
                    puts("3.  Machine 33");
                    puts("4.  Machine 34");
                    puts("Press 0 to enter previous menu");

                    if (scanf("%d", &menu_sec) != 1) return 1;
                    if (menu_sec == 0) break;

                    switch (menu_sec) {
                        case 1:
                            do {
                                puts("\n====<<< Number Conversion Calculator Kit >>>====");
                                puts("1.  Decimal to Binary");
                                puts("2.  Decimal to Octal");
                                puts("3.  Decimal to Hexadecimal");
                                puts("Press 0 to enter previous menu");

                                if (scanf("%d", &menu_third) != 1) return 1;
                                if (menu_third == 0) break;

                                switch (menu_third) {
                                    case 1: {
                                        decToBin();
                                        break;
                                    }
                                    case 2: {
                                        decToOct();
                                        break;
                                    }
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

            default:
                puts("Not in the Menu\n");
                break;
        }

    } while (1);

    puts("Use of Kit Terminated. Please reboot code.");
    return 0;
}


void decToBin() {
    int n, binary[32];
    puts("Insert a Decimal Number here: ");
    scanf("%d", &n);

    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    puts("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decToOct() {
    int n, binary[32];
    puts("Insert a Decimal Number here: ");
    scanf("%d", &n);

    int i = 0;
    while (n > 0) {
        binary[i] = n % 8;
        n = n / 8;
        i++;
    }

    puts("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
