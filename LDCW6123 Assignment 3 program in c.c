#include <stdio.h>
int main()
{
int view,like,comment,share,stop1,stop2;
float engage,interact;
char answer;
printf("---------------------- Tiktok Engagement Rate Calculator -------------------\n");
printf("The purpose of this calculator is to calculate the total amount of\n");
printf("engagement on a specific video based on the statistics found.\n");
printf("----------------------------------------------------------------------------\n");
do{
do{
printf("Please enter the total number of likes: ");
scanf("%d", &like);
printf("Please enter the total number of comments: ");
scanf("%d", &comment);
printf("Please enter the total number of shares: ");
scanf("%d", &share);
printf("Please enter the total number of views: ");
scanf("%d", &view);
if (view<=0||like<0||comment<0||share<0){
printf("You have entered an invalid value, please input again\n");
}
else {
stop1=1;
}
}
while (stop1!=1);
printf("---------------------------------- Results --------------------------------\n");
interact=like+comment+share;
printf("Total Interaction: %.0f\n", interact );
engage=(interact/view)*100;
printf("Engagement Rate: %.2f%% \n", engage);
if(engage>=10)
printf("Catagory:Viral");
else if (engage<10 && engage>=5)
printf("Catagory:High Engagement");
else if (engage<5 && engage>=1)
printf("Catagory:Average Engagement");
else
printf("Catagory:Low Engagement");

printf("\nWould you like to stop the program?\nEnter Y to stop, enter N to retry\n");
scanf(" %c", &answer);
switch (answer){
case 'y':
stop2=1;
break;
case 'n':
printf("Restarting\n");
break;
}
}
while (stop2!=1);
return 0;
}

