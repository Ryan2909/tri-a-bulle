#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>

void calculer_moyenne(float *tab, float *moyenne) {
	*moyenne = 0;
	for (int i = 0; i < 7; i++) {
		*moyenne = tab[i] + *moyenne;
	}
	*moyenne = *moyenne / 7;
}

float calculer_ecart_type(float *tab, float *min, float *max) {
	*min = tab[0];
	*max = tab[0];
	for (int i = 0; i < 7; i++) {
		if (tab[i] > *max) {
			*max = tab[i];
		}

		if (tab[i] < *min) {
			*min = tab[i];
		}
		
	}
	return  *max - *min;
}
float calculer_mediane(float *tab) {
	float tmp;
	for (int i = 0; i < 7 - 1; i++)
	{
		for (int j = 0; j < 7 - i - 1; j++)
		{
			/* Pour un ordre décroissant utiliser < */
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}
}

	



int main() {
	float tab[7];
	float moyenne = 0; 
	float min = 0; 
	float max = 0;
	float ecart_type = 0;
	int size;
	std::cout << "rentrez le prix de l'essence de tous les jours de la semaine \n";
	for (int i = 0; i < 7; i++) {
		std::cin >> tab[i];
	}

for (int i = 0; i < size - 1; i++)
{
	for (int j = 0; j < size - i - 1; j++)
	{
		/* Pour un ordre décroissant utiliser < */
		if (tab[j] > tab[j + 1])
		{
			tmp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = tmp;
		}
		
	}return tab[3];
}
	calculer_moyenne(tab, &moyenne);
	ecart_type = calculer_ecart_type(tab, &min, &max);

	std::cout << "la moyenne est donc ";
	std::cout << moyenne; 
	std::cout << "\n";
	std::cout << "l'ecart type est de ";
	std::cout << ecart_type;
}
