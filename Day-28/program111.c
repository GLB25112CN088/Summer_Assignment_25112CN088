#include <stdio.h>

struct Ticket
{
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t;
    int totalSeats = 50, choice;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Show Booking Details\n");
        printf("3. Available Seats\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t.name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                if (t.seats <= totalSeats)
                {
                    totalSeats -= t.seats;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Seats Not Available!\n");
                }
                break;

            case 2:
                printf("\nPassenger Name: %s\n", t.name);
                printf("Booked Seats: %d\n", t.seats);
                break;

            case 3:
                printf("Available Seats: %d\n", totalSeats);
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}