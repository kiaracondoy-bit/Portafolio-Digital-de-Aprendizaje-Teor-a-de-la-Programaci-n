Algoritmo litrosAGalones
	// Declaraci�n de variables
	Definir litros, galones, pago Como Real
	Definir pagoGalon Como Real
	Definir GALONPORLITRO Como Real
	GALONPORLITRO <- (1/3.785)
	// Datos de entrada
	Escribir 'Ingrese la cantidad de litros producidos en un d�a'
	Leer litros
	Escribir 'Ingrese el costo por galon'
	Leer pagoGalon
	// Proceso
	galones <- litros*GALONPORLITRO
	pago <- galones*pagoGalon
	// Salida
	Escribir 'El pago por el d�a de producci�n es de ', pago
FinAlgoritmo
