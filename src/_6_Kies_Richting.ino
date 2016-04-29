void kiesRichting() {
  if (afstandLinks == 0 && afstandRechts == 0) {
    draaiLinks(); 
  }
  if (afstandLinks == 0 && afstandRechts <= 300 && afstandRechts >=2) {
    draaiLinks();
  }
  if (afstandRechts == 0 && afstandLinks <= 300 && afstandLinks >=2) {
    draaiRechts();
  }
  if (afstandLinks >= afstandRechts && afstandLinks >= 2 && afstandRechts >= 2) {
     draaiLinks(); 
  }
  if (afstandLinks <= afstandRechts && afstandLinks >= 2 && afstandRechts >= 2){
     draaiRechts(); 
  }
}
