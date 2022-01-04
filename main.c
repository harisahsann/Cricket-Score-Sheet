/*
HARIS AHSAN-SOFTWARE ENGINEER
GROUP PROJECT
*/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct node1
{

    struct node1 *previous;

    char competition[100];

    char venue[100];

    char matchBetween[100];

    char versus[100];

    char tossWon[100];

    char elected[100];

    int inning;

    char date[100];

    int sheetID;

    struct node1 *next;
};

struct node2
{

    char batsmanName[100];

    char runs[100];

    int four;

    int six;

    int batsmanID;

    struct node2 *address;
};

struct node3
{

    char bowlerName[100];

    float overs;

    int maidens;

    float noBalls;

    int runs;

    int bowlerID;

    struct node3 *address;
};

struct node1 *head1 = NULL;

struct node2 *head2 = NULL;

struct node3 *head3 = NULL;

void insert1(char *comp, char *ven, char *matchBet, char *ver, char *tossW, char *elect, int inn, char *dat, int id);

struct node2 *insert2(int n);

struct node3 *insert3(int n);

void update1(int id);

void update2(int id);

void update3(int id);

void search1(int id);

void search2(int id);

void search3(int id);

void delete1(int id);

void delete2(int id);

void delete3(int id);

void restoreData1();

void display();

void display1();

void display2();

void display3();

