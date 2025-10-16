#include <stdio.h>

int main(void) {
    int menu_main;
    int menu_sec;

    do {
        puts("\n====<<< Electrical Calculator Kit >>>====");
        puts("1.  Machine 1");
        puts("2.  Machine 2");
        puts("3.  Machine 3");
        puts("4.  Machine 4");
        puts("Press 0 to Exit");

        if (scanf("%d", &menu_main) != 1) return 1;
        if (menu_main == 0) break;

        switch (menu_main) {

            // Electrical formulas based equations
            case 1:
                do {
                    puts("\n====<<< Electrical Calculator Kit >>>====");
                    puts("1.  Machine 21");
                    puts("2.  Machine 22");
                    puts("3.  Machine 23");
                    puts("4.  Machine 24");
                    puts("Press 0 to Exit");

                    if (scanf("%d", &menu_sec) != 1) return 1;
                    if (menu_sec == 0) break;

                    switch (menu_sec) {
                        case 1:
                            printf("function 1 will go here latr");
                            break;
                        case 2:
                            printf("function 2 will go here latr");
                            break;
                        case 3:
                            printf("function 3 will go here latr");
                            break;
                        case 4:
                            printf("function 4 will go here latr");
                            break;
                    
                    }

                } while (1);
                break;
                // Number Recorder

            case 2:
                do {
                    puts("\n====<<< Electrical Calculator Kit >>>====");
                    puts("1.  Machine 31");
                    puts("2.  Machine 32");
                    puts("3.  Machine 33");
                    puts("4.  Machine 34");
                    puts("Press 0 to Exit");

                    if (scanf("%d", &menu_sec) != 1) return 1;
                    if (menu_sec == 0) break;

                    switch (menu_sec) {
                        case 1:
                            printf("function 1 will go here latr");
                            break;
                        case 2:
                            printf("function 2 will go here latr");
                            break;
                        case 3:
                            printf("function 3 will go here latr");
                            break;
                        case 4:
                            printf("function 4 will go here latr");
                            break;
                    }

                } while (1);
        }

    } while (1);

    puts("Use of Kit Terminated. Please reboot code.");
    return 0;
}
