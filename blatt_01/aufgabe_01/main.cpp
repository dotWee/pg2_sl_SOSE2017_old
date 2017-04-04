//
// Created by wol32832 on 29.03.2017.
//

#include <iostream>
using namespace std;

#define BUFFER_SIZE 100

class Notepad {
public:
    void notepad_create() {
        text = (char *) malloc(sizeof(char) * BUFFER_SIZE);

        while (true) {
            //fgets(buffer, BUFFER_SIZE, stdin);
            cin.getline(buffer, BUFFER_SIZE);

            // Wenn Buffer '/read' enthält, gib text aus
            if (strstr(buffer, "\\read")) {
                cout << notepad_read();
            }
                // Wenn Buffer '/exit' enthält, beende Schleife
            else if (strstr(buffer, "\\exit")) {
                break;
            } else {
                // Kopiere Text aus Buffer in die Zielvariable
                notepad_write(buffer);

                // Wenn text länger als maximal erlaubte Länge, beende Schleife
                if (strlen(text) > BUFFER_SIZE) {
                    break;
                }
            }

        }
    }

    void notepad_write(char *str) {
        text = (char *) realloc(text, strlen(text) + 1 + strlen(str));
        strcat(text, str);
    }

    char *notepad_read() {
        return text;
    }

private:
    char *text, buffer[BUFFER_SIZE];
};


int main() {
    cout << "Gib einen Text ein:\n";

    Notepad notepad;
    notepad.notepad_create();

    return 0;
}