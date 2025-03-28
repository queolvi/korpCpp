namespace College {
    
    class myTime {
        protected:
        int s, ms, m, h;
        myTime(int s, int ms, int m, int h);
        int addSeconds(myTime &time_now, int s);
        int addMilliSeconds(myTime &time_now ,int ms);
        int addMinutes(myTime &time_now, int m);
        int addHours(myTime &time_now, );

    }; 
};