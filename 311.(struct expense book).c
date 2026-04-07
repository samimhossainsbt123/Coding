   #include <stdio.h>

struct Book
{
  char title[100];
  char author[50];
  float price;
};

int main()
{
  struct Book b[100], temp;
  int n, i, j;

  printf("Enter number of books: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\nEnter details for Book %d\n", i + 1);

    printf("Enter Title: ");
    // %[^\n] (space shoho)
    scanf("%s", b[i].title);

    printf("Enter Author: ");
    scanf("%s", b[i].author);

    printf("Enter Price: ");
    scanf("%f", &b[i].price);
  }

  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
  

  {
      if (b[j].price > b[j + 1].price)
      {
        temp = b[j];
        b[j] = b[j + 1];
        b[j + 1] = temp;
      }
    }
  }

  //  most expensive book
  printf("\n--- Most Expensive Book ---\n");
  printf("\nTitle: %s", b[n -1].title);
  printf("\nAuthor: %s", b[n - 1].author);
  printf("\nPrice: %.2f\n", b[n - 1].price);

  return 0;
}
