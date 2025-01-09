#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_QTD 3

typedef struct {
    char make[50];
    char model[50];
    int year;
    char color[50];
    double price;
    char vin[17];
} Vehicle;

Vehicle vehicle[MAX_QTD];
int counter = 0;

void deleteRecord() {
    if (counter == 0) {
        printf("========================================= \n");
        printf("||            List Empty               || \n");
        printf("========================================= \n");
    }
    else {
        char searchVIN[17];
        int found = 0;

        printf("========================================= \n");
        printf("||     Enter the Information Below     || \n");
        printf("========================================= \n");

        printf("VIN: ");
        gets(searchVIN);
        fflush(stdin);
        printf("========================================= \n");

        for (int i = 0; i < counter; i++) {
            if (strcmp(vehicle[i].vin, searchVIN) == 0) {
                found = 1;
                printf("Make: %s \n", vehicle[i].make);
                printf("Model: %s \n", vehicle[i].model);
                printf("Year: %d \n", vehicle[i].year);
                printf("Color: %s \n", vehicle[i].color);
                printf("Price: %lf \n", vehicle[i].price);
                printf("VIN: %s \n", vehicle[i].vin);
                printf("========================================= \n");

                // Shifts all subsequent records to 'remove' the item
                for (int j = i; j < counter - 1; j++) {
                    vehicle[j] = vehicle[j + 1]; // Shifts forward
                }
                counter--;
                printf("========================================= \n");
                printf("||     Record Deleted Successfully     || \n");
                printf("========================================= \n");
                break;
            }
        }
        if (found == 0) {
            printf("========================================= \n");
            printf("||           No Records Found          || \n");
            printf("========================================= \n");
        }
    }
}

void changeData() {
    if (counter == 0) {
        printf("========================================= \n");
        printf("||            List Empty               || \n");
        printf("========================================= \n");
    }
    else {
        char searchVIN[17];
        int found = 0;

        printf("========================================= \n");
        printf("||     Enter the Information Below     || \n");
        printf("========================================= \n");

        printf("VIN: ");
        gets(searchVIN);
        fflush(stdin);
        printf("========================================= \n");

        for (int i = 0; i < counter; i++) {
            if (strcmp(vehicle[i].vin, searchVIN) == 0) {
                found = 1;
                printf("Make: %s \n", vehicle[i].make);
                printf("Model: %s \n", vehicle[i].model);
                printf("Year: %d \n", vehicle[i].year);
                printf("Color: %s \n", vehicle[i].color);
                printf("Price: %lf \n", vehicle[i].price);
                printf("VIN: %s \n", vehicle[i].vin);
            }

            char newMake[50];
            char newModel[50];
            int newYear;
            char newColor[50];
            double newPrice;
            char newVin[17];

            printf("========================================= \n");
            printf("||      Enter the new Information      || \n");
            printf("========================================= \n");
            printf("Make: ");
            gets(newMake);
            fflush(stdin);

            printf("Model: ");
            gets(newModel);
            fflush(stdin);

            printf("Year: ");
            scanf("%d", &newYear);
            fflush(stdin);

            printf("Color: ");
            gets(newColor);
            fflush(stdin);

            printf("Price: ");
            scanf("%lf", &newPrice);
            fflush(stdin);

            printf("Vin: ");
            gets(newVin);
            fflush(stdin);

            strcpy(vehicle[i].make, newMake);
            strcpy(vehicle[i].model, newModel);
            vehicle[i].year = newYear;
            strcpy(vehicle[i].color, newColor);
            vehicle[i].price = newPrice;
            strcpy(vehicle[i].vin, newVin);

            printf("========================================= \n");
            printf("||   Information Updated Successfully  || \n");
            printf("========================================= \n");
        }
        if (found == 0) {
            printf("========================================= \n");
            printf("||           No Records Found          || \n");
            printf("========================================= \n");
        }
    }
}

