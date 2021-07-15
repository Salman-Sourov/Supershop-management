#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>


struct product_inf
{
    char name[100];
    float id;
    float price;

};

int i;

struct customer_info
{

    char name[100];
    char date[100];
    char mobile[12];


};



float array_prod[20];

/*
soaps = 0;        headphones = 4;
face wash = 1;    rice=5;
                  oil=6;
detergents = 2;   vegetables = 7;

chargers = 3;


*/




void clrscr()
{
    system("cls||clear");
}


//User defined function declaration


int products();
double payment();
int customer();

//User defined sub menus



//under products

int home_products();

//under home products

int soaps();
int face_wash();
int detergents();
int rice();
int oil();
int fruit_vegetable();


//Under electronics
int electronics();
int chargers();
int headphones();



//Under payment





//under customer menu()

int customer_inf();
void add_customer(float sum,int cp,float due);
void view_customer();



int main ()
{
    clrscr();

    int array_i;

    for(array_i = 0; array_i<20; array_i++)
    {
        array_prod[array_i] = 0;
    }



    int input;

    printf("                              Hello ADMIN\n                          SOUROV Super Shop\n===========================================================================");
    printf("                                                 -Products\n                         -Payment/Billing\n                         -Customer information\n");
    printf("\n");
    printf(" Press 1 for Product Menu\n Press 2 for Checkout\n Press 3 for Customer information \n Press 0 for terminate program\n");
    printf(" \n Select Your Option : ");
    scanf("%d", &input);

    switch(input)
    {
    case 0:
    {
        exit(0);
    }

    case 1:

    {
        clrscr();
        products();
    }
    break;
    case 2:
    {
        clrscr();
        payment();
    }

    case 3:

    {
        clrscr();
        customer();
    }
    break;

    default:
        printf("Enter a valid number");
        Sleep(250 );
        main();

    }


}


int products()

{
    clrscr();
    int input;
    printf("     ***  PRODUCT MENU  ***\n\n");
    printf("\nPress 1 -Home products\nPress 2 -Electronics\npress 3 -Checkout\nPress 4 -Previous\nPress 0 -Return to main menu\n");
    printf("\nSelect Your Option : ");
    scanf("%d", &input);

    switch (input)
    {
    case 0:
    {
        clrscr();
        main();
    }

    case 1:
    {
        clrscr();
        home_products();
    }
    break;

    case 2:
    {
        clrscr();
        electronics();
    }
    break;
    case 3:
    {
        clrscr();
        payment();
    }
    case 4:
    {
        clrscr();
        main();
    }
    break;

    default:
    {
        clrscr();
        printf("Wrong choice. Try again");
        products();
    }
    break;
    }

}

int home_products()
{
    clrscr();
    int input;
    printf("   ***HOME PRODUCTS***   \n");
    printf("\npress 1 -Soaps\npress 2 -Face Wash\npress 3 -Detergents\npress 4 -Rice\npress 5 -oil\npress 6 -Fruit/Vegetables\npress 8 -Product Menu\npress 9 -Checkout");

    printf("\n\nSelect Your Option : ");
    scanf("%d", &input);


    switch(input)
    {
    case 9:
    {
        clrscr();
        payment();
    }
    break;
    case 8:
    {
        clrscr();
        products();
    }
    break;

    case 1:
    {
        clrscr();
        soaps();
    }
    break;

    case 2:
    {
        clrscr();
        face_wash();
    }
    break;

    case 3:
    {
        clrscr();
        detergents();
    }
    break;
    case 4:
    {
        clrscr();
        rice();
    }
    break;
    case 5:
    {
        clrscr();
        oil();
    }
    break;
    case 6:
    {
        clrscr();
        fruit_vegetable();
    }
    break;

    default:
    {
        clrscr();
        printf("Wrong choice. Try again");
        home_products();
    }
    break;
    }


}

