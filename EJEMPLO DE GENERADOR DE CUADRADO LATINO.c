#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int N = 4;  // Cambia esto al orden que desees
	int cuadrado[N][N];
	
	// Inicializar la semilla para la generación de números aleatorios
	srand(time(0));
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cuadrado[i][j] = rand() % N + 1;
		}
	}
	
	// Imprimir el cuadrado latino
	printf("Cuadrado Latino de orden %d:\n", N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%i ", cuadrado[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
