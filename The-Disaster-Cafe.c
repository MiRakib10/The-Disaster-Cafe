#include <stdio.h>
#include <string.h>
#include <conio.h>

void design()
{

   int i, j, n=10;
   for(i=n/2; i<=n; i+=2)
   {
       for(j=1; j<n-i; j+=2)
       {
           printf(" ");
       }

       for(j=1; j<=i; j++)
       {
           printf("*");
       }

       for(j=1; j<=n-i; j++)
       {
           printf(" ");
       }

       for(j=1; j<=i; j++)
       {
           printf("*");
       }

       printf("\n");
   }

   for(i=n; i>=1; i--)
   {
       for(j=i; j<n; j++)
       {
           printf(" ");
       }

       for(j=1; j<=(i*2)-1; j++)
       {
           printf("*");
       }

  printf("\n");
   }
   printf("\n\n");
   return ;
}

void design2()
{
  int n, c, k;

  n = 5;

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= n-k; c++)
      printf(" ");

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf(" ");

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");
  }

  printf("\nThank you for ordering\nWe appreciate you and hopefully you are satisfied with are services\nKeep glowing like the diamond above\nStay Home Stay Safe\n");
  return ;
}


//The following part is for displaying menu and updating the quantity and price of each items
int total=0, k=0; //These two are global variables of this program
struct menu
{

char day[50];
char food[50];
int food_price;
int a;
char drink[50];
int drink_price;
int b;
char set_menu[500];
int set_menu_price;
char dessert[50];
int dessert_price;
int c;
char special_items[50];
int st_price;
}b[11], c[8], s[4], d[6], t[4]; //global declaration of array of structure

