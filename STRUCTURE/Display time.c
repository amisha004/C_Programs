/* Write a program which defines a structure called time struct containing three member’s integer hour, 
integer minute and integer second. Develop a program that will assign values to the individual members and 
display the time and in following form : 16:40:51 */

#include <stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
}t;
int main (void)
{
    printf("Enter Hour: \n");
    scanf("%d",&t.hour);
    printf("Enter Minute: \n");
    scanf("%d",&t.minute);
    printf("Enter Second: \n");
    scanf("%d",&t.second);
    
    printf("Time %d:%d:%d",t.hour%24,t.minute%60,t.second%60);
    return 0;
}
