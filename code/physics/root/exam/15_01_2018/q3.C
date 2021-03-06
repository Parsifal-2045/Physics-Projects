/*
Quesito 3 (6 punti)
 Si scriva la parte rilevante ed autoconsistente del codice di una macro di ROOT in cui:
1. Si definisce un istogramma monodimensionale di 100 bin in un range da 0 a 10. 
2. Si riempe l’istogramma con 1e7 occorrenze di una variabile casuale x distribuita secondo la 
p.d.f. f(x)=sqrt(x)+(x*x) nel range [0,10] , utilizzando il metodo FillRandom(const char* f,Int_t 
N) della classe di istogrammi.
*/

#include <TH1.h>
#include <TF1.h>

void macro3(int nGen = 1e7)
{
    TH1F *h = new TH1F("h", "histogram", 100, 0., 10.);
    TF1 *f = new TF1("f", "sqrt(x)+(x*x)", 0., 10.);
    h->FillRandom("f", nGen);
    h->Draw();
}