#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice;
    int sum, max, min;

    while(1)
    {
        printf("\n===== Array Operations Menu =====\n");
        printf("1. Enter Array Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Sum\n");
        printf("4. Find Maximum\n");
        printf("5. Find Minimum\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Array Elements are:\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 4:
                max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;

            case 5:
                min = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
                break;

            case 6:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}