#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Fillfg(char A[], char h[], int& i);
void Fillxch(char A[], char h[], int& i);
void Fillych(char A[], char h[], int& i);
void Fillrch(char A[], char h[], int& i);
int main()
{
    char ch[100], xch[10], ych[10], rch[10], fg[10];
    double s = 0, p = 0;
    int i = 0, r;
    printf("Vvedite 'circle(x,y,r)'\n \n");
    fgets(ch, 100, stdin);
    puts(ch);
    memset(fg, 0, sizeof(fg));
    memset(xch, 0, sizeof(xch));
    memset(ych, 0, sizeof(ych));
    memset(rch, 0, sizeof(rch));
    Fillfg(fg, ch, i);
    Fillxch(xch, ch, i);
    Fillych(ych, ch, i);
    Fillrch(rch, ch, i);
    r = atoi(rch);
    s = r * r * M_PI;
    printf("Area = %.4f", s);
    p = 2 * M_PI * r;
    printf("\nPerimetr= %.4f\n", p);
}
void Fillfg(char A[], char h[], int& i)
{
    int k = 0;
    while (h[i] != '(') {
        A[k] = h[i];
        k++;
        i = i + 1;
    }
    i += 1;
}
void Fillxch(char A[], char h[], int& i)
{
    int k = 0;
    while (h[i] != ',') {
        A[k] = h[i];
        k++;
        i = i + 1;
    }
    i += 1;
}
void Fillych(char A[], char h[], int& i)
{
    int k = 0;
    while (h[i] != ',') {
        A[k] = h[i];
        k++;
        i = i + 1;
    }
    i += 1;
}
void Fillrch(char A[], char h[], int& i)
{
    int k = 0;
    while (h[i] != ')') {
        A[k] = h[i];
        k++;
        i = i + 1;
    }
    i += 1;
}
