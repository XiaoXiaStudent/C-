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


enum Example : unsigned char {
    A = 5, B = 1, C
};

Example value = B;

void Print(const std::string &value) {


    std::cout << value << std::endl;
}


int *createArray() {
    //int array[50];
    int *array = new int[50];
    array[0] = 2;
    *(array + 1) = 2;
    return array;
}

void createArray(int *array) {

}

class Entity {


public:

    Entity() {
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity() {
        std::cout << "Destroyed Entity!" << std::endl;
    }
};


class String {

private:
    char *m_Buffer;
    unsigned int m_Size;
public:


    String(const char *string) {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0;
    }

    String(const String &other) : m_Size(other.m_Size) {
        std::cout << "copy start" << std::endl;
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String() {
        delete[] m_Buffer;
    }

    char &operator[](unsigned int index) {
        return m_Buffer[index];
    }

    friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

std::ostream &operator<<(std::ostream &stream, const String &string) {
    stream << string.m_Buffer;
    return stream;
}

void PrintString(const String& string) {
    String copy = string;
    std::cout << string << std::endl;
}


int main() {
    String string = "nihaoya";
    String secend = string;

    secend[2] = 'a';

    PrintString(string);
    PrintString(secend);
}