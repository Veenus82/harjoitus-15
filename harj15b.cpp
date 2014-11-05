/******
*ohjelman nimi: harjoitus 15
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon (ei välilyäntejä).
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")

Käyttäjä syättää jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA

*versio 1.0
*pvm: 22.10.2014
*/
#include <iostream>
using namespace std;
int main()
{
	const int max = 18;
	char mjono1[max];
	char mjono2[max];
	int ind;
	int ind2;

	cout << "Anna 17 merkkia pitka merkkijono: ";
	cin >> mjono1;
	cout << mjono1 << endl;
	/*mjono2[0] = mjono1[16];
	mjono2[1] = mjono1[15]; 
	mjono2[2] = mjono1[14]; 
	mjono2[3] = mjono1[13];
	mjono2[4] = mjono1[12]; 
	mjono2[5] = mjono1[11];
	mjono2[6] = mjono1[10]; 
	mjono2[7] = mjono1[9];
	mjono2[8] = mjono1[8];
	mjono2[9] = mjono1[7]; 
	mjono2[10] = mjono1[6];
	mjono2[11] = mjono1[5];
	mjono2[12] = mjono1[4]; 
	mjono2[13] = mjono1[3]; 
	mjono2[14] = mjono1[2]; 
	mjono2[15] = mjono1[1];
	mjono2[16] = mjono1[0]; 
	mjono2[17] = mjono1[17];*/
	ind = 0;
	ind2 = 16;
	while (ind2 >= 0)
	{
		mjono2[ind] = mjono1[ind2];
		ind++; ind2--;
	}
	mjono2[17] = mjono1[17];
	cout << mjono2;
}