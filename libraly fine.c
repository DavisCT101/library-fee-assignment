/*Ref No:CT101/G/22766/24
Name:Mucheke Davis Mwangi
to calculate the library fine if days overdue*/

#include <stdio.h>
#include <time.h>
int main (){

int bookId,dueDate,returnDate,overdueDays;
float fine;
//to enter the book id,due date, return date
printf("book id:");
scanf("%d",&bookId);

printf("due date:");
scanf("%d",&dueDate);

printf("return Date:");
scanf("%d",&returnDate);
//to calculate the overdue days
overdueDays=returnDate-dueDate;

if(overdueDays<=7){
    fine=overdueDays*20;
}
else if(overdueDays<=14){
        fine=7*20+(overdueDays-7)*50;/* 7*ksh.20 because it already exceeded 7 days then minus the 7 days you already multiplied*/
}
else { fine=7*20+7*50+(overdueDays-14)*100;/*7*ksh 50 because it is 14 minus 7 then minus the 14 you calculated then multiply the rem with 100*/
}
//to output the book id,due date,return date, days overdue, fine rates and fine amount
printf("book Id is:%d\n",bookId);
printf("due date is:%d\n",dueDate);
printf("return date is:%d\n",returnDate);
printf("days overdue are:%d\n",overdueDays);
printf("fine rates are\n ksh 20 per day for every 7 days\n ksh 50 per day for the next seven days\n ksh 100 per day for the days beyond 14 days");
printf("fine amount is:%.2f",fine);
return 0;
}




