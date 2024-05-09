/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGuardar;
    QAction *actionAbrir;
    QAction *actionLimpiar;
    QAction *actionGrosor;
    QAction *actionColor;
    QAction *actionLibre;
    QAction *actionCuadrado;
    QAction *actionLinea;
    QAction *actionBorrador;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEditar;
    QMenu *menuGrafico;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        actionLimpiar = new QAction(MainWindow);
        actionLimpiar->setObjectName("actionLimpiar");
        actionGrosor = new QAction(MainWindow);
        actionGrosor->setObjectName("actionGrosor");
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName("actionColor");
        actionLibre = new QAction(MainWindow);
        actionLibre->setObjectName("actionLibre");
        actionCuadrado = new QAction(MainWindow);
        actionCuadrado->setObjectName("actionCuadrado");
        actionLinea = new QAction(MainWindow);
        actionLinea->setObjectName("actionLinea");
        actionBorrador = new QAction(MainWindow);
        actionBorrador->setObjectName("actionBorrador");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName("menuEditar");
        menuGrafico = new QMenu(menubar);
        menuGrafico->setObjectName("menuGrafico");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuGrafico->menuAction());
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionAbrir);
        menuEditar->addAction(actionLimpiar);
        menuEditar->addAction(actionGrosor);
        menuEditar->addAction(actionColor);
        menuEditar->addAction(actionBorrador);
        menuGrafico->addAction(actionLibre);
        menuGrafico->addAction(actionLinea);
        menuGrafico->addAction(actionCuadrado);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionLimpiar->setText(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
        actionGrosor->setText(QCoreApplication::translate("MainWindow", "Grosor", nullptr));
        actionColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionLibre->setText(QCoreApplication::translate("MainWindow", "Libre", nullptr));
        actionCuadrado->setText(QCoreApplication::translate("MainWindow", "Cuadrado", nullptr));
        actionLinea->setText(QCoreApplication::translate("MainWindow", "Linea", nullptr));
        actionBorrador->setText(QCoreApplication::translate("MainWindow", "Borrador", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuGrafico->setTitle(QCoreApplication::translate("MainWindow", "Grafico", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
