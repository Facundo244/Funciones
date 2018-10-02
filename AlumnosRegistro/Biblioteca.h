#ifndef Biblioteca
#define VACIO -1
#define OCUPADO 0
#define BORRADO 1
#define TAM 3

typedef struct
{
    int legajo;
    char nombre[21];
    float altura;
    int nota;
    int isEmpty;
    int estado;

}sAlumno;

void menu(sAlumno listadoAlumnos[]);
void cargarAlumnos(sAlumno listadoAlumnos[] , int);
void mostrarAlumnos(sAlumno listadoAlumnos[]);
void ordenarNombre(sAlumno listadoAlumnos[]);
void mostrarAlumnosAprobados(sAlumno listadoAlumnos[]);
void busquedaJuan(sAlumno listadoAlumnos[]);
void busquedaP(sAlumno listadoAlumnos[]);
void alumnoMediocre(sAlumno listadoAlumnos[]);
void modificarNota(sAlumno listadoAlumnos[]);
void notaMayor(sAlumno listadoAlumnos[]);
void inicializarArrayIlogicamente(sAlumno listadoAlumnos[]);
void cargarLibre(sAlumno listadoAlumnos[]);
int buscarLibre(sAlumno listaPersona[]);
#endif // Biblioteca


