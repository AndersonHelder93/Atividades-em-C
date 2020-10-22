#include <stdio.h>
#include <string.h>


struct horario{
        int horas, minutos, segundos;
    };

    struct data{
        int dia, mes, ano
    };

    struct compromisso{
        struct data esta_data;
        struct horario este_horario;
        char nome[50];
    };


