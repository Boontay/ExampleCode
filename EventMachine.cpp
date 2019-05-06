#include <iostream>
#include <map>
#include <iterator>
#include <string.h>
#include <math.h>

using namespace std;

class Event {
public:
    virtual int run() = 0;
};

class IntEvent : public Event {
public:
    IntEvent(int n) {
        this->n = n;
    }

    int run() override {
        return n;
    }

private:
    int n;
};

class StringEvent : public Event {
public:
    StringEvent(string n) {
        this->n = n;
    }

    int run() override {
        return (int) n.length();
    }

private:
    string n;
};

class DoubleEvent : public Event {
public:
    DoubleEvent(double n) {
        this->n = n;
    }

    int run() override {
        return (int) round(n);
    }

private:
    double n;
};

class QuitEvent : public Event {
public:
    QuitEvent() {
        n = 0;
    }

    int run() override {
        exit(n);
    }

private:
    int n;
};

int main() {
    IntEvent intEvent(1);
    StringEvent stringEvent("fish");
    DoubleEvent doubleEvent(2.3);
    QuitEvent quitEvent;

    map<string, Event*> event_list;
    event_list.insert(pair<string, Event*>("int", &intEvent));
    event_list.insert(pair<string, Event*>("string", &stringEvent));
    event_list.insert(pair<string, Event*>("double", &doubleEvent));
    event_list.insert(pair<string, Event*>("quit", &quitEvent));

    string command;

    while (true) {
        cout << "Command: " << endl;
        cin >> command;

        map<string, Event*>::iterator it;

        it = event_list.find(command);

        if (it != event_list.end()) {
            cout << it->second->run() << endl;
        } else {
            cout << "Command not found." << endl;
        }
    }
}
