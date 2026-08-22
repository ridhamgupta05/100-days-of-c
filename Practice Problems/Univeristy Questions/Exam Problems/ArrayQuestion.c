/*You need to implement a program for a university
library to support their book catalogue system.
For the simplicity, the book information is maintained with unique 4 digit id.
Create a suitable search logic that allows librarian to find a book by id and
to show whether it is available in the library or not.*/

#include <stdio.h>

int main()
{
    int search, found = 0;
    int bookid[10] = {2321, 3113, 5242, 2742, 2736, 2973, 8739, 4529, 8845, 9165};
    int qty[10] = {10, 3, 4, 43, 55, 6, 0, 0, 3, 22};

    printf("Search ID: ");
    if (scanf("%d", &search) != 1) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        if (bookid[i] == search)
        {
            found = 1;
            if (qty[i] > 0)
            {
                printf("Book found and available.\n");
            }
            else
            {
                printf("Book found but not available.\n");
            }
            break; // Stop searching once the match is found
        }
    }

    if (!found)
    {
        printf("Book not found.\n");
    }

    return 0;
}