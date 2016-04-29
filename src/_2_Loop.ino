//#####################################################################################################################
//#                                                                                                                   #
//#   Dit stukje is de loop, alles wat hierin wordt gezegd wordt constant opnieuw uitgevoerd,                         #
//#   als hij bij de laatste regel is dan begint hij weer opnieuw.                                                    #
//#                                                                                                                   #
//#   let op, de code die hierin staat bevat verwijzingen, deze kunnen in andere tabbladen staan. Deze hebben dan     #
//#   dezelfde naam, de eerste die we tegen komen is "vooruit();", deze staat in het tabblad "bewegingen".            #
//#                                                                                                                   #
//#####################################################################################################################

void loop() {
  backUp();
  motor1.setSpeed(snelheid);          //Deze 4 regels sturen de motoren aan, hij zegt elke keer weer
  motor2.setSpeed(snelheid);          //tegen de wielen dat ze op een bepaalde snelheid moeten gaan
  motor3.setSpeed(snelheid);          //rijden, deze snelheid hebben jullie als het goed is al ingevuld
  motor4.setSpeed(snelheid);          //kijk het even voor de zekerheid na.
  
  delay(50);                          //Deze regel geeft aan dat de loop (zoals we al hadden uitgelegd) niet te snel gaat. als deze te snel gaat kunnen de hersens van de robot dit niet aan.
  
  unsigned int uS = sonar.ping();     //Deze regel zegt tegen de robot wat de afstand van de muur is. Hier hoeven jullie nog niets mee te doen.
  
  int afstand = uS / US_ROUNDTRIP_CM; //Net als bij de tennisbal weten we alleen hoe lang het duurt om de bal te gooien en te vangen,
                                      //deze regel zorgt ervoor dat het omgerekend wordt naar centimeter en daarom ook begrijpelijk is voor ons.
  
  if(afstand == 0 || afstand >=stopAfstand){
    vooruit();                        //De robot blijft vooruit rijden.
    
    kijkVooruit();                    //De robot kijkt vooruit, ook meet hij gelijk de afstand van de muur af, de afstand hebben jullie
                                      //als het goed is als ingesteld, zo niet scroll dan even naar boven en zoek naar "stopAfstand".
  }
  if (afstand <= stopAfstand && afstand >=1){
    handrem();                        //Als de stopAfstand zoals jullie al hebben benoemnd is bereikt, dan zal de robot op de rem gaan.
    kijkOmheen();                     //Zodra de robot gestopt
  }
}
