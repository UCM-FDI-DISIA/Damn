# DAMN
## **1 - Ficha técnica**
<table>
  <tr>
    <td>Título</td>
    <td><i>DAMN</i</td>
  </tr>
  <tr>
    <td>Género</td>
    <td><i>Boomer-Shooter</i></td>
  </tr>
    <tr>
    <td>Target</td>
    <td>Jugadores jóvenes adultos no casuales, acostumbrados a juegos frenéticos y que busquen retos y competición, superando sus anteriores puntuaciones</td>
  </tr>
    <tr>
    <td>Rating</td>
    <td>12+ años</td>
  </tr>
    <tr>
    <td>Plataforma</td>
    <td>Windows 10, Windows 11</td>
  </tr>
    <tr>
    <td>Modos de juego</td>
    <td><i>Arena</i> - Un Jugador</td>
  </tr>
</table>

## **2 - Aspectos generales**
DAMN es un juego del género *Boomer-Shooter* en primera persona que muestra un arma en el centro, con la cual podremos disparar a los diferentes enemigos que aparecerán en una *Arena* hasta un máximo definido de rondas. Cada ronda superada aumentará la dificultad del reto, haciendo que aparezcan más enemigos y podrás conseguir nuevos recursos, como una nueva arma y munición para la misma; a la vez que recuperarás tu salud para continuar con el reto. También se conseguirán más o menos *Puntos* en función de cómo de rápido se complete cada nivel, cuánta munición tenga el jugador al acabar la partida y demás parámetros. El juego terminará al haber superado el número máximo de rondas definidas o muriendo en el intento.
Finalmente se podrá ver y grabar la puntuación conseguida (aunque el jugador haya perdido), mostrando también las mejores puntuaciones a lo largo del tiempo.

## **3 - Jugabilidad**
### **3.1 - Mecánicas**
#### **3.1.1 - Mecánicas del personaje**
El personaje tendrá movimiento rectilíneo uniformemente acelerado sobre un plano. El personaje empieza quieto, y este irá acelerando hasta una determinada velocidad, que mantendrá mientras se esté moviendo. Si se deja de pulsar el input, el personaje se detendrá instantáneamente.
De igual manera el jugador dispondrá de dos armas diferentes a lo largo del juego:
<table>
    <tr>
        <th><b>Pistola</b></th>
        <th><b>Escopeta</b></th>
    </tr>
    <tr>
        <td>
            Es el arma con la que empieza el jugador
            <ul>
                <li>Munición ilimitada</li>
                <li>Cargador de 10 balas</li>
                <li>Disponible desde el principio de la Arena</li>
                <li>Daño medio</li>
                <li>Cadencia media</li>
                <li>Un único proyectil</li>
                <li>Rango alto</li>
                <li>Recarga rápida</li>
            </ul>
        </td>
        <td>
            Se consigue al superar un cierto número de rondas sin morir
            <ul>
                <li>Munición limitada</li>
                <li>2 cartuchos de bala</li>
                <li>Disponible al llegar a un cierto número de puntos</li>
                <li>Mucho daño</li>
                <li>Cadencia lenta</li>
                <li>Varios proyectiles (3-4)</li>
                <li>Rango bajo</li>
                <li>Recarga lenta</li>
            </ul>
        </td>
    </tr>
</table>

Los proyectiles tienen un tiempo de vida, que define el rango que tiene cada arma.