void finalmenu()
{
    printf("\n\t\t\t\t\t\t\t\tFood Items\n\n");
    for(int i=0; i<11;i++)
    {
        fflush(stdin);
        printf("%d) %s\t Quantity Available =  %d\t Amount = %d TK\n", i+1, b[i].food, b[i].a,  b[i].food_price);

    }

    printf("\n\n");
    printf("\t\t\t\t\t\t\t\tDrink Items\n\n");
    for(int i=0; i<8;i++)
    {
        fflush(stdin);
        printf("%d) %s\t\t Quantity Available =  %d\t Amount = %d TK\n", i+1, c[i].drink,  c[i].b,  c[i].drink_price);
    }

    printf("\n\n");
    printf("\t\t\t\t\t\t\t\tSet Menu\n\n");
    for(int i=0; i<4;i++)
    {
        fflush(stdin);
        printf("\n%d) %s\n\t\t\t\t\t\t\t\t\t Amount = %d TK\t\n", i+1, s[i].set_menu, s[i].set_menu_price);
    }

    printf("\n\n");
    printf("\t\t\t\t\t\t\t\tDesserts and Appetizers\n\n");
    for(int i=0; i<6;i++)
    {
        fflush(stdin);
        printf("%d) %s\t\t Quantity Available =  %d\t Amount = %d TK\n", i+1, d[i].dessert, d[i].c,  d[i].dessert_price);
    }

    printf("\n\n");
    printf("\t\t\t\t\t\t\t\tSpecial items\n\n");
    for(int i=0; i<4;i++)
    {
        fflush(stdin);
        printf("%d) %s\t\t  Amount = %d TK\n", i+1, t[i].special_items, t[i].st_price);
    }
}
void menu(int *a)
{
    int count;

    strcpy(b[0].food, "Burger      ");
    b[0].a = 50;
    b[0].food_price = 250;

    strcpy(b[1].food, "Pizza       ");
    b[1].a = 50;
    b[1].food_price = 1000;

    strcpy(b[2].food, "Sandwich    ");
    b[2].a = 50;
    b[2].food_price = 150;

    strcpy(b[3].food, "Pasta       ");
    b[3].a = 20;
    b[3].food_price = 250;


    strcpy(b[4].food, "Thai soup   ");
    b[4].a = 50;
    b[4].food_price = 250;

    strcpy(b[5].food, "Chicken Fry ");
    b[5].a = 50;
    b[5].food_price = 120;

    strcpy(b[6].food, "Chow Mein   ");
    b[6].a = 20;
    b[6].food_price = 300;

    strcpy(b[7].food, "Sub Sandwich");
    b[7].a = 20;
    b[7].food_price = 180;

    strcpy(b[8].food, "Shawarma    ");
    b[8].a = 20;
    b[8].food_price = 150;

    strcpy(b[9].food, "Nachos    ");
    b[9].a = 50;
    b[9].food_price = 170;

    strcpy(b[10].food, "Tacos      ");
    b[10].a = 50;
    b[10].food_price = 150;


    strcpy(c[0].drink, "Orange Juice       ");
    c[0].b = 10;
    c[0].drink_price=120;

    strcpy(c[1].drink, "Mango Juice         ");
    c[1].b = 10;
    c[1].drink_price=150;

    strcpy(c[2].drink, "Oreo Milk Shake     ");
    c[2].b = 10;
    c[2].drink_price=140;

    strcpy(c[3].drink, "Strawberry Milkshake");
    c[3].b = 10;
    c[3].drink_price=190;

    strcpy(c[4].drink, "Cold coffee         ");
    c[4].b = 30;
    c[4].drink_price= 120;


    strcpy(c[5].drink, "Pepsi               ");
    c[5].b = 10;
    c[5].drink_price=40;

    strcpy(c[6].drink, "Coca Cola           ");
    c[6].b = 10;
    c[6].drink_price=40;

    strcpy(c[7].drink, "Fanta               ");
    c[7].b = 10;
    c[7].drink_price=40;


    strcpy(s[0].set_menu, "Ramadan Healthy Platter:\n\t\t\t\t\t\t 2 Dates,2 Apples,2 Papayas,1 Alur Chop,1 Beguni,1 Piaju,Chola Bhuna,2 Jalebi,Cashew Nut Salad,Lacchi & Water");
    s[0].set_menu_price= 650;
    strcpy(s[1].set_menu, "Dinner Platter:\n\t\t\t\t\t\t Egg Fried Rice,Vegetable,Chicken Curry,Chicken Fry,Drink");
    s[1].set_menu_price= 350;
    strcpy(s[2].set_menu, "Lunch Platter:\n\t\t\t\t\t\t Fried Rice,Vegetable,Chilli Beef Curry,Chicken Curry,Chicken fry,Drink");
    s[2].set_menu_price= 450;

    strcpy(s[3].set_menu, "Kids Platter:\n\t\t\t\t\t\t 1 Chocolate  Bun,2 Chicken Fries,Large French Fries,1 Ice cream");
    s[3].set_menu_price= 250;


    strcpy(d[0].dessert, "French Fries      ");
    d[0].c = 10;
    d[0].dessert_price=100;

    strcpy(d[1].dessert, "Cheesy French Fries");
    d[1].c = 10;
    d[1].dessert_price=150;

    strcpy(d[2].dessert, "Vanilla cake      ");
    d[2].c = 10;
    d[2].dessert_price=100;

    strcpy(d[3].dessert, "Chocolate cake    ");
    d[3].c = 10;
    d[3].dessert_price=190;

    strcpy(d[4].dessert, "Ice Cream         ");
    d[4].c = 60;
    d[4].dessert_price= 120;
    strcpy(d[5].dessert, "Firni             ");
    d[5].c = 30;
    d[5].dessert_price= 120;


    strcpy(t[0].special_items, "Salmon Cuisine           ");

    t[0].st_price=2000;

    strcpy(t[1].special_items, "Crab Masala              ");

    t[1].st_price=1000;

    strcpy(t[2].special_items, "Angus Beef Steak With Gold");

    t[2].st_price=3000;

    strcpy(t[3].special_items, "Cheesy Bites              ");

    t[3].st_price=500;


if(*a==0)
{
	int  x;
	x=1000;
	printf("\n\t\t\t\t\t\tWelcome Administrator\n\n");
	while(x!=0)
    {

        printf("1) Update Quantity and price of food\n");
        printf("2) Update Quantity and price of drink\n");
        printf("3) Update Quantity and price of appetizers and desserts\n");
        printf("4) Update price of set menu\n");
        printf("5) Update price of special\n");
        printf("Enter 0 to go back to the previous page and display menu\n");

        printf("Enter option: ");
        scanf("%d", &x);

        switch(x)
        {
          case 1:

            for(int i=0;i<11; i++)
            {
                printf("\n%d)  %s\n", i+1, b[i].food);
            }

            scanf("%d", &count);
            for(int i=0;i<11; i++)
            {

                if(count==i+1)
                {
                    printf("Enter new quantity for the item\n");
                    scanf("%d",&b[i].a);
                    printf("Enter new price for the item\n");
                    scanf("%d", &b[i].food_price);

                }

            }break;
          case 2:

                for(int i=0;i<8; i++)
                {
                    printf("\n%d)  %s\n", i+1, c[i].drink);
                }

                scanf("%d", &count);
                for(int i=0;i<8; i++)
                {

                    if(count==i+1)
                    {
                        printf("Enter new quantity for the item\n");
                        scanf("%d",&c[i].b);
                        printf("Enter new price for the item\n");
                        scanf("%d",&c[i].drink_price);
                    }
                }break;
          case 3:

                for(int i=0;i<6; i++)
                {
                    printf("\n%d)  %s\n", i+1, d[i].dessert);
                }

                scanf("%d", &count);
                for(int i=0;i<6; i++)
                {

                    if(count==i+1)
                    {
                        printf("Enter new quantity for the item\n");
                        scanf("%d",&d[i].c);
                        printf("Enter new price for the item\n");
                        scanf("%d", &d[i].dessert_price);

                    }
                }break;
            case 4:

                for(int i=0;i<4; i++)
                {
                    printf("\n%d)  %s\n", i+1, s[i].set_menu);
                }

                scanf("%d", &count);
                for(int i=0;i<4; i++)
                {

                    if(count==i+1)
                    {
                        printf("Enter new price for the item\n");
                        scanf("%d", &s[i].set_menu_price);

                    }
                }break;
            case 5:

                for(int i=0;i<4; i++)
                {
                    printf("\n%d)  %s\n", i+1, t[i].special_items);
                }

                scanf("%d", &count);
                for(int i=0;i<4; i++)
                {

                    if(count==i+1)
                    {
                        printf("Enter new price for the item\n");
                        scanf("%d", &t[i].st_price);

                    }
                }break;

            default:
                printf("Incorrect Input");
            }
      }

    }
    system("CLS");
    finalmenu();
    printf("Press any button to go back to the main page\n");
    getch();
    system("CLS");
}

