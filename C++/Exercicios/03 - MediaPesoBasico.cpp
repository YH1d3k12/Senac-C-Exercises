#include <iostream>
using namespace std;

double p1;
double p2;
double p3;
double p4;
double p5;
double media;

main(){
	system("chcp 65001");

	cout << "\n\t Informe o peso de cinco pessoas e veja a media \n";
	cin >> p1;
	cin >> p2;
	cin >> p3;
	cin >> p4;
	cin >> p5;
	
	media = (p1 + p2 + p3 + p4 + p5) / 5;
	
	
	cout << "\n A media de peso foi de: " << media;
}