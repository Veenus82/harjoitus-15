#include <iostream>
using namespace std;
int main()
{
	char jono1[101];
	char jono2[101];
	char jono3[101];
	cout << "Anna korkeintaan 100 merkin pituinen merkkijono: ";
	cin.getline(jono1, 100);
	cout << jono1 << endl;
	int i, j, mpituus;
	for (i = 0; jono1[i] != '\0'; i++);
	mpituus = i;
	cout << "Pituus: " << mpituus << endl;
	for (i = 0, j = 0; i < mpituus; i++)
	{
		if (jono1[i] != ' ')
		{
			jono3[j] = jono1[i];
			j++;
		}
	}
	jono3[j] = '\0';
	mpituus = j;
	cout << "Tiivistetty: " << jono3 << endl;
	for (i = 0, j = mpituus - 1; j >= 0; i++, j--)
	{
		jono2[i] = jono3[j];
	}
	jono2[i] = '\0';
	if (!strcmp(jono2, jono3))
		cout << "PALINDROMI";
	else cout << "EI PALINDROMI";
}