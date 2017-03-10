#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio {
        private:
        int hora;
        int min;
        int sec;
       public:
        void entrada(void);
        void imprime(void);
        void incrementa_1sec(void);
};

#endif // RELOGIO_H
