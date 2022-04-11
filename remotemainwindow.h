//
// Created by kutuk on 11.04.2022.
//

#ifndef HOMEWORK37_4_2_REMOTEMAINWINDOW_H
#define HOMEWORK37_4_2_REMOTEMAINWINDOW_H
#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class RemoteMainWindow : public QMainWindow{
    Q_OBJECT
private:
    int chNumber = 0, volume = 0;

public:
    RemoteMainWindow(QWidget *parent = nullptr) : QMainWindow(parent){}
    QLineEdit * lineEdit = nullptr;
    void setChNumber(int ch){ chNumber = ch;}
    int getChNumber(){return chNumber;}
    int getVolume(){return volume;}
    void increaseVolume(){if(volume < 100) volume+=10;}
    void decreaseVolume(){if(volume > 0) volume-=10;}
    void increaseCh(){if(chNumber < 100) chNumber+=1;}
    void decreaseCh(){if(chNumber > 0) chNumber-=1;}
    void refreshScreen(){
        lineEdit->setText("ch: " + QString::number(chNumber) + "              vol: " + QString::number(volume) + "%");
    }
public slots:
    void key_0(){chNumber = 0;refreshScreen();}
    void key_1(){chNumber = 1;refreshScreen();}
    void key_2(){chNumber = 2;refreshScreen();}
    void key_3(){chNumber = 3;refreshScreen();}
    void key_4(){chNumber = 4;refreshScreen();}
    void key_5(){chNumber = 5;refreshScreen();}
    void key_6(){chNumber = 6;refreshScreen();}
    void key_7(){chNumber = 7;refreshScreen();}
    void key_8(){chNumber = 8;refreshScreen();}
    void key_9(){chNumber = 9;refreshScreen();}
    void keyChPlus(){increaseCh(); refreshScreen();}
    void keyChMinus(){decreaseCh(); refreshScreen();}
    void keyVolPlus(){increaseVolume(); refreshScreen();}
    void keyVolMinus(){decreaseVolume(); refreshScreen();}
};



#endif //HOMEWORK37_4_2_REMOTEMAINWINDOW_H