//The following part is for admin login and accessing the menu in order to change quantity and price of items
struct admin_login
{
    char CName[50];
    char Password[50];
};
void admin()
{
    int x, search=0;
    char n[50], y[50];
    struct  admin_login p[3];
    strcpy(p[0].CName, "Rashik");
    strcpy(p[0].Password, "Nilakash12");
    strcpy(p[1].CName, "MI Rakib");
    strcpy(p[1].Password, "Shadakash12");
    strcpy(p[2].CName, "Aisha");
    strcpy(p[2].Password, "Shobujakash12");

    printf("\t\t\t\t Administrative Login\n");

    printf("Please enter your Username: \n");
    scanf("\n");
    gets(n);
    printf("Please enter your Password: \n");
    scanf("\n");
    gets(y);

    for( int i=0; i<3; i++)
    {
        if(!(strcmp(p[i].CName, n)) &&  !(strcmp(p[i].Password, y)))
            {
                int a=0;
                menu(&a);
                search++;
                break;
            }
    }

    if(search==0)
    {
         printf("Invalid credentials (Warning unauthorized access will be reported)\n");
    }
    return;
}

//The following part is for customer sign up,login and accessing the order function to order items
struct emp
{
char g_name[30];
char sur_name[30];
char user_id[20];
char password[17];
char email[50];
char phone[12];
}e[100];

