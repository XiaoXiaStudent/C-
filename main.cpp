#include <iostream>

//#define  LOG(x) std::cout << x << std::endl;

void increment(int *value) {
    (*value)++;
}

void incrementr(int &value) {
    value++;
}

class Player {
public:
    int x;
    int y;
    int speed;

    void move(int xa, int ya) {

        x += xa * speed;
        y += ya * speed;
    }

};


class LOG {

public:

    enum Level {
        LogLevelWarning = 0, LogLevelError, LogLevelInfo
    };


private:
    int m_LogLevel = LogLevelInfo;

public:

    void SetLevel(Level level) {
        m_LogLevel = level;
    }

    void warning(const char *string) {
        if (m_LogLevel >= LogLevelWarning) {

            std::cout << "[WARN] :" << string << std::endl;
        }

    }

    void info(const char *string) {
        if (m_LogLevel >= LogLevelInfo) {
            std::cout << "[INFO] :" << string << std::endl;

        }

    }

    void const error(const char *string) {

        if (m_LogLevel >= LogLevelError) {
            std::cout << "[ERROR] :" << string << std::endl;

        }

    }

};

struct Entity {
    static int x, y;

    void print() {
        std::cout << x << ", " << y << std::endl;
    }

};

int Entity::x;
int Entity::y;


void Function() {
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

class SingLeton {
private:
    static SingLeton *s_Instance;
public:
    static SingLeton &Get() {
        SingLeton instance;
        return instance;

    }

    void hello() {
        std::cout << "hello" << std::endl;
    }


};

enum Example : unsigned char {
    A = 5, B = 1, C
};

Example value = B;

void Print(const std::string &value) {


    std::cout << value << std::endl;
}