void searchRecord() {
    if (counter == 0) {
        printf("========================================= \n");
        printf("||            List Empty               || \n");
        printf("========================================= \n");
    }
    else {
        char searchVIN[17];
        int found = 0;

        printf("========================================= \n");
        printf("||     Enter the Information Below     || \n");
        printf("========================================= \n");

        printf("VIN: ");
        gets(searchVIN);
        fflush(stdin);
        printf("========================================= \n");

        for (int i = 0; i < counter; i++) {
            if (strcmp(vehicle[i].vin, searchVIN) == 0) {
                found = 1;
                printf("Make: %s \n", vehicle[i].make);
                printf("Model: %s \n", vehicle[i].model);
                printf("Year: %d \n", vehicle[i].year);
                printf("Color: %s \n", vehicle[i].color);
                printf("Price: %lf \n", vehicle[i].price);
                printf("VIN: %s \n", vehicle[i].vin);
                printf("========================================= \n");
            }
        }
        if (found == 0) {
            printf("========================================= \n");
            printf("||           No Records Found          || \n");
            printf("========================================= \n");
        }
    }
}

void listRecords() {
    if (counter == 0) {
        printf("========================================= \n");
        printf("||            List Empty               || \n");
        printf("========================================= \n");
    }
    else {
        printf("========================================= \n");
        printf("||         Records in List             || \n");
        printf("========================================= \n");
        for (int i = 0; i < counter; i++) {
            printf("Make: %s \n", vehicle[i].make);
            printf("Model: %s \n", vehicle[i].model);
            printf("Year: %d \n", vehicle[i].year);
            printf("Color: %s \n", vehicle[i].color);
            printf("Price: %lf \n", vehicle[i].price);
            printf("VIN: %s \n", vehicle[i].vin);
            printf("========================================= \n");
        }
    }
}

void registerVehicle() {
    if (counter == MAX_QTD) {
        printf("========================================= \n");
        printf("||   Sorry, vehicle registration is    || \n");
        printf("||   no longer allowed at this time.   || \n");
        printf("||  We appreciate your understanding.  || \n");
        printf("========================================= \n");
    }
    else {
        printf("========================================= \n");
        printf("||     Enter the Information Below     || \n");
        printf("========================================= \n");

        printf("Make: ");
        gets(vehicle[counter].make);
        fflush(stdin);

        printf("Model: ");
        gets(vehicle[counter].model);
        fflush(stdin);

        printf("Year: ");
        scanf("%d", &vehicle[counter].year);
        fflush(stdin);

        printf("Color: ");
        gets(vehicle[counter].color);
        fflush(stdin);

        printf("Price: ");
        scanf("%lf", &vehicle[counter].price);
        fflush(stdin);

        printf("VIN: ");
        gets(vehicle[counter].vin);
        fflush(stdin);

        counter++;
        printf("========================================= \n");
        printf("|| Information Registered Successfully || \n");
        printf("========================================= \n");
    }
}

void showMenu() {
    printf("========================================= \n");
    printf("||             MAIN MENU               || \n");
    printf("========================================= \n");
    printf("|| 1. Register Vehicle                 || \n");
    printf("|| 2. List Records                     || \n");
    printf("|| 3. Search                           || \n");
    printf("|| 4. Change                           || \n");
    printf("|| 5. Delete                           || \n");
    printf("|| 0. Exit                             || \n");
    printf("=========================================\n");
    printf("Option: ");
    fflush(stdin);
}

void exitProgram() {
    printf("========================================= \n");
    printf("||          Exiting the Program...     || \n");
    printf("========================================= \n");
}

void invalidOption() {
    printf("========================================= \n");
    printf("||           INVALID OPTION            || \n");
    printf("========================================= \n");
}

void clearScreen() {
    #ifdef _WIN64
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {

    setlocale(LC_ALL, "en_US.UTF-8");

    int optionMenu;

    do {
        showMenu();
        scanf("%d", &optionMenu);
        fflush(stdin);
        clearScreen();

        switch (optionMenu) {
            default: {
                invalidOption();
                break;
            }
            case 0: {
                exitProgram();
                break;
            }
            case 1: {
                registerVehicle();
                break;
            }
            case 2: {
                listRecords();
                break;
            }
            case 3: {
                searchRecord();
                break;
            }
            case 4: {
                changeData();
                break;
            }
            case 5: {
                deleteRecord();
                break;
            }
        }
        system("pause");
        clearScreen();
    }
    while (optionMenu != 0);

    return 0;
}