int i=0,i2=0;//These are global variables, here pin is also used in slip function
char *pin;
void loadFile()
{
    FILE *c;
    c = fopen("customerinfo.txt", "r");
    if(c==NULL)
    {
        return;
    }
    int k=0;
    while(!feof(c))
    {
        fscanf(c,"%s %s %s",e[k].user_id, e[k].password, e[k].phone);
        k=k+1;
        i2=k;
    }
    fclose(c);
    return;
}
void registration()
{
    loadFile();
    i=i2;
    FILE *p;
    p = fopen("customerinfo.txt", "w");

    printf("Enter your given name: "); scanf("%s", e[i].g_name);
    printf("Enter your surname: "); scanf("%s", e[i].sur_name);
    printf("Enter preferred username: "); scanf("%s", e[i].user_id);
    printf("Enter a password(No more than 16 characters): "); scanf("%s", e[i].password);
    printf("Enter your email: "); scanf("%s", e[i].email);
    printf("Enter your contact number: "); scanf("%s", e[i].phone);

    for(int x=0; x<i+1; x++)
    {
    fprintf(p,"%s %s %s\n", e[x].user_id, e[x].password, e[x].phone);
    fflush(stdin);
    }
    fclose(p);
    printf("\n\nIn order to access menu login with your username and password\n\n");
    printf("Press any button to continue....");
    getch();
    system("CLS");
    customer_login();
return;
}

void customer_login()
{
    loadFile();
    char username[20], password[17];
    int l=0;

    printf("Username: ");
    scanf("%s", &username);
    printf("Password: ");
    scanf("%s", &password);

    if(i2!=0)
    {
        for(int x=0; x<i2; x++)
        {
            if(strcmp(username,e[x].user_id)==0 && strcmp(password, e[x].password)==0)
            {
                printf("Welcome Dear Customer :)\n");
                l=-1;
                printf("\n\n");
                pin=e[x].phone;
                order();
                slip();
                break;
            }

        }
        if(l!=-1)
        {
          printf("Please enter correct Username and Password\n");
          printf("Press any button to continue....");
          getch();
        }
    }
    else
    {
        printf("Please sign up first!\n");
    }
    return;
}

void customer()
{
    int select;

    printf("Press 1 for Sign up \nPress 2 for Log in\n");
    scanf("%d", &select);
    if(select==1)
    {
        system("CLS");
        registration();
    }
    else if(select==2)
    {
        system("CLS");
        customer_login();
    }
    return ;
}

//The following part is to select and order items and call slip of the items selected
void Calculator( int quantity, int price)
{
	int sum;
	sum = quantity*price;
	total = total+sum;
}

