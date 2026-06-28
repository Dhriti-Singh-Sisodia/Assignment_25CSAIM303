//Write a program to Create contact management system//
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][30], search[30];
    long long phone[10];
    int n = 0, i, choice, found;

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====");
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                gets(name[n]);

                printf("Enter Phone Number: ");
                scanf("%lld", &phone[n]);

                getchar();
                n++;

                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Contacts Found!\n");
                }
                else
                {
                    printf("\n--- Contact List ---\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d. %s - %lld\n", i + 1, name[i], phone[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                gets(search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(name[i], search) == 0)
                    {
                        printf("Contact Found!\n");
                        printf("Name : %s\n", name[i]);
                        printf("Phone: %lld\n", phone[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact Not Found!\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
