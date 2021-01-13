#include <iostream>
// using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::type_info;


int main() {

 for (int i = 1; i < 5; i++) {
   cout << "Zdanie" << i << endl;
 }

 string imie = "Bartek";
 string nazwisko = "Malinowski";
 int age = 23;
 const char pesel[] = "01129912123";
 char plec[] = "K";
 double waga = 90.5;
 double wzrost = 167.35;
 bool w_zwiazku = false;
 double oceny[5] = {0.00};

int i = 0;
int number_of_subjects = 5;

while ( i < number_of_subjects) {
  cout << "Podaj ocenę z przedmiotu " << i +1 << endl;
  cin >> oceny[i];

  i++;
}

for (int i = 0; i < 5; i++) {
  cout << "Przedmiot " << i + 1 << " = " << oceny[i] << endl;
}

cout << oceny << endl;  // To wydrukuje mi adres pierwszego elementu. Okej, teraz rozumiem.
cout << *oceny << endl;  // A tak mogę wydrukować wartość pod tym adresem
}
