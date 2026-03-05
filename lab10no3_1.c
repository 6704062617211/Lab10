#include <stdio.h>
#include <stdlib.h>

struct Books{
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books CBook);

int main() {

    printf("Enter Book ID :");
    scanf("%d", &ComputerBook.BookID);

    printf("Enter Book Title :");
    scanf("%s", ComputerBook.BookTitle);

    DisplayData(ComputerBook);

    return 0;
}

void DisplayData(struct Books CBook){
    printf("Book ID : %d \n", CBook.BookID);
    printf("Book Title : %s \n", CBook.BookTitle);
}
//void DisplayData(struct Books CBook) คือ ฟังก์ชันที่ใช้แสดงข้อมูลของหนังสือ โดยรับข้อมูลแบบโครงสร้าง struct Books เข้ามาเป็นพารามิเตอร์
//พารามิเตอร์ที่รับเข้ามา struct Books CBook