struct user_preference
{
	char preferreditem[5000];
	int quantity;
	int tk;
}Pre[5000];
void order()
{
	int choice, choice2, choice3;
	while(choice!=6)
    {
        printf("Press 1 to select Fast Food Items\n");
        printf("Press 2 to select Drink Items\n");
        printf("Press 3 to select Set Menu Items\n");
        printf("Press 4 to select Dessert Items\n");
        printf("Press 5 to select Special Items\n");
        printf("Press 6 to exit \n");
        choice2 = 20;
        scanf("%d", &choice);
        if(choice==1)
        {
            system("CLS");
            printf("These are the fast food items currently available\n");
            for(int i=0; i<11; i++)
                {
                    if(b[i].a!=0)
                    {
                        printf("Option %d:   %s  Price: %d\n", i+1,  b[i].food, b[i].food_price);

                    }
                }
            printf("\n");
            while(choice2!=-1)
                {
                    printf("Enter 0 to go back to the previous page\n");
                    printf("Select appropriate option (no.):  ");
                    scanf("%d", &choice2);
                    choice2--;
                    for( int j=0; j<11; j++)
                    {
                        if(choice2==j && b[j].a!=0)
                        {
                            printf("Enter Quantity: ");
                            scanf("%d", &choice3);
                            if(choice3<=b[j].a)
                            {
                                Calculator( choice3, b[j].food_price);
                                printf("Quantity has been added to your inventory\n\n");
                                strcpy(Pre[k].preferreditem, b[j].food);
                                Pre[k].quantity=choice3;
                                Pre[k].tk = b[j].food_price;
                                k++;
                                b[j].a = b[j].a-choice3;
                            }
                            else printf("Sorry this amount of quantity is unavailable\n");
                        }
                    }
                }
                system("CLS");
        }
        else if(choice==2)
            {
                system("CLS");
                printf("These are the drink items currently available\n");
                for(int i=0; i<8; i++)
                {
                    if(c[i].b!=0)
                    {
                        printf("Option %d:   %s  Price: %d\n", i+1,  c[i].drink, c[i].drink_price);
                    }
                }
                printf("\n");
                while(choice2!=-1)
                {
                    printf("Enter 0 to go back to the previous page\n");
                    printf("Select appropriate option (no.):  ");
                    scanf("%d", &choice2);
                    choice2--;
                        for( int j=0; j<8; j++)
                        {
                            if(choice2==j && c[j].b!=0)
                            {
                                printf("Enter Quantity: ");
                                scanf("%d", &choice3);
                                if(choice3<=c[j].b)
                                {
                                    Calculator( choice3, c[j].drink_price);
                                    printf("Quantity has been added to your inventory\n\n");
                                    strcpy(Pre[k].preferreditem, c[j].drink);
                                    Pre[k].quantity=choice3;
                                    Pre[k].tk=c[j].drink_price;
                                    k++;
                                    c[j].b = c[j].b-choice3;
                                }
                                else printf("Sorry this amount of quantity is unavailable\n");
                            }

                        }
                    }
                    system("CLS");
                }
                else if(choice==3)
                {
                    system("CLS");
                    printf("These are the set menu items currently available\n");
                    for(int i=0; i<4; i++)
                    {
                        printf("Option %d:   %s\n  Price: %d\n", i+1,  s[i].set_menu, s[i].set_menu_price);
                    }
                    printf("\n");
                    while(choice2!=-1)
                    {
                        printf("Enter 0 to go back to the previous page\n");
                        printf("Select appropriate option (no.):  ");
                        scanf("%d", &choice2);
                        choice2--;
                        for( int j=0; j<4; j++)
                        {
                            if(choice2==j)
                            {
                                printf("Enter Quantity: ");
                                scanf("%d", &choice3);
                                Calculator( choice3,  s[j].set_menu_price );
                                printf("Quantity has been added to your inventory\n\n");
                                char rh[]="Ramadan Healthy Platter", dp[]="Dinner Platter", lp[]="Lunch Platter", kp[]="Kids Platter";
                                if(choice2==0) strcpy(Pre[k].preferreditem, rh);
                                else if(choice2==1) strcpy(Pre[k].preferreditem, dp);
                                else if(choice2==2) strcpy(Pre[k].preferreditem, lp);
                                else strcpy(Pre[k].preferreditem, kp);
                                Pre[k].quantity=choice3;
                                Pre[k].tk=s[j].set_menu_price;
                                k++;
                            }
                        }
                    }
                    system("CLS");
                }
                else if(choice==4)
                {
                    system("CLS");
                    printf("These are the appetizer and dessert items currently available\n");
                    for(int i=0; i<6; i++)
                    {
                        if(d[i].c!=0)
                        {
                            printf("Option %d:   %s   Price: %d\n", i+1,  d[i].dessert,d[i].dessert_price);
                        }
                    }
                    printf("\n");
                    while(choice2!=-1)
                    {
                        printf("Enter 0 to go back to the previous page\n");
                        printf("Select appropriate option (no.):  ");
                        scanf("%d", &choice2);
                        choice2--;
                        for( int j=0; j<6; j++)
                        {
                            if(choice2==j && d[j].c!=0)
                            {
                                printf("Enter Quantity: ");
                                scanf("%d", &choice3);
                                if(choice3<=d[j].c)
                                {
                                    Calculator( choice3, d[j].dessert_price);
                                    printf("Quantity has been added to your inventory\n\n");
                                    strcpy(Pre[k].preferreditem, d[j].dessert);
                                    Pre[k].quantity=choice3;
                                    Pre[k].tk=d[j].dessert_price;
                                    k++;
                                    d[j].c = d[j].c-choice3;
                                }
                                else printf("Sorry this amount of quantity is unavailable\n\n");
                            }
                        }
                    }
                    system("CLS");
                }
                else if(choice==5)
                {
                    system("CLS");
                    printf("These are the special items currently available\n");
                    for(int i=0; i<4; i++)
                    {
                        printf("Option %d:   %s   Price: %d\n", i+1,  t[i].special_items,t[i].st_price);
                    }
                    printf("\n");
                    while(choice2!=-1)
                    {
                        printf("Enter 0 to go back to the previous page\n");
                        printf("Select appropriate option (no.):  ");
                        scanf("%d", &choice2);
                        choice2--;
                        for(int j=0; j<4; j++)
                        {
                            if(choice2==j)
                            {
                                printf("Enter Quantity: ");
                                scanf("%d", &choice3);
                                Calculator( choice3, t[j].st_price);
                                printf("Quantity has been added to your inventory\n\n");
                                strcpy(Pre[k].preferreditem, t[j].special_items);
                                Pre[k].quantity=choice3;
                                Pre[k].tk=t[j].st_price;
                                k++;
                            }
                        }
                    }
                    system("CLS");
                }
    }
    return;
}

