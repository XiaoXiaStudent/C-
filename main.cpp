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

int main() {
    std::unique_ptr<Entity> entity = std::make_unique<Entity>();
    std::shared_ptr<Entity> e = std::make_shared<Entity>();
    std::weak_ptr<Entity> e2 = e;
    std::cout << e.use_count() << std::endl;
    {
        std::shared_ptr<Entity> sharedEntity = e;
        std::cout << e.use_count() << std::endl;
    }
    std::cout << e.use_count() << std::endl;
    std::cin.get();
    return 0;
}