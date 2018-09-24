#ifndef Biblioteca

typedef struct
{
    int legajo;
    char nombre[21];
    float altura;
    int nota;
}sAlumno;

void cargarAlumnos(sAlumno listadoAlumnos[], int tam);
void mostrarAlumnos(sAlumno listadoAlumnos[], int tam);
void ordenarNombre(sAlumno listadoAlumnos[], int tam);
void mostrarAlumnosAprobados(sAlumno listadoAlumnos[], int tam);
void busquedaJuan(sAlumno listadoAlumnos[] , int tam);
void busquedaP(sAlumno listadoAlumnos[] , int tam);
void alumnoMediocre(sAlumno listadoAlumnos[] , int tam);
void modificarNota(sAlumno listadoAlumnos[] , int tam);
void notaMayor(sAlumno listadoAlumnos[] , int tam);
#endif // Biblioteca


