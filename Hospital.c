#include <stdio.h>
#include <stdbool.h>

bool validarOpcion(int *);
bool validarEdad(int);
bool validarGenero(char);
bool validarNumeroDeConsultorio(int);

void altaDelPaciente();
void busquedaoEdicionDePaciente();
void listadoDePacientes();
void bajaDePaciente();

main()
{
	int opcion;
	
    do{
    printf("Menu.\n");
    printf("1. Alta del paciente.\n");
    printf("2. Busqueda o edicion de paciente.\n");
    printf("3. Listado de pacientes.\n");
    printf("4. Baja de paciente.\n");
    printf("5. Salir.\n");
    
    printf("Ingrese la opcion seleccionada: ");
    scanf("%d", &opcion);
    
    while(validarOpcion(&opcion))
    {
    	printf("Error, ingrese debe ingresar una opcion entre 1-5.\n");
        printf("Ingrese la opcion seleccionada: ");
    	scanf("%d", &opcion);
	}
	
	switch(opcion)
	{
		case 1:
			
			break;
		
		case 2:
			break;
			
		case 3:
			break;
		
		case 4:
			break;
			
		case 5:
			break;
	}
	
	}while(opcion != 5);
}

bool validarOpcion(int *opcionPtr)
{
	bool validacion = false;
	
	if(*opcionPtr <= 0 || *opcionPtr > 5)
		validacion = true;
	
	return validacion;
}