int main()
{

    // restoreData1();

    // printf("Hello, World!\n");

    char competition[100];

    char venue[100];

    char matchBetween[100];

    char versus[100];

    char tossWon[100];

    char elected[100];

    int inning;

    char date[100];

    int sheetID;

    int choice1;

    int choice2;

    int choice3;

    int a;

    int b;

    int batsmanID;

    int bowlerID;

    printf("\n");

    printf("\t\t\t\t\t !!! Cricket Score Sheet !!! \n");

    printf("\n");

    printf("\t\t\t\t\t !!! Main Menu !!! \n");

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");

    printf("Press Any Key To Continue !!! \n");

    getchar();

    system("cls");

    do
    {

        printf("======================================================================================================================== \n");

        printf("======================================================================================================================== \n");

        printf("\t\t\t << Enter 1 >> \t\t\t New ScoreSheet \n");

        printf("\t\t\t << Enter 2 >> \t\t\t View ScoreSheet \n");

        printf("\t\t\t << Enter 3 >> \t\t\t Exit \n");

        printf("======================================================================================================================== \n");

        printf("======================================================================================================================== \n");

        scanf("%d", &choice1);

        system("cls");

        switch (choice1)
        {

        case 1:

            do
            {

                printf("======================================================================================================================== \n");

                printf("======================================================================================================================== \n");

                printf("\t\t\t << Enter 1 >> \t\t\t Match Details \n");

                printf("\t\t\t << Enter 2 >> \t\t\t Batsman Details \n");

                printf("\t\t\t << Enter 3 >> \t\t\t Bowler Details \n");

                printf("\t\t\t << Enter 4 >> \t\t\t View ScoreSheet \n");

                printf("\t\t\t << Enter 5 >> \t\t\t Exit \n");

                printf("======================================================================================================================== \n");

                printf("======================================================================================================================== \n");

                scanf("%d", &choice2);

                system("cls");

                switch (choice2)
                {

                case 1:

                    do
                    {

                        printf("======================================================================================================================== \n");

                        printf("======================================================================================================================== \n");

                        printf("\t\t\t << Enter 1 >> \t\t\t Insert Details \n");

                        printf("\t\t\t << Enter 2 >> \t\t\t Update Details \n");

                        printf("\t\t\t << Enter 3 >> \t\t\t Search ScoreSheet \n");

                        printf("\t\t\t << Enter 4 >> \t\t\t Delete ScoreSheet \n");

                        printf("\t\t\t << Enter 5 >> \t\t\t View ScoreSheet \n");

                        printf("\t\t\t << Enter 6 >> \t\t\t Exit \n");

                        printf("======================================================================================================================== \n");

                        printf("======================================================================================================================== \n");

                        scanf("%d", &choice3);

                        system("cls");

                        switch (choice3)
                        {

                        case 1:

                            printf("Enter Competition :: \n");

                            scanf("%s", competition);

                            printf("Enter Venue :: \n");

                            scanf("%s", venue);

                            printf("Enter Match Between :: \n");

                            scanf("%s", matchBetween);

                            printf("Enter Versus :: \n");

                            scanf("%s", versus);

                            printf("Enter TOSS Won By :: \n");

                            scanf("%s", tossWon);

                            printf("Enter Elected To :: \n");

                            scanf("%s", elected);

                            printf("Enter Inning Of :: \n");

                            scanf("%d", &inning);

                            printf("Enter Date :: \n");

                            scanf("%s", date);

                            printf("Enter ScoreSheet ID :: \n");

                            scanf("%d", &sheetID);

                            insert1(competition, venue, matchBetween, versus, tossWon, elected, inning, date, sheetID);

                            FILE *fp1;

                            fp1 = fopen("ScoreSheetData.csv", "a");

                            fprintf(fp1, "%d,%s,%s,%s,%s,%s,%s,%d,%s \n", sheetID, competition, venue, matchBetween, versus, tossWon, elected, inning, date);

                            fclose(fp1);

                            break;

                        case 2:

                            printf("Enter ScoreSheet ID :: \n");

                            scanf("%d", &sheetID);

                            update1(sheetID);

                            break;

                        case 3:

                            printf("Enter ScoreSheet ID :: \n");

                            scanf("%d", &sheetID);

                            search1(sheetID);

                            break;

                        case 4:

                            printf("Enter ScoreSheet ID :: \n");

                            scanf("%d", &sheetID);

                            delete1(sheetID);

                            break;

                        case 5:

                            display1();

                            break;

                        case 6:

                            break;

                        default:

                            printf("!!! Invalid Entry !!! \n");
                        }

                    } while (choice3 != 6);

                case 2:

                    do
                    {

                        printf("======================================================================================================================== \n");

                        printf("======================================================================================================================== \n");

                        printf("\t\t\t << Enter 1 >> \t\t\t Insert Details \n");

                        printf("\t\t\t << Enter 2 >> \t\t\t Update Details \n");

                        printf("\t\t\t << Enter 3 >> \t\t\t Search Batsman Record \n");

                        printf("\t\t\t << Enter 4 >> \t\t\t Delete Batsman Record \n");

                        printf("\t\t\t << Enter 5 >> \t\t\t View Batsman Record \n");

                        printf("\t\t\t << Enter 6 >> \t\t\t Exit \n");

                        printf("======================================================================================================================== \n");

                        printf("======================================================================================================================== \n");

                        scanf("%d", &choice3);

                        system("cls");

                        switch (choice3)
                        {

                        case 1:

                            printf("Enter The Number Of Batsman :: \n");

                            scanf("%d", &a);

                            head2 = insert2(a);

                            break;

                        case 2:

                            printf("Enter Batsman ID :: \n");

                            scanf("%d", &batsmanID);

                            update2(batsmanID);

                            break;

                        case 3:

                            printf("Enter Batsman ID :: \n");

                            scanf("%d", &batsmanID);

                            search2(batsmanID);

                            break;

                        case 4:

                            printf("Enter Batsman ID :: \n");

                            scanf("%d", &batsmanID);

                            delete2(batsmanID);

                            break;

                        case 5:

                            display2();

                            break;

                        case 6:

                            break;

                        default:

                            printf("!!! Invalid Entry !!! \n");
                        }

                    } while (choice3 != 6);

                case 3:

                    do
                    {

                        printf("======================================================================================================================== \n");

                        printf("======================================================================================================================== \n");

                        printf("\t\t\t << Enter 1 >> \t\t\t Insert Details \n");

                        printf("\t\t\t << Enter 2 >> \t\t\t Update Details \n");

                        printf("\t\t\t << Enter 3 >> \t\t\t Search Bowler Record \n");

                        printf("\t\t\t << Enter 4 >> \t\t\t Delete Bowler Record \n");

                        printf("\t\t\t << Enter 5 >> \t\t\t View Bowler Record \n");

                        printf("\t\t\t << Enter 6 >> \t\t\t Exit \n");

                        printf("======================================================================================================================== \n");

                        printf("======================================================================================================================== \n");

                        scanf("%d", &choice3);

                        system("cls");

                        switch (choice3)
                        {

                        case 1:

                            printf("Enter The Number Of Bowler :: \n");

                            scanf("%d", &b);

                            head3 = insert3(b);

                            break;

                        case 2:

                            printf("Enter Bowler ID :: \n");

                            scanf("%d", &bowlerID);

                            update3(bowlerID);

                            break;

                        case 3:

                            printf("Enter Bowler ID :: \n");

                            scanf("%d", &bowlerID);

                            search3(bowlerID);

                            break;

                        case 4:

                            printf("Enter Bowler ID :: \n");

                            scanf("%d", &bowlerID);

                            delete3(bowlerID);

                        case 5:

                            display3();

                            break;

                        case 6:

                            break;

                        default:

                            printf("!!! Invalid Entry !!! \n");
                        }

                    } while (choice3 != 6);

                case 4:

                    display1();

                    break;

                case 5:

                    break;

                default:

                    printf("!!! Invalid Entry !!! \n");
                }

            } while (choice2 != 5);

        case 2:

            // display1();

            display();

            break;

        case 3:

            exit(1);

        default:

            printf("!!! Invalid Entry !!! \n");
        }

    } while (choice1 != 3);

    return 0;
}

