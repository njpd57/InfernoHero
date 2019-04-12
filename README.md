Inferno Hero 

es un juego escrito en c++ con las librerias de SFML.

Info:

    Tilemap/Tilesets y Bloques:

        Un tilemap consiste en bloques estos bloques se construyen en base a un
        tileset que es una imagen con sprites de cada bloque.

        por tanto la base bloque es escensial y lo primero a crear
        debe tener una posicion y un sprite

        el tileset debe ser capaz de leer la imagen y devolver los valores
        necesarios para que el bloque pueda iniciarse
        una vez asegurado el funcionamiento de los tilesets 

        se procede a crear un mapa de tiles el cual recibe la informacion de
        un tileset una matriz con los datos de los bloques y se crean bloques
        para rellenar el mapa correctamente... despues en LOGICA se crea la collision
        y otros.

        
    Changelog

06/04/2019
    - Prototipo
    - Carga de tileset

09/04/2019
    -Tileset Terminado.
    -Blocks Terminado.
    -Procesando Tilemap 
        TODO: Funcionamiento de layers,carga de arrays.

11/04/2019
    -Carga de Arrays y tilemaps Funcionando correctamente
    