void slip()
{
    int x;
    double d;
    char y[12], c[100];
    system("CLS");
    if(total!=0)
        {
            printf("You have selected:\n");
            for(int x=0; x<k; x++)
            {
                printf("%d) Item: %s    Quantity selected: %d       Price of each: %dTK\n", x+1, Pre[x].preferreditem, Pre[x].quantity, Pre[x].tk);
            }
            if(total>=1000 && total<2500)
            {
                d = 0.97*total; //3 percent discount
                printf("Congratulations you have received 3 percent discount!!!\n\n");
                printf("\n\tYour Total Bill is %.2lf Tk. Please Pay before you leave!\n ", d);
            }
            else if(total>2500)
            {
                d = 0.90*total; //10 percent discount
                printf("Congratulations you have received 10 percent discount!!!\n\n");
                printf("\n\tYour Total Bill is %.2lf Tk. Please Pay before you leave!\n ", d);
            }

            else
            {
                printf("\n\tYour Total Bill is %d Tk. Please Pay before you leave!\n ", total);
            }
            printf("Enter your address: ");
            scanf("\n");
            gets(c);

            printf("Payment Process:\n1)Cash on Delivery\n2)Online Transaction(Bkash)\n");
            printf("Select payment option: ");
            scanf("%d", &x);
            if(x==1)
            {
                printf("Fasten your seatbelt!!!!!!\nFood is being processed and will be delivered to this address: ");
                puts(c);
                printf("If you don’t pay we will permanently ban you from receiving our services\n");
                printf("Press any button to continue....\n");
                getch();
                system("CLS");
                design2();

            }
             else if(x==2)
            {
                printf("Enter your phone number: ");
                scanf("\n");
                gets(y);
                if(strcmp(pin,y)==0)
                {
                printf("Amount received\n");
                printf("Fasten your seatbelt!!!!!!\nFood is being processed and will be delivered to this address: ");
                puts(c);
                printf("Press any button to continue....\n");
                getch();
                system("CLS");
                design2();
                }
                else ("Please try again later\n");
            }
        }
        else printf("You have no inventory\n");
        printf("Press any button to continue.....");
        total=0;
        getch();
        system("CLS");
        return;
}


int main()
{
    int y;
    design();

    printf("           :--------------------------------------:\n");
    printf("           | ^^^^Welcome to The Disaster Cafe^^^^ |\n");
    printf("           :--------------------------------------:\n\n");

    printf("Press any button to continue....");
    getch();
    system("CLS");
    while(y!=4)
    {
        printf("Select one of the following: \n");
        printf("1) Admin Login\n");
        printf("2) Customer Login\n");
        printf("3) Display Menu\n");
        printf("4) Exit\n");


        scanf("%d", &y);
        switch(y)
        {
        case 1:
            system("CLS");
            admin();
            break;
        case 2:
            system("CLS");
            customer();
            printf("You have been logged out!\n");
            break;
        case 3:
            system("CLS");
            int a = 1;
            menu(&a);
            break;
        case 4:
            system("CLS");
            return 0;
        default:
            printf("Invalid input\n");
    }
    }
    return 0;
}


