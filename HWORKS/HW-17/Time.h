#include <iostream>
#include <stdexcept>
#ifndef TIME_H
#define TIME_H
namespace College {
    
    class mySecond {
        protected:
        int s;
        public:
        mySecond(int second = 1);
        int getSecond() const;
        virtual ~mySecond();
    };

    class myMinute {
        protected:
        int m;
        public:
        myMinute(int minute = 0);
        int getMinute() const;
    };

    class myHour {
        protected:
        int h;
        public:
        myHour(int hour = 0);
        int getHour() const;
        void dump(std::ostream& os) const;
        
        static myHour first();
        static myHour second();
        static myHour third();
        static myHour fourth();
        static myHour fiveth();
        static myHour sixth();
        static myHour seventh();
        static myHour eighth();
        static myHour nineth();
        static myHour tenth();
        static myHour eleventh();
        static myHour twelveth();
        static myHour thirteenth();
        static myHour fourteenth();
        static myHour fiveteenth();
        static myHour sixteenth();
        static myHour seventeenth();
        static myHour eighteenth();
        static myHour nineteenth();
        static myHour twentienth();
        static myHour twenty_first();
        static myHour twenty_second();
        static myHour twenty_third();
        static myHour twenty_fourth();
    };


    class myTime : public mySecond, public myMinute, public myHour {
        private:
        //
        explicit myTime(int s, int m, int h);
        public:
        mySecond second_;
        myMinute minute_;
        myHour hour_;
        
        
        void dump(std::ostream& os) const;
        const myTime& addSeconds(int seconds);
        const myTime& addMinutes(int minutes);
        const myTime& addHours(int hours);

    }; 
    std::ostream& operator<<(std::ostream os, const myTime& t);
};
#endif