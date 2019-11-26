/********************************************************************************
** Form generated from reading UI file 'inicio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_H
#define UI_INICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inicio
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *temporCombo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *nivelComobo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QCheckBox *repetibleCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *salir;
    QPushButton *iniciarJuego;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Inicio)
    {
        if (Inicio->objectName().isEmpty())
            Inicio->setObjectName(QString::fromUtf8("Inicio"));
        Inicio->resize(255, 303);
        centralwidget = new QWidget(Inicio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Script"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Forte"));
        font1.setPointSize(14);
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Noto Sans Lao"));
        font2.setPointSize(10);
        label_3->setFont(font2);

        horizontalLayout->addWidget(label_3);

        temporCombo = new QComboBox(centralwidget);
        temporCombo->addItem(QString());
        temporCombo->addItem(QString());
        temporCombo->addItem(QString());
        temporCombo->setObjectName(QString::fromUtf8("temporCombo"));

        horizontalLayout->addWidget(temporCombo);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout_2->addWidget(label_5);

        nivelComobo = new QComboBox(centralwidget);
        nivelComobo->addItem(QString());
        nivelComobo->addItem(QString());
        nivelComobo->addItem(QString());
        nivelComobo->setObjectName(QString::fromUtf8("nivelComobo"));

        horizontalLayout_2->addWidget(nivelComobo);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        horizontalLayout_3->addWidget(label_4);

        repetibleCheckBox = new QCheckBox(centralwidget);
        repetibleCheckBox->setObjectName(QString::fromUtf8("repetibleCheckBox"));
        repetibleCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(repetibleCheckBox);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        salir = new QPushButton(centralwidget);
        salir->setObjectName(QString::fromUtf8("salir"));

        horizontalLayout_5->addWidget(salir);

        iniciarJuego = new QPushButton(centralwidget);
        iniciarJuego->setObjectName(QString::fromUtf8("iniciarJuego"));

        horizontalLayout_5->addWidget(iniciarJuego);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_3, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        Inicio->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Inicio);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Inicio->setStatusBar(statusbar);

        retranslateUi(Inicio);

        QMetaObject::connectSlotsByName(Inicio);
    } // setupUi

    void retranslateUi(QMainWindow *Inicio)
    {
        Inicio->setWindowTitle(QApplication::translate("Inicio", "MainWindow", nullptr));
        label->setText(QApplication::translate("Inicio", "Inicio", nullptr));
        label_2->setText(QApplication::translate("Inicio", "Configuraciones:", nullptr));
        label_3->setText(QApplication::translate("Inicio", "Temporizador", nullptr));
        temporCombo->setItemText(0, QApplication::translate("Inicio", "Temporizador por juego", nullptr));
        temporCombo->setItemText(1, QApplication::translate("Inicio", "Temporizador por jugada", nullptr));
        temporCombo->setItemText(2, QApplication::translate("Inicio", "Sin temporizador", nullptr));

        label_5->setText(QApplication::translate("Inicio", "Nivel", nullptr));
        nivelComobo->setItemText(0, QApplication::translate("Inicio", "Facil", nullptr));
        nivelComobo->setItemText(1, QApplication::translate("Inicio", "Medio", nullptr));
        nivelComobo->setItemText(2, QApplication::translate("Inicio", "Dificil", nullptr));

        label_4->setText(QApplication::translate("Inicio", "Repetible", nullptr));
        repetibleCheckBox->setText(QString());
        salir->setText(QApplication::translate("Inicio", "Cerrar", nullptr));
        iniciarJuego->setText(QApplication::translate("Inicio", "Iniciar Juego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inicio: public Ui_Inicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_H
