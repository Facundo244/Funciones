#ifndef Director
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE -1
#define OCUPADO 0

typedef struct
{
    int day;
    int month;
    int year;

} sDate;

typedef struct
{
    char name[21];
    char nacionalidad[21];
    int estado;
    sDate fechaDeNacimiento;

} sDirector;


void menuDirector(sDirector[] , int   );
/** \brief Menu donde se encuentra cada opcion para que el usuario elija
 *
 * \param sDirector[]
 * \param int tam
 * \return void
 *
 */
int traerIndiceVacioDirector(sDirector[] , int );
/** \brief Busca un espacio vacio para almacenar datos
 *
 * \param sDirector[]
 * \param int tam
 * \return int
 *
 */
void inicializarArrayIlogicamenteDirector(sDirector[] , int);
/** \brief Inicializa en array de director en -1 (LIBRE)
 *
 * \param sDirector[]
 * \param int tam
 * \return void
 *
 */
void mostrarUnDirector(sDirector);
/** \brief Muestra solo un director con sus respectivos parametros
 *
 * \param sDirector
 * \return void
 *
 */
int mostrarListadoDirector(sDirector listadoDirector[] , int );
/** \brief Muestra un listado encolumnado de todas los directores con sus respectivos parametros
 *
 * \param sDirector[]
 * \param int tam
 * \return int
 *
 */
void removeDirector(sDirector[], int tam);
/** \brief Elimina un director segun el nombre del mismo
 *
 * \param sDirector[]
 * \param int tam
 * \return void
 *
 */
int buscarNombreDirector(sDirector[], char nombre[], int tam);
/** \brief Busca el nombre de un Director
 *
 * \param sDirector[]
 * \param char nombre[]
 * \param int tam
 * \return int
 *
 */
int cargarDirector(sDirector[], int tam);
/** \brief Carga del director con sus parametros
 *
 * \param sDirector[]
 * \param int tam
 * \return int
 *
 */


#endif // Director
