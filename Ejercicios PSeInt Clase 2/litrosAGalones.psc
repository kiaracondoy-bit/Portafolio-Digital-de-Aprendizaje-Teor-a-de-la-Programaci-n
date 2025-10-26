Algoritmo litrosAGalones
	// Declaración de variables
	Definir litros, galones, pago Como Real
	Definir pagoGalon Como Real
	Definir GALONPORLITRO Como Real
	GALONPORLITRO <- (1/3.785)
	// Datos de entrada
	Escribir 'Ingrese la cantidad de litros producidos en un día'
	Leer litros
	Escribir 'Ingrese el costo por galon'
	Leer pagoGalon
	// Proceso
	galones <- litros*GALONPORLITRO
	pago <- galones*pagoGalon
	// Salida
	Escribir 'El pago por el día de producción es de ', pago
FinAlgoritmo
