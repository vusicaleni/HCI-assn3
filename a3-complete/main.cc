#include<QApplication>

#include "clockwindow.h"


int main(int argc, char *argv[]){

   QApplication app(argc, argv);
   ClockWindow clock;
   clock.show();

   return app.exec();


}
