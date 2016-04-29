#include <NewPing.h>                 //Deze 4 regels openen de libraries, dit is niet belangrijk
#include <AFMotor.h>                 //voor deze les. Deze regels zorgen ervoor dat alle commando's
#include <Servo.h>                   //en taken die we hieronder aan de robot geven goed kunnen  worden 
#include <TimerFreeTone.h>           //uitgevoerd (zoals een woordenboek ons een andere taal kan leren begrijpen)

NewPing sonar(A4, A5, 350);          //Deze regel geeft aan waaraan de Ping Sensor is verbonden.

AF_DCMotor motor1(1, MOTOR12_8KHZ);  //Deze 4 regels zorgen ervoor dat de hersenen van de robot weten welke
AF_DCMotor motor2(2, MOTOR12_8KHZ);  //motor welke is. Zodat we deze per motor makkelijk kunnen aanspreken.
AF_DCMotor motor3(3, MOTOR34_8KHZ);  //
AF_DCMotor motor4(4, MOTOR34_8KHZ);  //

Servo draaiArm;                      //Dit apparaat zorgt ervoor dat de sensor om zich heen kan kijken, met deze regel wordt hij gestart

//#####################################################################################################################
//#                                                                                                                   #
//#   De volgende waarden zijn integers, een moeilijk woord. Wat ze eigenlijk doen is het opslaan van informatie.     #
//#   Zo onthouden een specifiek stukje wat we ze zodadelijk aanrijken. Om iets te laten reageren op elkaar moeten    #
//#   we tijdelijk dingen opslaan, zie integers daarom ook als een teller.                                            #
//#                                                                                                                   #
//#####################################################################################################################

int afstand;                         //Deze integer slaat tijdelijk de afstand op als de robot vooruit rijdt.

int afstandLinks;                    //Op het moment dat de robot ziet dat vooruit niet meer gaat kijkt hij links
int afstandRechts;                   //en rechts. de afstand slaat hij hierin tijdelijk op.

int snelheid = 140 ;                 //0 is stil staat, 140 gas geven, stel deze waarde in op "140"
int snelheidDraaien = 40;           //Dit is de waarde die we samen hebben ingegeven, hij geeft nu 165 kracht als hij draait

int stopAfstand = 20;                //De aftsand van de muur waar hij stopt. (in centimeter)
                                     //1 meter is 100cm, houd deze waarde altijd boven de 1 en onder de 350
                                      
int linksKijken = 0;
int middenKijken = 90;
int rechtsKijken = 180;


