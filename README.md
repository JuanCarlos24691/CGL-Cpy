# Combates Guerras Latinos

Un modo de juego desarrollado desde cero por [JuanCarlos24691](https://learn.microsoft.com/users/juancarlosospinovizcaino/transcript/d9lzi2n88pnwx1d). 

|Plugins y Compilador                                               |    version    | 
|    :----                                                          |     :----:    |
| [omp-stdlib](https://github.com/openmultiplayer/omp-stdlib)       | Ultima        |
| [Crashdetect](https://github.com/Y-Less/samp-plugin-crashdetect)  | Ultima        |
| [map-zones](https://github.com/kristoisberg/samp-map-zones)       | Ultima        |
| [MySQL](https://github.com/pBlueG/SA-MP-MySQL)                    | R41-4         |
| [YSI-Includes](https://github.com/pawn-lang/YSI-Includes)         | 5.10.0006     |
| [sscanf](https://github.com/Y-Less/sscanf)                        | 2.13.8        |
| [bcrypt-samp](https://github.com/lassir/bcrypt-samp)              | 2.2.3         |
| [strlib](https://github.com/oscar-broman/strlib)                  | Ultima        |
| [streamer](https://github.com/samp-incognito/samp-streamer-plugin)| v2.9.6        |
| [Compiler](https://github.com/pawn-lang/compiler)                 | 3.10.10       |

## Desarrollo
1. Clona el respositorio
```bash
git clone https://github.com/SHEEPUSA/CGL.git
```
2. Descarga los complementos y el compilador en la seccion de Plugins y Compilador.

3. Crea una nueva carpeta llamada 'pawn\includes' dentro del directorio y copia en esa carpeta las inclusiones previamente descargados.

4. Crea una nueva carpeta llamada 'plugins' dentro del directorio y copia en esa carpeta los plugins previamente descargados.

3. Dentro del directorio 'pawn' copia la version del compilador segun tu sistema operativo.

4. En Visual Studio Code con el archivo main.pwn abierto ve a la sección de 'Terminal -> Ejecutar tarea de compilación...' para compilar el modo de juego.
