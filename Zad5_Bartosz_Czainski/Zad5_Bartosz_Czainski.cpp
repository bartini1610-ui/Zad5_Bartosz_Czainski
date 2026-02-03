// Zad5_Bartosz_Czainski.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

class ComplexNumber {
public:
    ComplexNumber() {
        rzeczywista = 5;
        urojona = -8;
        cout << "Konstruktor" << endl;
    }
    ~ComplexNumber() {
        cout << "Destruktor" << endl;
    }


    ComplexNumber(int r, int u) : rzeczywista(r), urojona(u) {
        cout << "Konstruktor parametryczny" << endl;

    }

    ComplexNumber(const ComplexNumber &other) : rzeczywista(other.rzeczywista), urojona(other.urojona) {
        cout << "Konstruktor kopiujacy" << endl;
    }
    void Print() {
        if (urojona < 0) {
            cout << rzeczywista << " - " << -1 * urojona << "i" << endl;
        }
        else {
            cout << rzeczywista << " + " << urojona << "i" << endl;
        }
    }
protected:
    int rzeczywista;
    int urojona;
};

int main()
{
    ComplexNumber* complex = new ComplexNumber();
    ComplexNumber* complex2 = new ComplexNumber(5, 10);
    ComplexNumber* complex3 = new ComplexNumber(*complex2);
    complex->Print();
    complex2->Print();
    complex3->Print();
    delete complex;
    delete complex2;
    delete complex3;
    cout << "Test " << endl;
    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