int oil()
{
    clrscr();
    int input, input2, buy_oil ;

    struct product_inf s[5];

    s[0].id = 6100;
    s[0].price = 700;
    s[1].id = 6101;
    s[1].price = 140;
    s[2].id = 6102;
    s[2].price = 896;
    s[3].id = 6103;
    s[3].price = 250;
    s[4].id = 6104;
    s[4].price = 363;
    s[5].id = 6105;
    s[5].price = 275;



    printf("Name                                 Product code           Price         Tax \n");
    printf("01.ACI NUTRILIFE RICE BRAN OIL 4LTR    6100                 700tk          0% \n");
    printf("02.DABUR AMLA HAIR OIL 200ML           6101                 140tk          0% \n");
    printf("03.AMBROSIA CORN OIL 3LTR              6102                 896tk          0% \n");
    printf("04.JOHNSONS BABY OIL IND 200ML         6103                 250tk          0% \n");
    printf("05.AMBASSADOR OLIVE OIL 500ML          6104                 363tk          0% \n");
    printf("06.SAFFOLA ACTIVE EDIBLE OIL 1 LTR     6105                 275tk          0% \n");

    int i;
    float quan;
    char ch;

    printf("\nEnter 0 for previous menu\n");
    printf("Enter 1 for product menu\n");
    printf("Press any other key to start BILLING....\n");


    ch = getche();
    if(ch == '0')
    {
        home_products();
    }
    else if(ch == '1')
    {
        products();
    }

    else
        while(1)
        {


            printf("\n\nEnter Product Code:");
            scanf("%d", &buy_oil);

            for(i=0; i<6; i++)
            {
                if(s[i].id == buy_oil)
                {
                    printf("Enter quantity:");
                    scanf("%f", &quan); ///Quan = Quantity
                    break;
                }
                else if(i!=5)
                {
                    continue;
                }
                else
                {
                    printf("Wrong Code");
                    break;
                }
            }
            array_prod[6] += (s[i].price*quan);

            printf("\nDo you want to buy more products?\n");
            printf("\nPress 0 -to stay\nPress 1 -Home products\nPress 2 -Electronics\nPress 9 -Checkout\n");
            printf("Press:");
            scanf("%d", &input2);

            if(input2 == 0)
            {
                continue;
            }
            else if(1 == input2)

            {
                clrscr();
                home_products();
                break;
            }

            else if(2 == input2)
            {
                clrscr();
                electronics();
                break;
            }
            else if(9== input2)
            {
                clrscr();
                payment();
                break;
            }

        }

}


int fruit_vegetable()
{
    clrscr();
    int input, input2, buy_fruit_vegetable;

    struct product_inf s[5];

    s[0].id = 7100;
    s[0].price = 10;
    s[1].id = 7101;
    s[1].price = 29;
    s[2].id = 7102;
    s[2].price = 110;
    s[3].id = 7103;
    s[3].price = 50;
    s[4].id = 7104;
    s[4].price = 50;
    s[5].id = 7105;
    s[5].price = 180;



    printf("Name                                 Product code           Price         Tax \n");
    printf("01.BANANA RIPE [SAGAR] PCS             7100                 10tk          0% \n");
    printf("02.CARROT [GAJOR] 1KG                  7101                 29tk          0% \n");
    printf("03.GARLIC LOCAL BULK 1KG               7102                 110tk          0% \n");
    printf("04.TOMATO LOCAL BULK                   7103                 50tk          0% \n");
    printf("05.ONION LOCAL BULK REGULAR 1KG        7104                 50tk          0% \n");
    printf("06.APPLE FUJI BULK 1KG                 7105                 180tk          0% \n");

    int i;
    float quan;
    char ch;

    printf("\nEnter 0 for previous menu\n");
    printf("Enter 1 for product menu\n");
    printf("Press any other key to start BILLING....\n");


    ch = getche();
    if(ch == '0')
    {
        home_products();
    }
    else if(ch== '1')
    {
        products();
    }

    else
        while(1)
        {


            printf("\n\nEnter Product Code:");
            scanf("%d", &buy_fruit_vegetable);

            for(i=0; i<6; i++)
            {
                if(s[i].id == buy_fruit_vegetable)
                {
                    printf("Enter quantity:");
                    scanf("%f", &quan); ///Quan = Quantity
                    break;
                }
                else if(i!=5)
                {
                    continue;
                }
                else
                {
                    printf("Wrong Code");
                    break;
                }
            }
            array_prod[7] += (s[i].price*quan);

            printf("\nDo you want to buy more products?\n");
            printf("\nPress 0 -to stay\nPress 1 -Home products\nPress 2 -Electronics\nPress 9 -Checkout\n");
            printf("Press:");
            scanf("%d", &input2);

            if(input2 == 0)
            {
                continue;
            }
            else if(1 == input2)

            {
                clrscr();
                home_products();
                break;
            }

            else if(2 == input2)
            {
                clrscr();
                electronics();
                break;
            }
            else if(9== input2)
            {
                clrscr();
                payment();
                break;
            }

        }


}

