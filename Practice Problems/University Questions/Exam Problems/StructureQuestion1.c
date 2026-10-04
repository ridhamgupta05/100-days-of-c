#include <stdio.h>
struct Book
{
    int Book_ID;
    char Title[100];
    float Price;
};

int display(struct Book b);

int main()
{
    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.Book_ID);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", &b.Title);
    printf("Enter Book Price: ");
    scanf("%f", &b.Price);

    display(b);
    return 0;
}
int display(struct Book b)
{
    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b.Book_ID);
    printf("Book Title: %s\n", b.Title);
    printf("Book Price: %.2f\n", b.Price);
}