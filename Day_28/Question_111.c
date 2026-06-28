#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char passengerName[50];
    char destination[50];
    int seats;
};

int main()
{
    struct Ticket t[100];
    int n = 0, choice, i, ticketNo, found;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Ticket Number: ");
            scanf("%d", &t[n].ticketNo);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", t[n].passengerName);

            printf("Enter Destination: ");
            scanf(" %[^\n]", t[n].destination);

            printf("Enter Number of Seats: ");
            scanf("%d", &t[n].seats);

            n++;
            printf("Ticket booked successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No bookings available!\n");
            }
            else
            {
                printf("\nTicket No\tPassenger\tDestination\tSeats\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t\t%s\t\t%s\t\t%d\n",
                           t[i].ticketNo,
                           t[i].passengerName,
                           t[i].destination,
                           t[i].seats);
                }
            }
            break;

        case 3:
            printf("Enter Ticket Number to Search: ");
            scanf("%d", &ticketNo);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    printf("\nBooking Found!\n");
                    printf("Ticket Number : %d\n", t[i].ticketNo);
                    printf("Passenger Name: %s\n", t[i].passengerName);
                    printf("Destination   : %s\n", t[i].destination);
                    printf("Seats         : %d\n", t[i].seats);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Booking not found!\n");
            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}