int soaps()
{
    clrscr();
    int input, input2, buy_soap;

    struct product_inf s[14];

    s[0].id = 1100;
    s[0].price = 25;
    s[1].id = 1101;
    s[1].price = 25;
    s[2].id = 1102;
    s[2].price = 30;
    s[3].id = 1103;
    s[3].price = 40;
    s[4].id = 1104;
    s[4].price = 20;
    s[5].id = 1105;
    s[5].price = 40;
    s[6].id = 1106;
    s[6].price = 35;
    s[7].id = 1107;
    s[7].price = 23;
    s[8].id = 1108;
    s[8].price = 28;
    s[9].id = 1109;
    s[9].price = 18;
    s[10].id = 1110;
    s[10].price = 21;
    s[11].id = 1111;
    s[11].price = 70;
    s[12].id = 1112;
    s[12].price = 78;
    s[13].id = 1113;
    s[13].price = 24;


    printf("Name               Product code             Price         Tax \n");
    printf("01.Lux milk soap          1100               25tk          0% \n");
    printf("02.Lux alovera soap       1101               25tk          0% \n");
    printf("03.Lifeboy soap           1102               30tk          0% \n");
    printf("04.Detol soap             1103               40tk          0% \n");
    printf("05.Keya soap              1104               20tk          0% \n");
    printf("06.Savlon soap            1105               40tk          0% \n");
    printf("07.Alovera soap           1106               35tk          0% \n");
    printf("08.KEYA LAUNDRY SOAP      1107               23tk          0% \n");
    printf("09.Tibbet LAUNDRY SOAP    1108               28tk          0% \n");
    printf("10.Wheel LAUNDRY SOAP     1109               18tk          0% \n");
    printf("11.Chaka LAUNDRY SOAP     1110               21tk          0% \n");
    printf("12.Wild Stone SOAP        1111               70tk          0% \n");
    printf("13.Johnsoon baby  SOAP    1112               78tk          0% \n");
    printf("14.Sandelina sendal SOAP  1113               24tk          0% \n");

    int i;
    float quan;
    char ch;

    printf("\nEnter 0 for previous menu\n");
    printf("Enter 1 for product menu\n");
    printf("Press any other key to start BILLING....\n");


    ch = getche();
    if(ch == '0')
    {
        home_products();
    }
    else if(ch== '1')
    {
        products();
    }

    else
        while(1)
        {


            printf("\n\nEnter Product Code:");
            scanf("%d", &buy_soap);

            for(i=0; i<14; i++)
            {
                if(s[i].id == buy_soap)
                {
                    printf("Enter quantity:");
                    scanf("%f", &quan); ///Quan = Quantity
                    break;
                }
                else if(i!=13)
                {
                    continue;
                }
                else
                {
                    printf("Wrong Code");
                    break;
                }
            }
            array_prod[0] += (s[i].price*quan);

            printf("\nDo you want to buy more products?\n");
            printf("\nPress 0 -to stay\nPress 1 -Home products\nPress 2 -Electronics\nPress 9 -Checkout\n");
            printf("Press:");
            scanf("%d", &input2);

            if(input2 == 0)
            {
                continue;
            }
            else if(1 == input2)

            {
                clrscr();
                home_products();
                break;
            }

            else if(2 == input2)
            {
                clrscr();
                electronics();
                break;
            }
            else if(9== input2)
            {
                clrscr();
                payment();
                break;
            }

        }

}

