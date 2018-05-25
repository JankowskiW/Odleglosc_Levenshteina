/* 
* Plik naglowkowy levenshteindistance.h
* zawiera deklaracje funkcji niezbednych
* do poprawnego dzialania programu 
*
* min()			- zwraca minimalna wartosc z trzech podanych w argumentach
* levenshtein() - tworzy macierz kosztow dla dwoch podanych slow, 
*				  zwraca odleglosc edycyjna dla tych slow
* show_matrix()	- wyswietla macierz kosztow
* edits()		- wyswietla dzialania proste, jakie nalezy wykonac
*				  na ciagu pierwszym aby przeksztalcic go w drugi
*/
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int min(int, int, int);
int levenshtein(int**, int, int, string, string);
void show_matrix(int**, int, int, string, string);
void edits(int**, int, int, string, string);