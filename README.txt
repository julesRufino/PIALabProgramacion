Instrucciones:
Desarrollar un programa para llevar a cabo los procesos
basicos de un hospital, tales como el alta, la modificacion
y eliminacion del expediente medico de un paciente utilizando
archivos. Al usuario se le presentara el siguiente menu:

1. Alta del paciente.
2. Busqueda o edicion de paciente.
3. Listado de pacientes.
4. Baja de paciente.
5. Salir.

Alta del paciente.

El usuario podra registrar un nuevo paciente indicando el tipo
de servicio (consulta externa o emergencia), nombre, direccion,
edad, genero, descripcion de los sintomas y el numero del
consultorio del doctor disponible que lo atendera 
(cada tipo de consulta tendra 5 consultorios). La informacion 
proporcionada se alamacenara en un archivo de texto, se le asignara
un numero al registro y se le debera mostrar al usuario este numero
de registro.
En caso de los recien nacidos y los ninos menores de 13 anos se tomara
su nombre y edad en el registro mas los datos del padre o tutor 
(nombre, direccion, etc) que lo acompane 
(considere colocar un menu en esta opcion para elegir si se va a dar
de alta a un paciente adulto o menor).

Busqueda o edicion de paciente.

El usuario puede buscar o editar a traves del numero de registro del paciente
o su nombre completo. Se le mostrara toda la informacion correspondiente al numero
de registro proporcionado o el nombre completo 
(en caso de que haya varios usuarios con el mismo nombre debera 
mostrar a todos los pacientes que coincidan con el nombre). Si el numero de registro
esta equivocado, el programa muestra un mensaje que indica que no hay registros disponibles.

Listado de pacientes.

Este listado se debera obtener directamente del archivo de texto y se mostraran los datos
de todos los pacientes.

Bajar de pacientes.

Esta opcion servira para eliminar el registro de un paciente.

Nota: Deberan validar que los datos en las opciones sean correctos y guardar la informacion
en un archivo de texto. En base a las politicas del Hospital, el registro de los recien nacidos.