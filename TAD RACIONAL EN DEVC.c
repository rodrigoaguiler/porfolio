//copiar en el codigo que tenes que hacer con tad racional
//TAD RACIONAL
//ESPECIFICACION
//(1) Estructura de datos
struct racional{
	int a;
	int b;
};
typedef struct racional RACIONAL; //DISPONIBLE EN LA INTERFAZ

//2) CABECERA DE LAS OPERACIONES: //DISPONIBLE EN LA INTERFAZ
RACIONAL crear(void);
RACIONAL sumar(RACIONAL p,RACIONAL q);
void mostrar(RACIONAL r);

