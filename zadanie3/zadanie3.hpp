#ifndef zadanie3_hpp
#define zadanie3_hpp

struct Element {
    int skrzynka;
    Element* next;
};

struct Lista {
    int ilosc;
    Element *glowa, *ogon;
};

void add_head(Lista*,Element*);

void print(Element*);
void print(Lista*);

#endif