Si un arma tiene munición, el jugador pueder dispararla. En caso contrario, se podrá recargar el arma equipada a partir de la munición en las reservas.
#### **3.1.2 - Mecánicas de los enemigos**
En el juego habrá un único tipo de enemigo que será estático y siempre estará apuntado al jugador. Cada cierto tiempo, el jugador disparará al jugador.
El número de enemigos irá aumentando proporcionalmente según el número de la ronda actual.
#### **3.1.3 - Mecánicas del escenario**
##### **3.1.3.1 - Obstáculos**
En el mapa habrá repartidos varios obtáculos que servirán como cobertura para el jugador.
##### **3.1.3.2 - Cajas de munición**
Al morir, habrá una probabilidad de que los enemigos creen en su posición una caja de munición. Si el jugador entra en contacto con esta, recogerá la munición y la añadirá a sus reservas.
### **3.2 - Cámara**
La cámara será en primera persona: está en todo momento en la posición del jugador a la altura de la cabeza. La cámara puede rotar sobre sí misma horizontal y verticalmente con el ratón para apuntar hacia donde mire el personaje. 
### **3.3 - Controles**
#### **3.3.1 - Navegación por menús**
Para interactuar con los elementos de los menús usaremos el ratón y el clic izquierdo 
#### **3.3.2 - Controles del jugador**
- WASD para el movimiento en el plano del personaje
- Click izquierdo para disparar el arma equipada
- TAB para alternar entre las dos armas
- R para recargar el arma actual
- ESC para abrir el menú de pausa

## **4 - Dinámicas**
El objetivo es sobrevivir las oleadas de enemigos consiguiendo la mayor puntuación posible.

