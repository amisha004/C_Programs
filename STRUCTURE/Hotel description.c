/* Write a program which defines a structure that can describe a hotel. It should have members that include the name, 
address, grade, average room charges and number of rooms.*/

#include <stdio.h>
#include <string.h>
struct hotels
{
    char name[25];
    char address[300];
    int grade, avgCharge, rooms;
};
main()
{
    int i, j, k, hotels, choice, grade, temp;
    struct hotels a[50];
    printf("Enter the number of hotels\n");
    scanf("%d", &hotels);
    printf("\n\n");
    for (i = 0; i < hotels; i++)
    {
        fflush(stdin);
        printf("Enter the name of hotel %d\n", i + 1);
        gets(a[i].name);
        printf("\n");

        printf("Enter the address of %s\n", a[i].name);
        gets(a[i].address);
        printf("\n");

        printf("Enter the grade of the hotel from 1 to 5. (5 being the best)\n");
        scanf("%d", &a[i].grade);
        printf("\n");

        printf("Enter the average charge per night of the hotel.\n");
        scanf("%d", &a[i].avgCharge);
        printf("\n");

        printf("Enter the number of available rooms of the hotel.\n");
        scanf("%d", &a[i].rooms);
        printf("\n\n");
    }
    printf("\n\n");
    printf("Choose the task to perform-\n");
    printf("1. Show hotels of a particular grade from low to high price.\n");
    printf("2. Filter and show hotels under a particular tariff only.\n\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the grade of the hotel to apply the list filter.\n");
        scanf("%d", &grade);
        printf("The following hotels were found- \n\n");
        for (i = 0; i < hotels; i++)
        {
            for (j = i + 1; j < hotels; j++) 
            {
                if (a[i].avgCharge > a[j].avgCharge)
                {
                    temp = a[i].avgCharge;
                    a[i].avgCharge = a[j].avgCharge;
                    a[j].avgCharge = temp;
                }
            }

            if (a[i].grade == grade) 
            {
                printf("Hotel %d= %s\n", i + 1, a[i].name);
            }

        }
    }

}
