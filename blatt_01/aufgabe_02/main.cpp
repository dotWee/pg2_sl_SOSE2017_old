//
// Created by wol32832 on 29.03.2017.
//

#include <iostream>

using namespace std;

#define BUFFER_SIZE 100
#define PAGES 3

class Book {
public:

    // TODO als Constructor definieren
    void init() {
        // Definiere für jede Seite einen Text-Buffer
        for (int page = 0; page <= size(); page++) {
            pages[page] = (char *) malloc(sizeof(char) * BUFFER_SIZE);
        }
    }

    void writeonpage(char *str, int page) {
        char *pagecontent = getpage(page);

        pages[page] = (char *) realloc(pagecontent, strlen(pagecontent) + 1 + strlen(str));
        strcat(getpage(page), str);
    }

    char *getpage(int page) {
        if (page >= size()) {
            cout << "Warning! Page does not exist!";
            return NULL;
        }

        return pages[page];
    }

    int size() {
        return PAGES;
    }

private:
    char *pages[];
};

class Notepad {
public:
    void notepad_run() {
        notepad_create();

        while (true) {
            // Alternativ: fgets(buffer, BUFFER_SIZE, stdin);
            cin.getline(buffer, BUFFER_SIZE);

            // Wenn Buffer '\debug' enthält, gib Debug Nachricht aus
            if (strstr(buffer, "\\debug")) {
                notepad_debug();
            }

                // Wenn Buffer '\page' enthält, wechlse Seite
            else if (strstr(buffer, "\\book")) {
                char pagevalue = strstr(buffer, "\\book")[5];
                currentpage = atoi(&pagevalue);

                printf("Switched to page %d", currentpage);
                currentpage--;
            }

                // Wenn Buffer '\read' enthält, gib text aus
            else if (strstr(buffer, "\\read")) {
                cout << notepad_read();
            }

                // Wenn Buffer '\exit' enthält, beende Schleife
            else if (strstr(buffer, "\\exit")) {
                break;
            }

                // Kopiere Text aus Buffer in die Zielvariable
            else {
                notepad_write(buffer);

                // Wenn text länger als maximal erlaubte Länge, beende Schleife
                if (strlen(notepad_read()) > BUFFER_SIZE) {
                    break;
                }
            }

        }
    }

private:
    char buffer[BUFFER_SIZE];
    int currentpage;
    Book book;

    void notepad_create() {
        currentpage = 0;
        book.init();
    }

    void notepad_write(char *str) {
        book.writeonpage(str, currentpage);
    }

    void notepad_debug() {
        printf("[DEBUG] current-page=%d content=%s\n", currentpage, notepad_read());
    }

    char *notepad_read() {
        return book.getpage(currentpage);
    }
};


int main() {
    cout << "Gib einen Text ein:\n";

    Notepad notepad;
    notepad.notepad_run();

    return 0;
}