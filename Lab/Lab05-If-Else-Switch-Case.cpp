#include <stdio.h>

int main()
{
    int Ip, Ip2, snack, water, MI1 = 0, MI2 = 0, sum = 0;
    int W1 = 0, W2 = 0, W3 = 0, S1 = 0, S2 = 0, S3 = 0;

    do
    {
        printf("Snack       Water\n");
        printf(" [1]         [2]\nInput : ");
        scanf("%d", &Ip);
        if (Ip == 1)
        {
            do
            {
                printf("\nDumplings 20 baht     steamed bun 15 baht     Bread 10 baht");
                printf("\n      [1]                     [2]                   [3]");
                printf("\ninput : ");
                snack = 0;
                scanf("%d", &snack);

                if (snack == 1)
                {
                    S1 += 1;
                    sum += 20;
                    break;
                }
                else if (snack == 2)
                {
                    S2 += 1;
                    sum += 15;
                    break;
                }
                else if (snack == 3)
                {
                    S3 += 1;
                    sum += 10;
                    break;
                }
                else
                {
                    printf("Sorry! there are only three item");
                }

            } while (snack > 3);
        }

        else if (Ip == 2)
        {
            do
            {
                printf("Water 10 baht     Lemonade 15 baht     Cola 20 baht");
                printf("\n    [1]                  [2]               [3]\n");
                printf("input : ");
                water = 0;
                scanf("%d", &water);

                if (water == 1)
                {
                    W1 += 1;
                    sum += 10;
                    break;
                }
                else if (water == 2)
                {
                    W2 += 1;
                    sum += 15;
                    break;
                }
                else if (water == 3)
                {
                    W3 += 1;
                    sum += 20;
                    break;
                }
                else
                {
                    printf("Sorry! there are only three item");
                }

            } while (water > 3);
        } // end do water
        else
        {
            printf("Sorry There are only 2 option");
            break;
        }

        do
        {
            printf("\nDumplings = %d        Water = %d  \n", S1, W1);
            printf("steamed bun = %d      Lemonade = %d  \n", S2, W2);
            printf("Bread = %d            cola = %d  \n", S3, W3);
            printf("\n           Total = %d\n\n Do you want to select again? [1=Yes / 0=No / 2=delete item]\nInput : ", sum);
            scanf("%d", &Ip);

            Ip2 = Ip;
            if (Ip <= 1)
            { // if select again
                break;
            }
            if (Ip2 == 2) // start if detele item
            {
                // printf("Selete item\nDumplings = 1        Water = 4  \n", S1, W1);
                // printf("steamed bun = 2     Lemonade = 5 \n", S2, W2);
                // printf("Bread = 3            cola = 6  \n", S3, W3);
                printf("Hi");
            }
        } while (Ip == 2);

    } while (Ip == 1);

    do
    {
        printf("Bill Total = %d\n Input Money : ", sum);
        scanf("%d", &MI1);

        int nc, mc;
        int M500 = 50, M100 = 50, M50 = 50, M20 = 50, M10 = 50, M5 = 50, M1 = 50;

        if (MI1 == sum)
        {
            printf("Thank you <3");
            break;
        }
        else if (MI1 < sum)
        {
            while (MI1 != sum && MI2 + MI1 < sum)
            {
                nc = sum - MI1;
                printf("Bill Total left= %d\nInput Money : ", nc);
                scanf("%d", &MI2);
                MI1 += MI2;
                if (MI1 == sum)
                {
                    printf("Thank you <3");
                }
            }
        }
        else if (MI1 > sum)
        {
            printf("your change = %d", MI1 - sum);
            do
            {
                mc = MI1 - sum;
                if (mc >= 500)
                {
                    printf("\n500 baht");
                    sum -= 500;
                    M500--;
                }
                else if (mc >= 100)
                {
                    /* code */
                }

            } while (mc != 0);
        }

    } while (Ip);

    return 0;
} // end main function