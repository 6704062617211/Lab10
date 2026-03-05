#include <stdio.h>
#include <stdlib.h>

struct Books{
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books *CBook);

int main() {

    printf("Enter Book ID :");
    scanf("%d",&ComputerBook.BookID);

    printf("Enter Book Title :");
    scanf("%s",ComputerBook.BookTitle);

    DisplayData(&ComputerBook);

    return 0;
}

void DisplayData(struct Books *CBook){
    printf("Book ID : %d \n",(*CBook).BookID);
    printf("Book Title : %s \n",CBook->BookTitle);
}
//*(CBook).BookID คือ การเข้าถึงค่า BookID ของ struct ผ่านตัวชี้ CBook
//CBook->BookTitle คือ การเข้าถึงค่า BookTitle ของ struct ผ่านตัวชี้ CBook (เขียนแบบย่อของ (*CBook).BookTitle)
