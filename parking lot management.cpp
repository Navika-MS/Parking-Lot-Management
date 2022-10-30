#include <stdio.h>
struct vehicle
{
    int bus;
    int car;
    int motorbike;
    int bike;
    int cycle;
    int scooty;
    int rikshaw;
};
main()
{
    int i;
    struct vehicle veh[2];
    printf("-----vehicle details:-----");
    for (i=0;i<2;i++)
    {
        printf("\nNo. of bus parked ");
        scanf("%d",&veh[i].bus);
        printf("No. of car parked ");
        scanf("%d",&veh[i].car);
        printf("No. of motorbike parked ");
        scanf("%d",&veh[i].motorbike);
        printf("No. of bike parked ");
        scanf("%d",&veh[i].bike);
        printf("No. of cycle parked ");
        scanf("%d",&veh[i].cycle);
        printf("No. of scooty parked ");
        scanf("%d",&veh[i].scooty);
        printf("No. of rikshaw parked ");
        scanf("%d",&veh[i].rikshaw);
    }
    printf("\n------(1)Summerization------");
    for (i=0;i<2;i++)
    {
        printf("\n   vehicles parked in year  %d",i+1);
        printf("\nbus       -- %d",veh[i].bus);
        printf("\ncar       -- %d",veh[i].car);
        printf("\nmotorbike -- %d",veh[i].motorbike);
        printf("\nbike      -- %d",veh[i].bike);
        printf("\ncycle     -- %d",veh[i].cycle);
        printf("\nscooty    -- %d",veh[i].scooty);
        printf("\nrikshaw   -- %d",veh[i].rikshaw);
    }
    printf("\n\n-----(2)cost------");
    for (i=0;i<2;i++)
    {
        printf("\n\nvehicles parked in year  %d",i+1);
   
        printf("\namount for bus is -----------Rs %d",veh[i].bus*50);
        printf("\namount for car is -----------Rs %d",veh[i].car*20);
        printf("\namount for motorbike is -----Rs %d",veh[i].motorbike*15);
        printf("\namount for bike is ----------Rs %d",veh[i].bike*20);
        printf("\namount for cycle is ---------Rs %d",veh[i].cycle*15);
        printf("\namount for scooty is --------Rs %d",veh[i].scooty*25);
        printf("\namount for rikshaw is -------Rs %d",veh[i].rikshaw*40);
    }
    printf("\n\n------(3)total no. of vehicles------");
    for (i=0;i<2;i++)
    {
        printf("\n\nvehicles parked in year  %d",i+1);
        int sum, n=7;
        sum=veh[i].bus+veh[i].car+veh[i].motorbike+veh[i].bike+veh[i].cycle+veh[i].scooty+veh[i].rikshaw;
        printf("\nThe total no. of vehicles in %d is %d",i+1,sum);
    }
    printf("\n\n-----(4)Total cost------");
    for (i=0;i<2;i++)
    {
        printf("\n\nvehicles parked in year  %d",i+1);
        int total;
        total =veh[i].bus*50+veh[i].car*20+veh[i].motorbike*15+veh[i].bike*20+veh[i].cycle*15+veh[i].scooty*25+veh[i].rikshaw*40;
        printf("\nTotal cost is Rs %d",total);
    }
    printf("\n\n------(5)average for vehicles------");
    for (i=0;i<2;i++)
    {
        printf("\n\nvehicles parked in year  %d",i+1);
        float average;
        int n=7;
        average=(veh[i].bus+veh[i].car+veh[i].motorbike+veh[i].bike+veh[i].cycle+veh[i].scooty+veh[i].rikshaw)/n;
        printf("\nthe mean for %d is %f",i+1,average);
    }
    printf("\n\n------(6)average for cost------");
    for (i=0;i<2;i++)
    {
        printf("\n\nvehicles parked in year  %d",i+1);
        float avg;
        int n=7;
        int tot;
        tot=veh[i].bus*50+veh[i].car*20+veh[i].motorbike*15+veh[i].bike*20+veh[i].cycle*15+veh[i].scooty*25+veh[i].rikshaw*40;
        avg=tot/n;
        printf("\nthe mean for %d is Rs %f",i+1,avg);
    }
    printf("\n\n------(7)difference------");
    {
       
        printf("\nbus difference       --- %d",veh[1].bus - veh[0].bus);
        printf("\ncar difference       --- %d",veh[1].car - veh[0].car);
        printf("\nmotorbike difference --- %d",veh[1].motorbike - veh[0].motorbike);
        printf("\nbike difference      --- %d",veh[1].bike - veh[0].bike);
        printf("\ncycle difference     --- %d",veh[1].cycle - veh[0].cycle);
        printf("\nscooty difference    --- %d",veh[1].scooty - veh[0].scooty);
        printf("\nrikshaw difference   --- %d",veh[1].rikshaw - veh[0].rikshaw);
    }
    printf("\n\n------(8)profit or loss------");
    {
        char profit,loss;
        ((veh[1].bus - veh[0].bus) > 0) ? printf ("\nprofit for bus") : printf ( "\nloss for bus");
        ((veh[1].car - veh[0].car) > 0) ? printf("\nprofit for car") : printf ( "\nlossfor for car");
        ((veh[1].motorbike - veh[0].motorbike) > 0) ? printf("\nprofit for motorbike") : printf ( "\nloss for motorbike");
        ((veh[1].bike - veh[0].bike) > 0) ? printf("\nprofit for bike") : printf ("\nloss for bike");
        ((veh[1].cycle - veh[0].cycle) > 0) ? printf("\nprofit for cycle" ) : printf ("\nloss for cycle");
        ((veh[1].scooty - veh[0].scooty) > 0) ? printf("\nprofit for scooty") : printf ("\nloss for scooty");
        ((veh[1].rikshaw - veh[0].rikshaw) > 0) ? printf("\nprofit for rikshaw") : printf ("\nloss for rikshaw");
    }
}    


