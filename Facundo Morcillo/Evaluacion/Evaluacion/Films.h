#ifndef Films
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE -1
#define OCUPADO 0


typedef struct
{

    int id;
    char titulo[21];
    char nacionalidad[21];
    char director[21];
    int year;
    int estado;

} sFilm;

void menuFilms(sFilm[] , int );
/** \brief Menu donde se encuentra cada opcion para que el usuario elija
 *
 * \param sFilm[]
 * \param int tam
 * \return void
 *
 */
int cargarFilm(sFilm[] , int );
/** \brief Carga de la pelicula con todos sus parametros
 *
 * \param sFilm[]
 * \param int tam
 * \return int
 *
 */
void inicializarArrayIlogicamenteFilms(sFilm[] , int);
/** \brief incia el array de Peliculas en -1 (LIBRE)
 *
 * \param sFilm[]
 * \param int tam
 * \return void
 *
 */

void mostrarUnaPelicula(sFilm);
/** \brief muestra solo una pelicula encolumnada
 *
 * \param sFilm
 * \return void
 *
 */
int mostrarListado(sFilm[] , int);
/** \brief muestra un listado encolumnado de todas las peliculas con sus respectivos parametros
 * \param sFilm[]
 * \param int tam
 * \return int
 *
 */
int traerIndiceVacio(sFilm[] , int );
/** \brief busca un espacio vacio para alamacenar datos
 *
 * \param sFilm[]
 * \param int tam
 * \return int
 *
 */
void filmModify(sFilm[] , int );
/** \brief Modifca un parametro a eleccion del usuario
 *
 * \param sFilm[]
 * \param int tam
 * \return void
 *
 */
void filmRemoveById(sFilm[], int );
/** \brief Elimina una pelicula segun el ID de la misma
 *
 * \param sFilm[]
 * \param int tam
 * \return void
 *
 */

int buscarFilmID(sFilm[], int tam, int id);
/** \brief Busca el ID de una pelicula
 *
 * \param sFilm[]
 * \param int tam
 * \param int id
 * \return int
 *
 */

int IdAuto(void);
/** \brief Ingrese un ID incrementandose a partir de 1
 *
 * \param sFilm[]
 * \param void

 * \return static int
 *
 */

void mostrarSoloTitulo(sFilm listadoFilm);
/** \brief Muestra solo los datos de un Titulo
 *
 * \param sFilm[]
 * \return void
 *
 */
int buscarTitulodePelicula(sFilm listadoFilm[], char titulo[], int tam);
/** \brief Busca un titulo de pelicula ya ingresado
 *
 * \param sFilm[]
 * \param int tam

 * \return int
 *
 */

int mostrarListadoTitulo(sFilm listadoFilm[] , int tam);
/** \brief muestra el Titulo y su respectivo nombre en modo encolumnado
 *
 * \param sFilm[]
 * \param int tam

 * \return int
 *
 */


void filmConsulta(sFilm listadoFilm[], int tam);
/** \brief Ingrese el titulo de la pelicula y muetra su informacion
 *
 * \param sFilm[]
 * \param void

 * \return static int
 *
 */





#endif // Films
