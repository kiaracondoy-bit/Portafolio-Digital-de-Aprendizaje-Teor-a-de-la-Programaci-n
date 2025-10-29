Algoritmo AHORROANO
	// Declaración de variables
	Definir sueldo, ahorroanual Como Real
	Definir ANO, SEMANAMES, AHORRO Como Real
	ANO <- 12
	SEMANAMES <- 4
	AHORRO <- 0.15
	// Datos de entrada
	Escribir 'Ingrese el sueldo mensual'
	Leer sueldo
	// Proceso
	ahorroanual <- ((sueldo*0.15)*4)*ANO
	// Salida
	Escribir 'Su ahorro anual dado que ahorra el 15% semanalmente es de ', ahorroanual
FinAlgoritmo
