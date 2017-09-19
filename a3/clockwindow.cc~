#include<QtGui>
#include<QLabel>
#include<QPixmap>
#include<QPalette>
#include<QString>
#include<QTime>
#include "clockwindow.h"




ClockWindow::ClockWindow(QWidget *parent)
   : QWidget(parent)
{
   QTimer *timer = new QTimer(this);
   connect(timer, SIGNAL(timeout()), this, SLOT(update()));
   timer -> start(1000);
   
   setWindowTitle(tr("Clock window"));
   resize( 200, 200);

   QString hour = QTime::currentTime().toString("hh");
   
   if (hour =="1" || hour =="13")
   {
      QPixmap back("/home/kacv3770/3770/a3/ostrich.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="2" || hour =="14")
   {
      QPixmap back("/home/kacv3770/3770/a3/babyTurtle.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="3" || hour =="15")
   {
      QPixmap back("/home/kacv3770/3770/a3/turtle.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="4" || hour =="16")
   {
      QPixmap back("/home/kacv3770/3770/a3/babyFox.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="5" || hour =="17")
   {
      QPixmap back("/home/kacv3770/3770/a3/fox.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="6" || hour =="18")
   {
      QPixmap back("/home/kacv3770/3770/a3/babyS.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="7" || hour =="19")
   {
      QPixmap back("/home/kacv3770/3770/a3/snake.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="8" || hour =="20")
   {
      QPixmap back("/home/kacv3770/3770/a3/elephant.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="9" || hour =="21")
   {
      QPixmap back("/home/kacv3770/3770/a3/newt.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="10" || hour =="22")
   {
      QPixmap back("/home/kacv3770/3770/a3/tasmanian.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="11" || hour =="23")
   {
      QPixmap back("/home/kacv3770/3770/a3/eagle.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
   else if (hour =="12" || hour =="24")
   {
      QPixmap back("/home/kacv3770/3770/a3/tarantula.jpg");
      back = back.scaled(this->size(), Qt::IgnoreAspectRatio);
      QPalette palette;
      palette.setBrush(QPalette::Background, back);
      this->setPalette(palette);
   }
}

void ClockWindow::paintEvent(QPaintEvent *)
{
  
     static const QPoint minuteHand[3] = {
        QPoint(9, 10),    
	QPoint(-9, 10),
	QPoint(0, -90)
     };

      QColor minuteColor(0, 50, 127, 191);

     int side = qMin(width(), height());
     QTime time = QTime::currentTime();

     QPainter painter(this);
     painter.setRenderHint(QPainter::Antialiasing);
     painter.translate(width() / 2, height() / 2);
     painter.scale(side / 200.0, side / 200.0);


     for (int i = 0; i < 12; ++i) {
         painter.drawLine(88, 0, 96, 0);
         painter.rotate(30.0);
     }

     painter.setPen(Qt::NoPen);
     painter.setBrush(minuteColor);

     painter.save();
     painter.rotate(6.0 * (time.minute() + time.second() / 60.0));
     painter.drawConvexPolygon(minuteHand, 3);
     painter.restore();

     painter.setPen(minuteColor);

     for (int j = 0; j < 60; ++j) {
         if ((j % 5) != 0)
             painter.drawLine(92, 0, 96, 0);
         painter.rotate(6.0);
     }
  
     
				
      
}

