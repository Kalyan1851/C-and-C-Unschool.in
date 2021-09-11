#include <stdio.h>
#include <string.h>
#include <conio.h>


struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int n, in, qu;
    printf ("Enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level:
    printf ("Number of items to be ordered: ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 11 : {
        printf ("Enter the quantity of Cofee: 1. small  2. large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("No. of quantity: \n");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (99*qu);

        else p[order_count].cost += (199*qu);
        break;
    }
    case 22 :{
        printf ("Enter the quantity of Biscuits: 1. 3  2. 6\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("No. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (49*qu);

        else  p[order_count].cost += (99*qu);

        break;
    }
    case 33 :{
        printf ("Enter the quantity of Choco Lava: 1. small  2. medium  3. large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("No. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (89*qu);

        else if (i==2) p[order_count].cost += (169*qu);

        else  p[order_count].cost += (229*qu);

        break;
    }
    case 44 :{
        printf ("Enter the quantity of Nachos: 1. small  2. med  3. large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (69*qu);

        else if (i==2) p[order_count].cost += (139*qu);

        else  p[order_count].cost += (249*qu);

        break;
    }
    case 55 :{
        printf ("Quantity of Samosa: 1. medium  2. large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (15*qu);

        else p[order_count].cost += (25*qu);

        break;
    }
    case 66 :{
        printf ("Quantity of Chicken Biryani: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (199*qu);

        else p[order_count].cost += (499*qu);

        break;
    }
    case 77 : {
        printf ("250 g of Chicken Kebabs\n");

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (199*qu);
        break;
    }
    case 88 : {
        printf ("250 ml of Shakes\n");

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (199*qu);
        break;
    }
    case 99 : {
        printf ("250 g of Spring Rolls\n");

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (99*qu);
        break;
    }
    case 00 :{
        printf ("Enter the size of Pepsi: 1. 250ml  2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (19*qu);

        else p[order_count].cost += (29*qu);
        break;
    }
    default : {
        printf ("Invalid selection please try again\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %drs.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All orders served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("..................................MENU....................................\n");

    printf("Item Code#   Description                Size                     Price(tk)\n");

    printf("[11]         Cofee                      s/l                       99/199\n");
    printf("[22]         Biscuits                   3/6                       49/99\n");
    printf("[33]         Choco lava                 s/m/l                     89/169/229\n");
    printf("[44]         Nachos                     s/m/l                     69/139/249\n");
    printf("[55]         samosa                     s/l                       15/25\n");
    printf("[66]         Chicken Biryani            Half/Full                 199/499\n");
    printf("[77]         Chicken Kebabs             Full                      199\n");
    printf("[88]         Shakes                     250ml                     199\n");
    printf("[99]         Spring Rolls               250g                      99\n");
    printf("[00]         Pepsi                      250/500ml                 19/29\n\n");

}
int main ()
{
    printf ("\t\t  ***Welcome To the Brew Buzz***\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                system ("COLOR 4");
                printf ("We are closed come by again\n\n\n");
                return 0;
            }
        }
    }
}
