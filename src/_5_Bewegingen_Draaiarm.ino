void kijkVooruit() {   // Deze regel zorgt ervoor dat de servo (draai-motor)
  draaiArm.write(90); // weet welke kant hij op moet kijken. Hij stelt hem
}                      // elke keer in het midden.

void kijkOmheen(){
//  De servo kijkt naar links, hier neemt hij de afstand op en maakt een kort geluidje.
  draaiArm.write(linksKijken);
  afstandLinks = sonar.ping();
  TimerFreeTone(A3, 262, 250);
  delay(320);
  
// De servo draait nu helemaal naar rechts, kijkt hier hoeveel afstand hij heeft en maakt hier ook weer een geluidje.
  draaiArm.write(rechtsKijken);
  TimerFreeTone(A3, 262, 250);
  delay(620);
  afstandRechts = sonar.ping();

// De servo kijkt weer naar het midden en maakt een geluidje. Hij neemt niet de afstand op want hij is al gestopt en weet dat er geen plaats is om vooruit te gaan rijden.
  draaiArm.write(middenKijken);
  TimerFreeTone(A3, 262, 250);
  delay(275);
  
// Nu de robot weet hoeveel ruimte en links en rechts is kan hij beslissen welke kant hij op wilt rijden. Hiervoor kunnen we in het tabblad kiesrichting kijken.
  kiesRichting();
}