int face_wash()
{
    int input2,input, buy_face;

    float quan;

    struct product_inf face[8];

    face[0].id = 1201 ;
    face[0].price = 225;
    face[1].id = 1202 ;
    face[1].price = 225;
    face[2].id = 1203 ;
    face[2].price = 150;
    face[3].id = 1204 ;
    face[3].price = 200;
    face[4].id = 1205 ;
    face[4].price = 95;
    face[5].id = 1206 ;
    face[5].price = 179;
    face[6].id = 1207;
    face[6].price = 225;
    face[7].id = 1208;
    face[7].price = 115;


    clrscr();

    printf("Name                           Product code           Price           Tax \n");
    printf("01.Garnier Men's face wash            1201               225tk             0%\n");
    printf("02.Garnier Women's face wash          1202               225tk             0% \n");
    printf("03.Ponds face wash                    1203               150tk             0% \n");
    printf("04.Fare and Lovely max face wash      1204               200tk             0% \n");
    printf("05.Himalaya purifying neem face wash  1205                95tk             0% \n");
    printf("06.Ollay face wash                    1206               179tk             0% \n");
    printf("07.Dove face wash                     1207               225tk             0% \n");
    printf("08.fair and handsome face wash        1208               115tk             0% \n");

    char ch;

    printf("\nEnter 0 for previous menu\n");
    printf("Enter 1 for product menu\n");
    printf("Press any other key to start BILLING....\n");


    ch = getche();
    if(ch == '0')
    {
        home_products();
    }
    else if(ch== '1')
    {
        products();
    }

    else
        while(1)
        {



            printf("\n\nEnter Product Code:");
            scanf("%d", &buy_face);

            for(i=0; i<8; i++)
            {
                if(face[i].id == buy_face)
                {
                    printf("Enter quantity:");
                    scanf("%f", &quan); ///Quan = Quantity
                    break;
                }
                else if(i!=7)
                {
                    continue;
                }
                else
                {
                    printf("Wrong code");
                    break;
                }
            }
            array_prod[1] += (face[i].price*quan);

            printf("\nDo you want to buy more products?\n");
            printf("\nPress 0 -to stay\nPress 1 -Home products\nPress 2 -Electronics\nPress 9 -Checkout\n");
            printf("Press:");
            scanf("%d", &input2);

            if(input2 == 0)
            {
                continue;
            }
            else if(1 == input2)

            {
                clrscr();
                home_products();
                break;
            }

            else if(2 == input2)
            {
                clrscr();
                electronics();
                break;
            }
            else if(9== input2)
            {
                clrscr();
                payment();
                break;
            }


        }


}
int detergents()
{
    int input2,input, buy_det;
    float quan;

    struct product_inf det[8];

    det[0].id = 1301 ;
    det[0].price = 50;
    det[1].id = 1302 ;
    det[1].price = 80;
    det[2].id = 1303 ;
    det[2].price = 670;
    det[3].id = 1304 ;
    det[3].price = 72;
    det[4].id = 1305 ;
    det[4].price = 160;
    det[5].id = 1306 ;
    det[5].price = 115;
    det[6].id = 1307 ;
    det[6].price = 45;
    det[7].id = 1308 ;
    det[7].price = 132;

    clrscr();

    printf("Name                           Product code           Price           Tax \n\n01.JET Detergent Powder 200GM/220GM   1301                50tk             0%\n");
    printf("02.Surf excel 500GM                   1302                80tk             0% \n");
    printf("03.Breeze Detergent Powder 2.5KG      1303               670tk             0% \n");
    printf("04.Tibbet Detergent Powder 1KG        1304                72tk             0% \n");
    printf("05.Tide Plus Detergent Powder 1KG     1305               160tk             0% \n");
    printf("06.Rin Detergent Powder 1.5KG         1306               115tk             0% \n");
    printf("07.Chaka Washing Powder 500GM         1307                45tk             0% \n");
    printf("08.Wheel Power White 500GM            1308               132tk             0% \n");

    char ch;

    printf("\nEnter 0 for previous menu\n");
    printf("Enter 1 for product menu\n");
    printf("Press any other key to start BILLING....\n");


    ch = getche();
    if(ch == '0')
    {
        home_products();
    }
    else if(ch== '1')
    {
        products();
    }

    else
        while(1)
        {


            printf("\n\nEnter Product Code:");
            scanf("%d", &buy_det);

            for(i=0; i<8; i++)
            {
                if(det[i].id == buy_det)
                {
                    printf("Enter quantity:");
                    scanf("%f", &quan); ///Quan = Quantity
                    break;
                }
                else if(i!=7)
                {
                    continue;
                }
                else
                {
                    printf("Wrong Code");
                    break;
                }
            }
            array_prod[2] += (det[i].price*quan);

            printf("\nDo you want to buy more products?\n");
            printf("\nPress 0 -to stay\nPress 1 -Home products\nPress 2 -Electronics\nPress 9 -Checkout\n");
            printf("Press:");
            scanf("%d", &input2);

            if(input2 == 0)
            {
                continue;
            }
            else if(1 == input2)

            {
                clrscr();
                home_products();
                break;
            }

            else if(2 == input2)
            {
                clrscr();
                electronics();
                break;
            }
            else if(9== input2)
            {
                clrscr();
                payment();
                break;
            }


        }

}

