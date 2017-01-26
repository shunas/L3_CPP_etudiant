#ifndef CHRONO_HPP_
#define CHRONO_HPP_

#include <chrono>

class Chrono {

    private:
        std::chrono::time_point<std::chrono::system_clock> _t0;
        std::chrono::time_point<std::chrono::system_clock> _t1;
        bool _isRunning;

    public:
        Chrono();
        void reset();
        void start();
        void stop();
        double elapsed();
};

#endif

