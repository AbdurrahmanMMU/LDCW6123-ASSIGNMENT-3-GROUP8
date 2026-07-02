#include <stdio.h>
int main()
{
int view,like,comment,share,bad=0;
float engage;
printf("----------------------Tiktok Engagement Rate Calculator-------------------\n");
printf("The purpose of this calculator is to calculate the total amount of\n");
printf("engagement on a specific video based on the statistics found.\n");
printf("--------------------------------------------------------------------------\n");
do{
printf("Please enter the total number of likes: ");
scanf("%d", &like);
printf("Please enter the total number of comments: ");
scanf("%d", &comment);
printf("Please enter the total number of shares: ");
scanf("%d", &share);
printf("Please enter the total number of views: ");
scanf("%d", &view);
if (view<0||like<0||comment<0||share<0){
printf("You have entered an invalid value, please input again");
}
else {
bad=1;}
}
while (bad=0);
return 0;
}