int rice()
{
    clrscr();
    int input, input2, buy_rice ;

    struct product_inf s[5];

    s[0].id = 5100;
    s[0].price = 224;
    s[1].id = 5101;
    s[1].price = 245;
    s[2].id = 5102;
    s[2].price = 510;
    s[3].id = 5103;
    s[3].price = 250;
    s[4].id = 5104;
    s[4].price = 130;
    s[5].id = 5105;
    s[5].price = 90;



    printf("Name                               Product code             Price         Tax \n");
    printf("01.AARONG MINICATE RICE PACK 5KG       5100                 224tk          0% \n");
    printf("02.NAJIR RICE STANDARD 10KG PACK       5101                 245tk          0% \n");
    printf("03.CHASHI MINICATE RICE PACK 5KG       5102                 510tk          0% \n");
    printf("04.PRAN MINICATE RICE 5KG              5103                 250tk          0% \n");
    printf("05.ORGANIC DHEKI SATA RED RICE  2KG    5104                 130tk          0% \n");
    printf("06. CHINIGURA POLAW RICE PREMIUM 1KG   5105                 90tk           0% \n");

    int i;
    float quan;
    char ch;

    printf("\nEnter 0 for previous menu\n");
    printf("Enter 1 for product menu\n");
    printf("Press any other key to start BILLING....\n");


    ch = getche();
    if(ch == '0')
    {
        home_products();
    }
    else if(ch== '1')
    {
        products();
    }

    else
        while(1)
        {


            printf("\n\nEnter Product Code:");
            scanf("%d", &buy_rice);

            for(i=0; i<6; i++)
            {
                if(s[i].id == buy_rice)
                {
                    printf("Enter quantity:");
                    scanf("%f", &quan); ///Quan = Quantity
                    break;
                }
                else if(i!=5)
                {
                    continue;
                }
                else
                {
                    printf("Wrong Code");
                    break;
                }
            }
            array_prod[5] += (s[i].price*quan);

            printf("\nDo you want to buy more products?\n");
            printf("\nPress 0 -to stay\nPress 1 -Home products\nPress 2 -Electronics\nPress 9 -Checkout\n");
            printf("Press:");
            scanf("%d", &input2);

            if(input2 == 0)
            {
                continue;
            }
            else if(1 == input2)

            {
                clrscr();
                home_products();
                break;
            }

            else if(2 == input2)
            {
                clrscr();
                electronics();
                break;
            }
            else if(9== input2)
            {
                clrscr();
                payment();
                break;
            }

        }

}


int electronics()
{
    clrscr();
    int input;
    printf("    ***ELECTRONICS***    \n");

    printf("\nPress 1 -Headphones\nPress 2 -Chargers\n");
    printf("press 8 -Product Menu\n");
    printf("press 9 -Checkout\n");
    printf("\nSelect Your Option : ");

    scanf("%d", &input);

    switch(input)
    {
    case 1:
    {
        clrscr();
        headphones();
    }
    break;
    case 2:
    {
        clrscr();
        chargers();
    }
    break;
    case 8:
    {
        clrscr();
        products();

    }
    break;
    case 9:
    {
        clrscr();
        payment();
    }
    break;

    default:
    {
        clrscr();
        printf("Wrong choice. Try again");
        electronics();
    }
    break;
    }

}

