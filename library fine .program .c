/* programmer ;EDISON CHEPKWONY 
               ;CT101/G/23928/24 
  Date;2/10/24 
program to determine library fine 
*/

#include <stdio.h>

int main()
 {
    
    int dueDate,returnDate,overdueDays,bookID;
    float charges;
    float rate;
    // promt the user to enter the book ID and dates
    printf("Enter Book ID;");
    scanf("%d",&bookID);
    printf("Enter Due Date: ");
    scanf("%d",&dueDate);
    printf("Enter Return Date: ");
    scanf("%d",&returnDate);
    
    
    
    // Calculate overdue days by
    if (returnDate > dueDate) 
    {
        overdueDays = returnDate - dueDate;
    }
     else 
    {
        overdueDays = 0;
    }

    // Calculate charges according to overdue days
    if (overdueDays > 0) 
    {
        if (overdueDays <= 7) 
    {
       charges = overdueDays * 20; // 20 per day for 1-7 days
    } else if (overdueDays <= 14) 
    {
            charges = (7 * 20) + ((overdueDays - 7) *50); // 50 per day for 8-14 days
    }
     else 
    {
            charges = (7 * 20) + (7 * 50) + ((overdueDays - 14) * 100); // 100 per day for 15+ days
    }
    }
     //Calculate the fine rate
    {    rate =(charges/overdueDays);
    }
    //displays the results 
    printf("book ID ;%d\n",bookID);
    printf ("dueDate ;%d\n",dueDate);
    printf ("returnDate ;%d\n",  returnDate);
    printf("Overdue Days: %d\n", overdueDays);
    printf ("rate(in percentage);%f\n",rate);
    printf("Total Charges(shs): %.2f\n", charges);

    return 0;
}
    