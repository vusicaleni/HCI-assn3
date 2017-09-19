#ifndef CLOCKWINDOW_H
#define CLOCKWINDOW_H

#include<QApplication>



#include<QWidget>

class ClockWindow : public QWidget
{
   Q_OBJECT 
      
      public:
   ClockWindow(QWidget *parent = 0);
   
  protected: 
   void paintEvent(QPaintEvent *event);
};

#endif
