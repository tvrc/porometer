/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowy;
    QAction *actionOt;
    QAction *actionZapisz_jako;
    QAction *actionWyj_cie;
    QAction *actionCofnij;
    QAction *actionPon_w;
    QAction *actionFiltracja;
    QAction *actionBinaryzacja;
    QAction *actionSkala_szaro_ci;
    QAction *actionNegatyw;
    QAction *actionErozja;
    QAction *actionDylatacja;
    QAction *actionOtwarcie;
    QAction *actionDomkni_cie;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabObrazy;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *resetButton;
    QGraphicsView *outputGView;
    QGraphicsView *inputGView;
    QProgressBar *progressBar;
    QWidget *tabHistogram;
    QWidget *tabRozklad;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QMenu *menuEdycja;
    QMenu *menuPrzekszta_cenia;
    QMenu *menuPunktowe;
    QMenu *menuMorfologiczne;
    QMenu *menuWidok;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(636, 498);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionNowy = new QAction(MainWindow);
        actionNowy->setObjectName(QStringLiteral("actionNowy"));
        actionOt = new QAction(MainWindow);
        actionOt->setObjectName(QStringLiteral("actionOt"));
        actionZapisz_jako = new QAction(MainWindow);
        actionZapisz_jako->setObjectName(QStringLiteral("actionZapisz_jako"));
        actionWyj_cie = new QAction(MainWindow);
        actionWyj_cie->setObjectName(QStringLiteral("actionWyj_cie"));
        actionCofnij = new QAction(MainWindow);
        actionCofnij->setObjectName(QStringLiteral("actionCofnij"));
        actionPon_w = new QAction(MainWindow);
        actionPon_w->setObjectName(QStringLiteral("actionPon_w"));
        actionFiltracja = new QAction(MainWindow);
        actionFiltracja->setObjectName(QStringLiteral("actionFiltracja"));
        actionBinaryzacja = new QAction(MainWindow);
        actionBinaryzacja->setObjectName(QStringLiteral("actionBinaryzacja"));
        actionSkala_szaro_ci = new QAction(MainWindow);
        actionSkala_szaro_ci->setObjectName(QStringLiteral("actionSkala_szaro_ci"));
        actionNegatyw = new QAction(MainWindow);
        actionNegatyw->setObjectName(QStringLiteral("actionNegatyw"));
        actionErozja = new QAction(MainWindow);
        actionErozja->setObjectName(QStringLiteral("actionErozja"));
        actionDylatacja = new QAction(MainWindow);
        actionDylatacja->setObjectName(QStringLiteral("actionDylatacja"));
        actionOtwarcie = new QAction(MainWindow);
        actionOtwarcie->setObjectName(QStringLiteral("actionOtwarcie"));
        actionDomkni_cie = new QAction(MainWindow);
        actionDomkni_cie->setObjectName(QStringLiteral("actionDomkni_cie"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabObrazy = new QWidget();
        tabObrazy->setObjectName(QStringLiteral("tabObrazy"));
        horizontalLayout = new QHBoxLayout(tabObrazy);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        resetButton = new QPushButton(tabObrazy);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        gridLayout->addWidget(resetButton, 5, 0, 1, 1, Qt::AlignLeft);

        outputGView = new QGraphicsView(tabObrazy);
        outputGView->setObjectName(QStringLiteral("outputGView"));

        gridLayout->addWidget(outputGView, 4, 1, 1, 1);

        inputGView = new QGraphicsView(tabObrazy);
        inputGView->setObjectName(QStringLiteral("inputGView"));

        gridLayout->addWidget(inputGView, 4, 0, 1, 1);

        progressBar = new QProgressBar(tabObrazy);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 5, 1, 1, 1, Qt::AlignRight);


        horizontalLayout->addLayout(gridLayout);

        tabWidget->addTab(tabObrazy, QString());
        tabHistogram = new QWidget();
        tabHistogram->setObjectName(QStringLiteral("tabHistogram"));
        tabWidget->addTab(tabHistogram, QString());
        tabRozklad = new QWidget();
        tabRozklad->setObjectName(QStringLiteral("tabRozklad"));
        tabWidget->addTab(tabRozklad, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 636, 21));
        menuPlik = new QMenu(menuBar);
        menuPlik->setObjectName(QStringLiteral("menuPlik"));
        menuEdycja = new QMenu(menuBar);
        menuEdycja->setObjectName(QStringLiteral("menuEdycja"));
        menuPrzekszta_cenia = new QMenu(menuBar);
        menuPrzekszta_cenia->setObjectName(QStringLiteral("menuPrzekszta_cenia"));
        menuPunktowe = new QMenu(menuPrzekszta_cenia);
        menuPunktowe->setObjectName(QStringLiteral("menuPunktowe"));
        menuMorfologiczne = new QMenu(menuPrzekszta_cenia);
        menuMorfologiczne->setObjectName(QStringLiteral("menuMorfologiczne"));
        menuWidok = new QMenu(menuBar);
        menuWidok->setObjectName(QStringLiteral("menuWidok"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuPlik->menuAction());
        menuBar->addAction(menuEdycja->menuAction());
        menuBar->addAction(menuPrzekszta_cenia->menuAction());
        menuBar->addAction(menuWidok->menuAction());
        menuPlik->addAction(actionNowy);
        menuPlik->addAction(actionOt);
        menuPlik->addAction(actionZapisz_jako);
        menuPlik->addAction(actionWyj_cie);
        menuEdycja->addAction(actionCofnij);
        menuEdycja->addAction(actionPon_w);
        menuPrzekszta_cenia->addAction(menuPunktowe->menuAction());
        menuPrzekszta_cenia->addAction(menuMorfologiczne->menuAction());
        menuPrzekszta_cenia->addAction(actionFiltracja);
        menuPunktowe->addAction(actionBinaryzacja);
        menuPunktowe->addAction(actionSkala_szaro_ci);
        menuPunktowe->addAction(actionNegatyw);
        menuMorfologiczne->addAction(actionErozja);
        menuMorfologiczne->addAction(actionDylatacja);
        menuMorfologiczne->addAction(actionOtwarcie);
        menuMorfologiczne->addAction(actionDomkni_cie);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNowy->setText(QApplication::translate("MainWindow", "Nowy", 0));
        actionOt->setText(QApplication::translate("MainWindow", "Otw\303\263rz...", 0));
        actionZapisz_jako->setText(QApplication::translate("MainWindow", "Zapisz jako...", 0));
        actionWyj_cie->setText(QApplication::translate("MainWindow", "Wyj\305\233cie", 0));
        actionCofnij->setText(QApplication::translate("MainWindow", "Cofnij", 0));
        actionPon_w->setText(QApplication::translate("MainWindow", "Pon\303\263w", 0));
        actionFiltracja->setText(QApplication::translate("MainWindow", "Filtracja", 0));
        actionBinaryzacja->setText(QApplication::translate("MainWindow", "Binaryzacja", 0));
        actionSkala_szaro_ci->setText(QApplication::translate("MainWindow", "Skala szaro\305\233ci", 0));
        actionNegatyw->setText(QApplication::translate("MainWindow", "Negatyw", 0));
        actionErozja->setText(QApplication::translate("MainWindow", "Erozja", 0));
        actionDylatacja->setText(QApplication::translate("MainWindow", "Dylatacja", 0));
        actionOtwarcie->setText(QApplication::translate("MainWindow", "Otwarcie", 0));
        actionDomkni_cie->setText(QApplication::translate("MainWindow", "Domkni\304\231cie", 0));
        resetButton->setText(QApplication::translate("MainWindow", "Resetuj", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabObrazy), QApplication::translate("MainWindow", "Obraz", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabHistogram), QApplication::translate("MainWindow", "Histogram", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabRozklad), QApplication::translate("MainWindow", "Rozk\305\202ad obj\304\231to\305\233ci", 0));
        menuPlik->setTitle(QApplication::translate("MainWindow", "Plik", 0));
        menuEdycja->setTitle(QApplication::translate("MainWindow", "Edycja", 0));
        menuPrzekszta_cenia->setTitle(QApplication::translate("MainWindow", "Przekszta\305\202cenia", 0));
        menuPunktowe->setTitle(QApplication::translate("MainWindow", "Punktowe", 0));
        menuMorfologiczne->setTitle(QApplication::translate("MainWindow", "Morfologiczne", 0));
        menuWidok->setTitle(QApplication::translate("MainWindow", "Widok", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
