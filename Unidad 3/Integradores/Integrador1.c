/*La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
dependen de:
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
● Número de pasajeros que lleve
● Tipo horario del día:
Horario A: horas de “Alta” congestión:
● Los automóviles con tres pasajeros o más no pagan peaje
● Los camiones pagan $300
● Las motos pagan $100
Horario B: horas de “Alta” congestiónhoras de “Alta” congestión
● Los automóviles pagan $150
● Los camiones pagan $200
● Las motos no pagan peaje
En este horario la tarifa es independientemente del número de pasajeros.
Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    float horario;
    int cant_pasajeros;
    printf("Tipo de vehiculo");

    switch ()
    {
     case 1:
        printf("Ingrese la canidad de pasajeros\n");
     scanf("%i", &cant_pasajeros);

     while (cant_pasajeros > 5 );
     {
        printf("Cantidad de pasajeros erronea, ingrese los pasajeros devuelta\n");
        scanf("%i", &cant_pasajeros);
     }

     printf("Ingrese 1 si horas de “Alta” congestión\n");
     printf("Ingrese 2 si horas de “Baja” congestión\n");
     scanf("%f", &horario);

     while (horario != 1 && horario != 2);
     {
        printf("Dato invalido\n");
     }
        break;
    
     default:
        break;
    }


    
    
}