int headphones()
{
    int input2,input,buy_head;
    float quan;

    struct product_inf head[11];

    head[0].id = 2011 ;
    head[0].price = 990;
    head[1].id = 2012 ;
    head[1].price = 2500;
    head[2].id = 2013 ;
    head[2].price = 750;
    head[3].id = 2014 ;
    head[3].price = 1900;
    head[4].id = 2015 ;
    head[4].price = 2360;
    head[5].id = 2016 ;
    head[5].price = 700;
    head[6].id = 2017 ;
    head[6].price = 1320;
    head[7].id = 2018 ;
    head[7].price = 1410;
    head[8].id = 2019 ;
    head[8].price = 4490;
    head[9].id = 2020 ;
    head[9].price = 800;
    head[10].id = 2021 ;
    head[10].price = 3200;

    printf("Name                    Product code         Price         Tax\n");
    printf("\n");
    printf("\n01.Remax Candy earphone    2011                  990tk         0% ");
    printf("\n02.Apple earpod            2012                 2500tk         0% ");
    printf("\n03.Mi basic                2013                  750tk         0% ");
    printf("\n04.JBL Headphone           2014                 1900tk         0% ");
    printf("\n05.Sony Headphone          2015                 2360tk         0% ");
    printf("\n06.Xiomi Headphone         2016                  700tk         0% ");
    printf("\n07.Remax Candy earphone    2017                 1320tk         0% ");
    printf("\n08.A4tech earphone         2018                 1410tk         0% ");
    printf("\n09.Ferrari earphone        2019                 4490tk         0% ");
    printf("\n10.AWEI earphone           2020                  800tk         0% ");
    printf("\n11.GeniusBlack earphone    2021                 3200tk         0% ");

    char ch;

    printf("\n\nEnter 0 for previous menu\n");
    printf("Enter 1 for product menu\n");
    printf("Press any other key to start BILLING....\n");


    ch = getche();
    if(ch == '0')
    {
        electronics();
    }
    else if(ch== '1')
    {
        products();
    }
    else
        while(1)
        {


            printf("\n\nEnter Product Code:");
            scanf("%d", &buy_head);

            for(i=0; i<11; i++)
            {
                if(head[i].id == buy_head)
                {
                    printf("Enter quantity:");
                    scanf("%f", &quan); ///Quan = Quantity
                    break;
                }
                else if(i!=10)
                {
                    continue;
                }
                else
                {
                    printf("Wrong Code");
                    break;
                }
            }
            array_prod[4] += (head[i].price*quan);

            printf("\nDo you want to buy more products?\n");
            printf("\nPress 0 -to stay\nPress 1 -Home products\nPress 2 -Electronics\nPress 9 -Checkout\n");
            printf("Press:");
            scanf("%d", &input2);

            if(input2 == 0)
            {
                continue;
            }
            else if(1 == input2)

            {
                clrscr();
                home_products();
                break;
            }

            else if(2 == input2)
            {
                clrscr();
                electronics();
                break;
            }
            else if(9== input2)
            {
                clrscr();
                payment();
                break;
            }


        }
}

int chargers()
{
    int input2,input, buy_char;
    float quan;

    struct product_inf charg[6];

    charg[0].id = 2121 ;
    charg[0].price = 200;
    charg[1].id = 2122 ;
    charg[1].price = 250;
    charg[2].id = 2123 ;
    charg[2].price = 250;
    charg[3].id = 2124 ;
    charg[3].price = 500;
    charg[4].id = 2125 ;
    charg[4].price = 180;
    charg[5].id = 2126 ;
    charg[5].price = 120;

    printf("Name                    Product code         Price         Tax n");
    printf("\n");
    printf("\n01.Symphony Charger          2121              200tk         0%   ");
    printf("\n02.Samsung Charger           2122              250tk         0%   ");
    printf("\n03.Nokia Charger             2123              250tk         0%   ");
    printf("\n04.Apple Charger             2124              500tk         0%   ");
    printf("\n05.Anik Charger              2125              180tk         0%   ");
    printf("\n06.Local Charger             2126              120tk         0%   ");

    char ch;

    printf("\n\nEnter 0 for previous menu\n");
    printf("Enter 1 for product menu\n");
    printf("Press any other key to start BILLING....\n");


    ch = getche();
    if(ch == '0')
    {
        electronics();
    }
    else if(ch== '1')
    {
        products();
    }

    else
        while(1)
        {


            printf("\n\nEnter Product Code:");
            scanf("%d", &buy_char);

            for(i=0; i<6; i++)
            {
                if(charg[i].id == buy_char)
                {
                    printf("Enter quantity:");
                    scanf("%f", &quan); ///Quan = Quantity
                    break;
                }
                else if(i!=5)
                {
                    continue;
                }
                else
                {
                    printf("Wrong Code");
                    break;
                }
            }
            array_prod[3] += (charg[i].price*quan);


            printf("\nDo you want to buy more products?\n");
            printf("\nPress 0 -to stay\nPress 1 -Home products\nPress 2 -Electronics\nPress 9 -Checkout\n");
            printf("Press:");
            scanf("%d", &input2);

            if(input2 == 0)
            {
                continue;
            }
            else if(1 == input2)

            {
                clrscr();
                home_products();
                break;
            }

            else if(2 == input2)
            {
                clrscr();
                electronics();
                break;
            }
            else if(9== input2)
            {
                clrscr();
                payment();
                break;
            }


        }


}

