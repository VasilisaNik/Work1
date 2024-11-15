#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Функция 1: Чтение строк из файла в вектор
void readFromFile(const string& filename, vector<string>& lines) {
    // Код для чтения из файла будет здесь
}

// Функция 2: Вывод строк на экран
void printLines(const vector<string>& lines) {
    // Код для вывода строк будет здесь
}

// Функция 3: Запись строк в файл
void writeToFile(const string& filename, const vector<string>& lines) {
    // Код для записи в файл будет здесь
}

// Функция 4: Очистка вектора строк
void clearLines(vector<string>& lines) {
    // Код для очистки вектора будет здесь
}

// Функция 5: Подсчет количества строк в векторе
int countLines(const vector<string>& lines) {
    // Код для подсчета строк будет здесь
    return 0;
}

int main() {
    vector<string> lines;
    readFromFile("input.txt", lines);
    printLines(lines);
    writeToFile("output.txt", lines);

    clearLines(lines);
    int lineCount = countLines(lines);

    cout << "Количество строк: " << lineCount << endl;

    return 0;
}

