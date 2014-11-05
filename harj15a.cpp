/******
*ohjelman nimi: harjoitus 15
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon (ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)

Käyttäjä syättää jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA

*versio 1.0
*pvm: 22.10.2014
*/
#include <iostream>
using namespace std;
int main()
{
	char mjono1[18];

	cout << "Anna 17 merkkia pitka merkkijono ";
	cin >> mjono1;
	cout << mjono1 << endl;
	cout << mjono1[16] << mjono1[15] << mjono1[14] << mjono1[13] << mjono1[12] << mjono1[11] << mjono1[10]
		<< mjono1[9] << mjono1[8] << mjono1[7] << mjono1[6] << mjono1[5] << mjono1[4] << mjono1[3] << mjono1[2]
		<< mjono1[1] << mjono1[0] << endl;

}