## **5 - Estética**
### **5.1 - Gráficos**
El juego tendrá modelos low-poly con texturas que simulen la baja resolución de los gráficos de juegos como Doom. La paleta de colores constará de colores apagados y cálidos
![](https://static.wikia.nocookie.net/wadguia/images/a/a0/Paleta_0_Doom.png/revision/latest?cb=20151108134015)
### **5.2 - Sonido**
Tanto la música como los SFX serán sonidos de 16 bits.
### **5.3 - Game feel**
Se busca transmitir al jugador una sensación de frenesí y emoción.

## **6 - Contenido**
### **6.1 - Armas**
El jugador podrá utilizar una pistola y, al cabo de unas rondas, una escopeta
### **6.2 - Enemigos**
El juego constará de un tipo de enemigo: las torretas
### **6.3 - Mapas**
El juego constará de dos mapas: uno con cobeturas y otro sin ellas para darle más dificultad.

## **7 - Loop de juego**
### **7.1 - Sistema de oleadas**
El jugador tendrá unos segundos iniciales para prepararse, y posteriormente aparecerá un número de enemigos a forma de oleadas. Habrá un número de oleadas, y entre oleada y oleada tendremos siempre un pequeño tiempo para que el jugador pueda prepararse para la siguiente.

Al pasar un número de rondas se le proporcionará al jugador una nueva arma.

Tienes un número de munición limitado/ilimitado (ver ARMAS) que puedes recargar matando enemigos, que pueden soltar un paquete de munición de una de las armas que tengas. Los enemigos también pueden soltar un paquete de vida para que se pueda recargar.

Al término de una oleada la vida del jugador se recargará por completo.
### **7.2 - Condiciones de victoria y derrota**
El jugador perderá la partida si muere, es decir, pierde todos sus puntos de vida; y ganará si llega a un determinado número de rondas.

Ambas condiciones llevarán al jugador a un menú de victoria/derrota (ver más abajo).

## **8 - Interfaz**
### **8.1 - Menús y flujo de juego**
#### **8.1.1 - Menú inicial**
Tendrá un botón de iniciar partida, un botón de salir y un botón de ajustes.
#### **8.1.2 - Menú de victoria/derrota**
Mostrará un texto indicándole al jugador que ha ganado/perdido, junto con otro texto que mostrará los últimos X "High scores", y un botón que permitirá al jugador volver al menú inicial.
#### **8.1.3 - Menú de pausa y ajustes**
Este menú tendrá un botón de continuar, de salir o de ajustes. Al pulsar el de ajustes, se mostrarán todos los ajustes relacionados con la configuración de sonido y de pantalla (volumen y pantalla completa).
### **8.2 - Interfaz de usuario (HUD)**
La interfaz de usuario mostrará la vida del jugador, la munición actual del arma así como la munición disponible en la parte inferior derecha de la pantalla. Por otro lado, en la parte superior se mostrarán la puntuación y la oleada actuales.
### **8.3 - Flujo de juego**
![](https://i.imgur.com/ZGWENTi.png)

## **9 - Historia**
Una raza alienígena ha secuestrado a nuestro protagonista, encerrándolo en una mazmorra. Los alienígenas quieren divertirse a costa de nuestro humano, por lo que le darán un arma y lo pondrán a pelear contra su última invención macabra: unas torretas. Lo que el protagonista no sabe es que su fin ya está escrito, va a morir sí o sí. Tras pasar algunas rondas y que los alienígenas vean que nuestro protagonista las va superando sin ningún tipo de difucultad, estos decidirán ejecutarlo, acabando con la aventura del jugador.

## **10 - Referencias**
- [**DOOM**](https://store.steampowered.com/app/2280/DOOM_1993/?l=spanish), *1993, [Id Software](https://www.idsoftware.com/)*
- [**Wolfenstein 3D**](https://store.steampowered.com/app/2270/Wolfenstein_3D/?l=spanish), *1992, [Id Software](https://www.idsoftware.com/)*
- [**Portal**](https://store.steampowered.com/app/400/Portal/?l=spanish), *2007, [Valve](https://www.valvesoftware.com/es/)*
- [**Portal 2**](https://store.steampowered.com/app/620/Portal_2/?l=spanish), *2011, [Valve](https://www.valvesoftware.com/es/)*

## **11 - Assets Usados**
- Double Barrel Shotgun by J-Toastie [CC-BY] (https://creativecommons.org/licenses/by/3.0/) via Poly Pizza (https://poly.pizza/m/Emvvx56omx)
- Box of bullets by mason [CC-BY] (https://creativecommons.org/licenses/by/3.0/) via Poly Pizza (https://poly.pizza/m/buqhG_C-fWK)
- Rigged Glock by J-Toastie [CC-BY] (https://creativecommons.org/licenses/by/3.0/) via Poly Pizza (https://poly.pizza/m/FpMvDqjZFr)
- Sniper Rifle by J-Toastie [CC-BY] (https://creativecommons.org/licenses/by/3.0/) via Poly Pizza (https://poly.pizza/m/vGAzj2Of5M)
- pickup_ammo.wav by BBBBilly -- (https://freesound.org/s/653032/) -- License: Creative Commons 0
- Sniper Rifle Shot/Gun Shot (Outdoor/Close) with Bolt Action [Mixed] by EFlexMusic -- (https://freesound.org/s/393651/) -- License: Attribution NonCommercial 3.0
- P38 Shot (3).ogg by smill.and.welson -- (https://freesound.org/s/699786/) -- License: Attribution 4.0
- Shotgun Shot 01.wav by MATRIXXX_ -- (https://freesound.org/s/405504/) -- License: Creative Commons 0
- M9 Reload by oneshotofficial -- (https://freesound.org/s/616758/) -- License: Creative Commons 0
- galil reload sound.mp3 by GFL7 -- (https://freesound.org/s/276963/) -- License: Creative Commons 0
- GunRack2.mp3 by AKkingStudio -- (https://freesound.org/s/679877/) -- License: Creative Commons 0
- Shotgun Shell Insert.wav by CombatSFX4You -- (https://freesound.org/s/563650/) -- License: Attribution NonCommercial 3.0
- Música del juego del canal de Youtube de Karl Casey @ White Bat Audio (https://www.youtube.com/@WhiteBatAudio) de uso libre
- Retro pickup 2 by MaoDin204 -- (https://freesound.org/s/717706/) -- License: Creative Commons 0
- AmazDooM by Amazingmax -- (https://www.dafont.com/amazdoom.font#null) -- License: Creative Commons Attribution-Noncommercial 3.0 Unported (http://creativecommons.org/licenses/by-nc/3.0/).
- Doom Font Generator by eevee (https://c.eev.ee/doom-text-generator/)