void insert1(char *comp, char *ven, char *matchBet, char *ver, char *tossW, char *elect, int inn, char *dat, int id)
{

    struct node1 *sheet;

    sheet = (struct node1 *)malloc(sizeof(struct node1));

    sheet->previous = NULL;

    strcpy(sheet->competition, comp);

    strcpy(sheet->venue, ven);

    strcpy(sheet->matchBetween, matchBet);

    strcpy(sheet->versus, ver);

    strcpy(sheet->tossWon, tossW);

    strcpy(sheet->elected, elect);

    sheet->inning = inn;

    strcpy(sheet->date, dat);

    sheet->sheetID = id;

    sheet->next = NULL;

    if (head1 == NULL)
    {

        head1 = sheet;
    }
    else
    {

        sheet->next = head1;

        head1->previous = sheet;

        head1 = sheet;
    }
}

void update1(int id)
{

    struct node1 *temp = head1;

    int choice;

    while (temp != NULL)
    {

        if (temp->sheetID == id)
        {

            printf("Sheet With ID %d Found !!! \n", id);

            printf("\n");

            do
            {

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("\t\t\t << Enter 1 >> \t\t\t Update Competition \n");

                printf("\t\t\t << Enter 2 >> \t\t\t Update Venue \n");

                printf("\t\t\t << Enter 3 >> \t\t\t Update Match Between \n");

                printf("\t\t\t << Enter 4 >> \t\t\t Update Versus \n");

                printf("\t\t\t << Enter 5 >> \t\t\t Update TOSS Won By \n");

                printf("\t\t\t << Enter 6 >> \t\t\t Update Elected To \n");

                printf("\t\t\t << Enter 7 >> \t\t\t Update Inning Of \n");

                printf("\t\t\t << Enter 8 >> \t\t\t Update Date \n");

                printf("\t\t\t << Enter 9 >> \t\t\t Exit \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                scanf("%d", &choice);

                system("cls");

                switch (choice)
                {

                case 1:

                    printf("Enter Competition :: \n");

                    scanf("%s", temp->competition);

                    printf("Updated Successfully !!! \n");

                    break;

                case 2:

                    printf("Enter Venue :: \n");

                    scanf("%s", temp->venue);

                    printf("Updated Successfully !!! \n");

                    break;

                case 3:

                    printf("Enter Match Between :: \n");

                    scanf("%s", temp->matchBetween);

                    printf("Updated Successfully !!! \n");

                    break;

                case 4:

                    printf("Enter Versus :: \n");

                    scanf("%s", temp->versus);

                    printf("Updated Successfully !!! \n");

                    break;

                case 5:

                    printf("Enter TOSS Won By :: \n");

                    scanf("%s", temp->tossWon);

                    printf("Updated Successfully !!! \n");

                    break;

                case 6:

                    printf("Enter Elected To :: \n");

                    scanf("%s", temp->elected);

                    printf("Updated Successfully !!! \n");

                    break;

                case 7:

                    printf("Enter Inning Of :: \n");

                    scanf("%d", &temp->inning);

                    printf("Updated Successfully !!! \n");

                    break;

                case 8:

                    printf("Enter Date :: \n");

                    scanf("%s", temp->date);

                    printf("Updated Successfully !!! \n");

                    break;

                case 9:

                    break;

                default:

                    printf("!!! Invalid Entry !!! \n");
                }

            } while (choice != 9);

            printf("Updated Successfully !!! \n");

            return;
        }

        temp = temp->next;
    }

    printf("Sheet With ID %d Is Not Found !!! \n", id);
}

void search1(int id)
{

    struct node1 *temp = head1;

    while (temp != NULL)
    {

        if (temp->sheetID == id)
        {

            printf("Sheet With ID %d Found !!! \n", id);

            printf("\n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("\t\t\t Competition :: \t\t\t %s \n", temp->competition);

            printf("\t\t\t Venue :: \t\t\t %s \n", temp->venue);

            printf("\t\t\t Match Between :: \t\t\t %s \n", temp->matchBetween);

            printf("\t\t\t Versus :: \t\t\t %s \n", temp->versus);

            printf("\t\t\t TOSS Won By :: \t\t\t %s \n", temp->tossWon);

            printf("\t\t\t Elected To :: \t\t\t %s \n", temp->elected);

            printf("\t\t\t Inning :: \t\t\t %d \n", temp->inning);

            printf("\t\t\t Date :: \t\t\t %s \n", temp->date);

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            return;
        }

        temp = temp->next;
    }

    printf("Sheet With ID %d Is Not Found !!! \n", id);
}

void display1()
{

    struct node1 *temp1 = head1;

    struct node2 *temp2 = head2;

    struct node3 *temp3 = head3;

    FILE *fp1;

    fp1 = fopen("ScoreSheetData.csv", "w");

    while (temp1 != NULL)
    {

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("\t\t\t Competition :: \t\t\t %s \n", temp1->competition);

        printf("\t\t\t Venue :: \t\t\t %s \n", temp1->venue);

        printf("\t\t\t Match Between :: \t\t\t %s \n", temp1->matchBetween);

        printf("\t\t\t Versus :: \t\t\t %s \n", temp1->versus);

        printf("\t\t\t TOSS Won By :: \t\t\t %s \n", temp1->tossWon);

        printf("\t\t\t Elected To :: \t\t\t %s \n", temp1->elected);

        printf("\t\t\t Inning :: \t\t\t %d \n", temp1->inning);

        printf("\t\t\t Date :: \t\t\t %s \n", temp1->date);

        fprintf(fp1, "%d,%s,%s,%s,%s,%s,%s,%d,%s \n", temp1->sheetID, temp1->competition, temp1->venue, temp1->matchBetween, temp1->versus, temp1->tossWon, temp1->elected, temp1->inning, temp1->date);

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        temp1 = temp1->next;
    }

    fclose(fp1);

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("Batsman Name \t\t Total Runs \t\t 4s \t\t 6s \n");

    while (temp2 != NULL)
    {

        printf("%s \t\t\t %s \t\t\t %d \t\t %d \n", temp2->batsmanName, temp2->runs, temp2->four, temp2->six);

        temp2 = temp2->address;
    }

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("Bowler Name \t\t Overs \t\t\t Maidens \t\t\t No Balls \t\t\t Runs \n");

    while (temp3 != NULL)
    {

        printf("%s \t\t\t %0.4f \t\t %d \t\t\t\t %0.4f \t\t\t %d \n", temp3->bowlerName, temp3->overs, temp3->maidens, temp3->noBalls, temp3->runs);

        temp3 = temp3->address;
    }

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");
}

struct node2 *insert2(int n)
{

    int i;

    struct node2 *head;

    struct node2 *temp;

    struct node2 *newNode;

    char batsmanName[100];

    char runs[100];

    int four;

    int six;

    int batsmanID;

    head = (struct node2 *)malloc(sizeof(struct node2));

    if (head == NULL)
    {

        printf("!!! Memory Not Allocated !!! \n");
    }
    else
    {

        printf("Enter Batsman Name :: \n");

        scanf("%s", batsmanName);

        printf("Enter Total Runs :: \n");

        scanf("%s", runs);

        printf("Enter 4s :: \n");

        scanf("%d", &four);

        printf("Enter 6s :: \n");

        scanf("%d", &six);

        printf("Enter Batsman ID :: \n");

        scanf("%d", &batsmanID);

        FILE *fp2;

        fp2 = fopen("BatsmanData.csv", "a");

        fprintf(fp2, "%d,%s,%s,%d,%d \n", batsmanID, batsmanName, runs, four, six);

        fclose(fp2);

        strcpy(head->batsmanName, batsmanName);

        strcpy(head->runs, runs);

        head->four = four;

        head->six = six;

        head->batsmanID = batsmanID;

        head->address = NULL;

        temp = head;
    }

    for (i = 2; i <= n; i++)
    {

        newNode = (struct node2 *)malloc(sizeof(struct node2));

        printf("Enter Batsman Name :: \n");

        scanf("%s", batsmanName);

        printf("Enter Total Runs :: \n");

        scanf("%s", runs);

        printf("Enter 4s :: \n");

        scanf("%d", &four);

        printf("Enter 6s :: \n");

        scanf("%d", &six);

        printf("Enter Batsman ID :: \n");

        scanf("%d", &batsmanID);

        FILE *fp2;

        fp2 = fopen("BatsmanData.csv", "a");

        fprintf(fp2, "%d,%s,%s,%d,%d \n", batsmanID, batsmanName, runs, four, six);

        fclose(fp2);

        strcpy(newNode->batsmanName, batsmanName);

        strcpy(newNode->runs, runs);

        newNode->four = four;

        newNode->six = six;

        newNode->batsmanID = batsmanID;

        newNode->address = NULL;

        temp->address = newNode;

        temp = temp->address;
    }

    return head;
}

void update2(int id)
{

    struct node2 *temp = head2;

    int choice;

    while (temp != NULL)
    {

        if (temp->batsmanID == id)
        {

            printf("Batsman Record With ID %d Found !!! \n", id);

            printf("\n");

            do
            {

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("\t\t\t << Enter 1 >> \t\t\t Update Batsman Name \n");

                printf("\t\t\t << Enter 2 >> \t\t\t Update Total Runs \n");

                printf("\t\t\t << Enter 3 >> \t\t\t Update 4s \n");

                printf("\t\t\t << Enter 4 >> \t\t\t Update 6s \n");

                printf("\t\t\t << Enter 5 >> \t\t\t Exit \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                scanf("%d", &choice);

                system("cls");

                switch (choice)
                {

                case 1:

                    printf("Enter Batsman Name :: \n");

                    scanf("%s", temp->batsmanName);

                    printf("Updated Successfully !!! \n");

                    break;

                case 2:

                    printf("Enter Total Runs :: \n");

                    scanf("%s", temp->runs);

                    printf("Updated Successfully !!! \n");

                    break;

                case 3:

                    printf("Enter 4s :: \n");

                    scanf("%d", &temp->four);

                    printf("Updated Successfully !!! \n");

                    break;

                case 4:

                    printf("Enter 6s :: \n");

                    scanf("%d", &temp->six);

                    printf("Updated Successfully !!! \n");

                    break;

                case 5:

                    break;

                default:

                    printf("!!! Invalid Entry !!! \n");
                }

            } while (choice != 5);

            printf("Updated Successfully !!! \n");

            return;
        }

        temp = temp->address;
    }

    printf("Batsman Record With ID %d Is Not Found !!! \n", id);
}

void search2(int id)
{

    struct node2 *temp = head2;

    while (temp != NULL)
    {

        if (temp->batsmanID == id)
        {

            printf("Batsman Record With ID %d Found !!! \n", id);

            printf("\n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("Batsman Name \t\t Total Runs \t\t 4s \t\t 6s \n");

            printf("%s \t\t\t %s \t\t\t %d \t\t %d \n", temp->batsmanName, temp->runs, temp->four, temp->six);

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("\n");

            return;
        }

        temp = temp->address;
    }

    printf("Batsman Record With ID %d Is Not Found !!! \n", id);
}

struct node3 *insert3(int n)
{

    int i;

    struct node3 *head;

    struct node3 *temp;

    struct node3 *newNode;

    char bowlerName[100];

    float overs;

    int maidens;

    float noBalls;

    int runs;

    int bowlerID;

    head = (struct node3 *)malloc(sizeof(struct node3));

    if (head == NULL)
    {

        printf("!!! Memory Not Allocated !!! \n");
    }
    else
    {

        printf("Enter Bowler Name :: \n");

        scanf("%s", bowlerName);

        printf("Enter Overs :: \n");

        scanf("%f", &overs);

        printf("Enter Maidens :: \n");

        scanf("%d", &maidens);

        printf("Enter No Balls :: \n");

        scanf("%f", &noBalls);

        printf("Enter Runs :: \n");

        scanf("%d", &runs);

        printf("Enter Bowler ID :: \n");

        scanf("%d", &bowlerID);

        FILE *fp3;

        fp3 = fopen("BowlerData.csv", "a");

        fprintf(fp3, "%d,%s,%f,%d,%f,%d \n", bowlerID, bowlerName, overs, maidens, noBalls, runs);

        fclose(fp3);

        strcpy(head->bowlerName, bowlerName);

        head->overs = overs;

        head->maidens = maidens;

        head->noBalls = noBalls;

        head->runs = runs;

        head->bowlerID = bowlerID;

        head->address = NULL;

        temp = head;
    }

    for (i = 2; i <= n; i++)
    {

        newNode = (struct node3 *)malloc(sizeof(struct node3));

        printf("Enter Bowler Name :: \n");

        scanf("%s", bowlerName);

        printf("Enter Overs :: \n");

        scanf("%f", &overs);

        printf("Enter Maidens :: \n");

        scanf("%d", &maidens);

        printf("Enter No Balls :: \n");

        scanf("%f", &noBalls);

        printf("Enter Runs :: \n");

        scanf("%d", &runs);

        printf("Enter Bowler ID :: \n");

        scanf("%d", &bowlerID);

        FILE *fp3;

        fp3 = fopen("BowlerData.csv", "a");

        fprintf(fp3, "%d,%s,%f,%d,%f,%d \n", bowlerID, bowlerName, overs, maidens, noBalls, runs);

        fclose(fp3);

        strcpy(newNode->bowlerName, bowlerName);

        newNode->overs = overs;

        newNode->maidens = maidens;

        newNode->noBalls = noBalls;

        newNode->runs = runs;

        newNode->bowlerID = bowlerID;

        newNode->address = NULL;

        temp->address = newNode;

        temp = temp->address;
    }

    return head;
}

void update3(int id)
{

    struct node3 *temp = head3;

    int choice;

    while (temp != NULL)
    {

        if (temp->bowlerID == id)
        {

            printf("Bowler Record With ID %d Found !!! \n");

            printf("\n");

            do
            {

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("\t\t\t << Enter 1 >> \t\t\t Update Bowler Name \n");

                printf("\t\t\t << Enter 2 >> \t\t\t Update Overs \n");

                printf("\t\t\t << Enter 3 >> \t\t\t Update Maidens \n");

                printf("\t\t\t << Enter 4 >> \t\t\t Update No Balls \n");

                printf("\t\t\t << Enter 5 >> \t\t\t Update Runs \n");

                printf("\t\t\t << Enter 6 >> \t\t\t Exit \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                printf("------------------------------------------------------------------------------------------------------------------------ \n");

                scanf("%d", &choice);

                system("cls");

                switch (choice)
                {

                case 1:

                    printf("Enter Bowler Name :: \n");

                    scanf("%s", temp->bowlerName);

                    printf("Updated Successfully !!! \n");

                    break;

                case 2:

                    printf("Enter Overs :: \n");

                    scanf("%f", &temp->overs);

                    printf("Updated Successfully !!! \n");

                    break;

                case 3:

                    printf("Enter Maidens :: \n");

                    scanf("%d", &temp->maidens);

                    printf("Updated Successfully !!! \n");

                    break;

                case 4:

                    printf("Enter No Balls :: \n");

                    scanf("%f", &temp->noBalls);

                    printf("Updated Successfully !!! \n");

                    break;

                case 5:

                    printf("Enter Runs :: \n");

                    scanf("%d", &temp->runs);

                    printf("Updated Successfully !!! \n");

                    break;

                case 6:

                    break;

                default:

                    printf("!!! Invalid Entry !!! \n");
                }

            } while (choice != 6);

            printf("Updated Successfully !!! \n");

            return;
        }

        temp = temp->address;
    }

    printf("Bowler Record With ID %d Is Not Found !!! \n", id);
}

void search3(int id)
{

    struct node3 *temp = head3;

    while (temp != NULL)
    {

        if (temp->bowlerID == id)
        {

            printf("Bowler Record With ID %d Found !!! \n", id);

            printf("\n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("Bowler Name \t\t Overs \t\t\t Maidens \t\t\t No Balls \t\t\t Runs \n");

            printf("%s \t\t\t %0.4f \t\t %d \t\t\t\t %0.4f \t\t\t %d \n", temp->bowlerName, temp->overs, temp->maidens, temp->noBalls, temp->runs);

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("------------------------------------------------------------------------------------------------------------------------ \n");

            printf("\n");

            return;
        }

        temp = temp->address;
    }

    printf("Bowler Record With ID %d Is Not Found !!! \n", id);
}

void delete1(int id)
{

    struct node1 *temp1 = head1;

    struct node1 *temp2 = head1;

    int flag = 0;

    while (temp1 != NULL)
    {

        if (temp1->sheetID == id)
        {

            printf("Sheet With ID %d Found !!! \n", id);

            flag++;

            if (temp1 == temp2)
            {

                head1 = head1->next;

                free(temp1);
            }
            else
            {

                temp2->next = temp1->next;

                free(temp1);
            }

            printf("Record Successfully Deleted !!! \n");
        }
        else if (flag == 0)
        {

            printf("Sheet With ID %d Is Not Found !!! \n", id);
        }

        temp2 = temp1;

        temp1 = temp1->next;
    }
}

void delete2(int id)
{

    struct node2 *temp1 = head2;

    struct node2 *temp2 = head2;

    int flag = 0;

    while (temp1 != NULL)
    {

        if (temp1->batsmanID == id)
        {

            printf("Batsman Record With ID %d Found !!! \n", id);

            flag++;

            if (temp1 == temp2)
            {

                head2 = head2->address;

                free(temp1);
            }
            else
            {

                temp2->address = temp1->address;

                free(temp1);
            }

            printf("Record Successfully Deleted !!! \n");
        }
        else if (flag == 0)
        {

            printf("Batsman Record With ID %d Is Not Found !!! \n", id);
        }

        temp2 = temp1;

        temp1 = temp1->address;
    }
}

void delete3(int id)
{

    struct node3 *temp1 = head3;

    struct node3 *temp2 = head3;

    int flag = 0;

    while (temp1 != NULL)
    {

        if (temp1->bowlerID == id)
        {

            printf("Batsman Record With ID %d Found !!! \n", id);

            flag++;

            if (temp1 == temp2)
            {

                head3 = head3->address;

                free(temp1);
            }
            else
            {

                temp2->address = temp1->address;

                free(temp1);
            }

            printf("Record Successfully Deleted !!! \n");
        }
        else if (flag == 0)
        {

            printf("Batsman Record With ID %d Is Not Found !!! \n", id);
        }

        temp2 = temp1;

        temp1 = temp1->address;
    }
}

void restoreData1()
{

    FILE *fp1 = fopen("ScoreSheetData.csv", "r");

    if (!fp1)
    {

        printf("ScoreSheet Record Does Not Found !!! \n");

        return;
    }
    else
    {

        char buffer[1024];

        while (fgets(buffer, 1024, fp1))
        {

            struct node1 *p = (struct node1 *)malloc(sizeof(struct node1));

            char *value = strtok(buffer, ",");

            while (value)
            {

                p->sheetID = atoi(value);

                value = strtok(NULL, ",");

                strcpy(p->competition, value);

                value = strtok(NULL, ",");

                strcpy(p->venue, value);

                value = strtok(NULL, ",");

                strcpy(p->matchBetween, value);

                value = strtok(NULL, ",");

                strcpy(p->versus, value);

                value = strtok(NULL, ",");

                strcpy(p->tossWon, value);

                value = strtok(NULL, ",");

                strcpy(p->elected, value);

                p->inning = atoi(value);

                value = strtok(NULL, ",");

                strcpy(p->date, value);

                value = strtok(NULL, ",");
            }

            if (head1 == NULL)
            {

                head1 = p;

                p->next = NULL;
            }
            else
            {

                struct node1 *q = head1;

                while (q->next != NULL)
                {

                    q = q->next;
                }

                q->next = p;

                p->previous = q;

                p->next = NULL;
            }
        }
    }

    fclose(fp1);
}

void display2()
{

    struct node1 *temp1 = head1;

    struct node2 *temp2 = head2;

    struct node3 *temp3 = head3;

    // FILE * fp1;

    // fp1 = fopen("ScoreSheetData.csv" , "w");

    FILE *fp2;

    fp2 = fopen("BatsmanData.csv", "w");

    // FILE * fp3;

    // fp3 = fopen("BowlerData.csv" , "w");

    while (temp1 != NULL)
    {

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("\t\t\t Competition :: \t\t\t %s \n", temp1->competition);

        printf("\t\t\t Venue :: \t\t\t %s \n", temp1->venue);

        printf("\t\t\t Match Between :: \t\t\t %s \n", temp1->matchBetween);

        printf("\t\t\t Versus :: \t\t\t %s \n", temp1->versus);

        printf("\t\t\t TOSS Won By :: \t\t\t %s \n", temp1->tossWon);

        printf("\t\t\t Elected To :: \t\t\t %s \n", temp1->elected);

        printf("\t\t\t Inning :: \t\t\t %d \n", temp1->inning);

        printf("\t\t\t Date :: \t\t\t %s \n", temp1->date);

        // fprintf(fp1 , "%d,%s,%s,%s,%s,%s,%s,%d,%s \n" , temp1 -> sheetID,temp1 -> competition,temp1 -> venue,temp1 -> matchBetween,temp1 -> versus,temp1 -> tossWon,temp1 -> elected,temp1 -> inning,temp1 -> date);

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        temp1 = temp1->next;
    }

    // fclose(fp1);

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("Batsman Name \t\t Total Runs \t\t 4s \t\t 6s \n");

    while (temp2 != NULL)
    {

        printf("%s \t\t\t %s \t\t\t %d \t\t %d \n", temp2->batsmanName, temp2->runs, temp2->four, temp2->six);

        fprintf(fp2, "%d,%s,%s,%d,%d \n", temp2->batsmanID, temp2->batsmanName, temp2->runs, temp2->four, temp2->six);

        temp2 = temp2->address;
    }

    fclose(fp2);

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("Bowler Name \t\t Overs \t\t\t Maidens \t\t\t No Balls \t\t\t Runs \n");

    while (temp3 != NULL)
    {

        printf("%s \t\t\t %0.4f \t\t %d \t\t\t\t %0.4f \t\t\t %d \n", temp3->bowlerName, temp3->overs, temp3->maidens, temp3->noBalls, temp3->runs);

        // fprintf(fp3 , "%d,%s,%f,%d,%f,%d \n" , temp3 -> bowlerID,temp3 -> bowlerName,temp3 -> overs,temp3 -> maidens,temp3 -> noBalls,temp3 -> runs);

        temp3 = temp3->address;
    }

    // fclose(fp3);

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");
}

void display3()
{

    struct node1 *temp1 = head1;

    struct node2 *temp2 = head2;

    struct node3 *temp3 = head3;

    // FILE * fp1;

    // fp1 = fopen("ScoreSheetData.csv" , "w");

    // FILE * fp2;

    // fp2 = fopen("BatsmanData.csv" , "w");

    FILE *fp3;

    fp3 = fopen("BowlerData.csv", "w");

    while (temp1 != NULL)
    {

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("\t\t\t Competition :: \t\t\t %s \n", temp1->competition);

        printf("\t\t\t Venue :: \t\t\t %s \n", temp1->venue);

        printf("\t\t\t Match Between :: \t\t\t %s \n", temp1->matchBetween);

        printf("\t\t\t Versus :: \t\t\t %s \n", temp1->versus);

        printf("\t\t\t TOSS Won By :: \t\t\t %s \n", temp1->tossWon);

        printf("\t\t\t Elected To :: \t\t\t %s \n", temp1->elected);

        printf("\t\t\t Inning :: \t\t\t %d \n", temp1->inning);

        printf("\t\t\t Date :: \t\t\t %s \n", temp1->date);

        // fprintf(fp1 , "%d,%s,%s,%s,%s,%s,%s,%d,%s \n" , temp1 -> sheetID,temp1 -> competition,temp1 -> venue,temp1 -> matchBetween,temp1 -> versus,temp1 -> tossWon,temp1 -> elected,temp1 -> inning,temp1 -> date);

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        temp1 = temp1->next;
    }

    // fclose(fp1);

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("Batsman Name \t\t Total Runs \t\t 4s \t\t 6s \n");

    while (temp2 != NULL)
    {

        printf("%s \t\t\t %s \t\t\t %d \t\t %d \n", temp2->batsmanName, temp2->runs, temp2->four, temp2->six);

        temp2 = temp2->address;

        // fprintf(fp2 , "%d,%s,%s,%d,%d \n" , temp2 -> batsmanID,temp2 -> batsmanName,temp2 -> runs,temp2 -> four,temp2 -> six);
    }

    // fclose(fp2);

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("Bowler Name \t\t Overs \t\t\t Maidens \t\t\t No Balls \t\t\t Runs \n");

    while (temp3 != NULL)
    {

        printf("%s \t\t\t %0.4f \t\t %d \t\t\t\t %0.4f \t\t\t %d \n", temp3->bowlerName, temp3->overs, temp3->maidens, temp3->noBalls, temp3->runs);

        fprintf(fp3, "%d,%s,%f,%d,%f,%d \n", temp3->bowlerID, temp3->bowlerName, temp3->overs, temp3->maidens, temp3->noBalls, temp3->runs);

        temp3 = temp3->address;
    }

    fclose(fp3);

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");
}

void display()
{

    struct node1 *temp1 = head1;

    struct node2 *temp2 = head2;

    struct node3 *temp3 = head3;

    while (temp1 != NULL)
    {

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("\t\t\t Competition :: \t\t\t %s \n", temp1->competition);

        printf("\t\t\t Venue :: \t\t\t %s \n", temp1->venue);

        printf("\t\t\t Match Between :: \t\t\t %s \n", temp1->matchBetween);

        printf("\t\t\t Versus :: \t\t\t %s \n", temp1->versus);

        printf("\t\t\t TOSS Won By :: \t\t\t %s \n", temp1->tossWon);

        printf("\t\t\t Elected To :: \t\t\t %s \n", temp1->elected);

        printf("\t\t\t Inning :: \t\t\t %d \n", temp1->inning);

        printf("\t\t\t Date :: \t\t\t %s \n", temp1->date);

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        printf("------------------------------------------------------------------------------------------------------------------------ \n");

        temp1 = temp1->next;
    }

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("Batsman Name \t\t Total Runs \t\t 4s \t\t 6s \n");

    while (temp2 != NULL)
    {

        printf("%s \t\t\t %s \t\t\t %d \t\t %d \n", temp2->batsmanName, temp2->runs, temp2->four, temp2->six);

        temp2 = temp2->address;
    }

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("Bowler Name \t\t Overs \t\t\t Maidens \t\t\t No Balls \t\t\t Runs \n");

    while (temp3 != NULL)
    {

        printf("%s \t\t\t %0.4f \t\t %d \t\t\t\t %0.4f \t\t\t %d \n", temp3->bowlerName, temp3->overs, temp3->maidens, temp3->noBalls, temp3->runs);

        temp3 = temp3->address;
    }

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("------------------------------------------------------------------------------------------------------------------------ \n");

    printf("\n");
}