double payment()
{
    int input, c_p;   // c_p=customer payment
    double cost=0, tax, discount, due; //due=return

    int i, j, k;

    int ID;
    int quantity;
    char ch;
    float sum = 0;


    printf("        ***CHECKOUT***\n\n\n");

    for(i=0; i<20; i++)
    {
        sum  += array_prod[i];
    }




    printf("Full cost is %.2f\n", sum);

    if(sum == 0)
    {
        printf("Nothing bought");
        Sleep(3000);
        clrscr();
        main();

    }
    printf("\n\n\nEnter customer payment in tk :");
    scanf("%d", &c_p);



    if((due=c_p-sum)>=0)
    {
        clrscr();
        printf("\n============================");
        printf("\n");
        printf("Product cost = %0.2lf tk (With tax included)\nCustomer paid: %d tk", sum,c_p);
        printf("\nReturn amount : %0.2lf tk\n", due);
        printf("\n");
        printf("\n============================\n");
    }

    else if((due=sum-c_p)>=0)
    {
        clrscr();
        printf("\n============================");
        printf("\n");

        printf("Product cost = %0.2lf tk (With tax included)\nCustomer paid: %d tk", sum,c_p);
        printf("\nDue amount : %0.2lf tk\n", due);
        printf("\n");
        printf("\n============================\n");
    }

    add_customer(sum,c_p,due);

    printf("\npress 0 -Return to main menu\npress 1 -Exit\n");
    printf("Select Your Option : ");
    scanf("%d",&input);

    switch(input)
    {
    case 0:
    {
        clrscr();
        main();

    }
    break;

    case 1:
    {
        printf("Shutting down in ");
        for(k=3; k>0; k--)
        {
            Sleep(1000);
            printf("%d ", k);

        }
        printf("Thanks For shopping");
        exit(0);
    }
    break;
    }



}


void add_customer(float sum,int cp,float due)
{
    FILE *fp;
    struct customer_info b;

    printf("Enter Customer name :- ");
    scanf("%s",b.name);
    printf("Enter Buying Date:- ");
    scanf("%s",b.date);
    printf("Enter Mobile Number:- ");
    scanf("%s",&b.mobile);

    fp=fopen("data.txt","a");

    if(fp == NULL)
    {
        printf("FIle not Found");
        Sleep(3000);
        clrscr();
        main();
    }
    else
    {
        fprintf(fp,"\n%s\t%s\t%s\t%.2f\t%d\t%.2f\n",b.name,b.date,b.mobile,sum,cp,due);
        printf("\nRecord insert Sucessfull");
    }
    printf("\n");
    fclose(fp);


}



void view_customer()
{
    char ch;
    FILE *fp;

    fp = fopen("data.txt","r");
    if(fp == NULL)
    {
        printf("file does not found !");
        Sleep(3000);
        clrscr();
        main();

    }
    else
    {
        system("clear||cls");
        while( ( ch = fgetc(fp) ) != EOF )
            printf("%c",ch);

    }
    fclose(fp);

    int n;

    printf("Press 0 to goto main menu");
    scanf("%d", &n);

    if(n==0)
    {
        clrscr();
        main();
    }
    else if(n==1)
    {
        clrscr();
        customer();
    }
    else
    {
        clrscr();
        printf("Wrong input");
        Sleep(2000);
        view_customer();

    }
}

int customer()
{
    clrscr();
    int input;
    printf("     ***  Customer Information  ***\n\n");
    printf("\nPress 1 -View Customer Information\nPress 2 -Previous\nPress 0 -Return to main menu\n");
    printf("\nSelect Your Option : ");

    scanf("%d", &input);

    switch (input)
    {
    case 0:
    {
        clrscr();
        main();
    }
    break;
    case 1:
    {
        clrscr();
        view_customer();
    }
    break;
    case 2:
    {
        clrscr();
        main();
    }
    break;


    default:

        printf("Enter a valid number");
        Sleep(3000);
        customer();
        break;
    }

}









