#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void Fillfg(char A[], char h[], int& i);
void Fillxch(char A[], char h[], int& i);
void Fillych(char A[], char h[], int& i);
void Fillrch(char A[], char h[], int& i);
int main() {
	char ch[100], xch[10], ych[10], rch[10], fg[10];
printf("Vvedite 'circle(x,y,r)' \n"
gets(h);
memset (fg,0,sizeof(fg));
memset (xch,0,sizeof(xch));
memset (ych,0,sizeof(ych));
memset (rch,0,sizeof(rch));
Fillfg (fg,h,i);
Fillxch (xch,h,i);
Fillych (ych,h,i);
Fillrch (rch,h,i);
x=atoi(xch);
y=atoi(ych);
r=atoi(rch);
}
void Fillfg(char A[], char h[], int& i) {
	int k = 0;
	while (h[i] != '(') {
		A[k] = h[i];
		k++;
		i = i + 1;
	}
	i += 1;
}
void Fillxch(char A[], char h[], int& i) {
	int k = 0;
	while (h[i] != ',') {
		A[k] = h[i];
		k++;
		i = i + 1;
	}
	i += 1;
}
void Fillych(char A[], char h[], int& i) {
	int k = 0;
	while (h[i] != ',') {
		A[k] = h[i];
		k++;
		i = i + 1;
	}
	i += 1;
}
void Fillrch(char A[], char h[], int& i) {
	int k = 0;
	while (h[i] != ')') {
		A[k] = h[i];
		k++;
		i = i + 1;
	}
	i += 1;
}
