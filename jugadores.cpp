#include <iostream>
#include <string>
#include <cstdlib>  // Función rand().
#include <ctime>    // Función time() para generar una nueva seed aleatoria.
using namespace std;

#define log(x) cout << x << endl;

class Jugador{
    int vida,atack;
    string name;
    Jugador* last;
    /*
        
        Agrega una propiedad para guardar el jugador que lo atacó por última vez.
    */
    
    Jugador(); 
    Jugador(int hp, int damage, string n ); /* agrega parámetros para asignar hp, ataque y nombre */
    void atacar(jug); /* agregar parámetros para atacar a otro jugador*/
};

int main()
{
    srand(time(0));  // Seed para generar valores aleatorios
    int acum;
    Jugador j1;
    j1.vida=150;
    j1.atack=15;
    j1.name="Dionisio";
    Jugador j2(190,19,"Sigala");
    acum=vida-atack;
    if(Jugador.vida=0)
    cout"El jugador ha muerto";
    else{
        log(acum);
    }
    
    /*
        Crear al menos 2 jugadores con diferentes nombres, vida y ataque. 
        Los jugadores deben atacarse entre sí, tomando turnos, hasta que uno pierda toda su vida.
        En cuanto la vida del jugador se reduzca a 0 el programa muestra al ganador y se termina. 
        No importa quien ataca primero.
    */

    return 0;
}

Jugador::Jugador(){
    vida=100;
    atack=5;
    name="No definido";
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
}

Jugador::Jugador(int hp, int damage, string n  ){
if((hp>0)&&(hp<=200))
hp=vida;
else{
vida=100;
};
if((damage>=0)&&(damage<=20))
damage=atack;
else{
damage=0;
};
n=name;
    /*
        Asignar los parámetros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        Máximo 200 hp y 20 attack
    */
}

void Jugador::atacar( Jugador Jugador ){/* Agregar parámetros para atacar a otro Jugador */
   Jugador.vida=Jugador.vida-Jugador.atack;
   radn(x)*1000;
   
    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */
}