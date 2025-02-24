/********************************************************************************
** Form generated from reading UI file 'Movies2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVIES2_H
#define UI_MOVIES2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QShortcut>

QT_BEGIN_NAMESPACE

class Ui_Movies2Class
{
public:
    QWidget* centralWidget;
    QTabWidget* tabWidget;
    QWidget* admin_mode;
    QLabel* label;
    QListWidget* movieList;
    QWidget* layoutWidget;
    QVBoxLayout* verticalLayout;
    QLineEdit* titleLine;
    QLineEdit* likesLine;
    QLineEdit* yearLine;
    QLineEdit* genreLine;
    QLineEdit* trailerLine;
    QWidget* layoutWidget1;
    QHBoxLayout* horizontalLayout;
    QPushButton* addButton;
    QPushButton* updateButton;
    QPushButton* deleteButton_ADMIN;
    QWidget* widget;
    QHBoxLayout* horizontalLayout_6;
    QPushButton* undoButton;
    QPushButton* redoButton;
    QWidget* user_mode;
    QWidget* layoutWidget2;
    QVBoxLayout* verticalLayout_2;
    QLabel* label_7;
    QListWidget* watchlist;
    QWidget* layoutWidget3;
    QHBoxLayout* horizontalLayout_2;
    QLineEdit* titleLine_User;
    QPushButton* deleteButton_USER;
    QWidget* layoutWidget4;
    QHBoxLayout* horizontalLayout_3;
    QLineEdit* searchLine;
    QPushButton* searchButton;
    QWidget* layoutWidget5;
    QHBoxLayout* horizontalLayout_4;
    QLineEdit* fileFormatLine;
    QPushButton* fileFormatButton;
    QWidget* layoutWidget6;
    QHBoxLayout* horizontalLayout_5;
    QPushButton* nextButton;
    QPushButton* showFileButton;
    QWidget* layoutWidget7;
    QVBoxLayout* verticalLayout_3;
    QLabel* label_8;
    QListWidget* currentMovie;
    QStatusBar* statusBar;
	QShortcut* undoShortcut;
	QShortcut* redoShortcut;
	QPushButton* viewTable;

    void setupUi(QMainWindow* Movies2Class)
    {
        if (Movies2Class->objectName().isEmpty())
            Movies2Class->setObjectName("Movies2Class");
        Movies2Class->resize(1257, 635);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush4(QColor(212, 212, 212, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush4);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(0, 0, 0, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(127, 127, 127, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush4);
        Movies2Class->setPalette(palette);
        QFont font;
        font.setFamilies({ QString::fromUtf8("Tw Cen MT") });
        Movies2Class->setFont(font);
        centralWidget = new QWidget(Movies2Class);
        centralWidget->setObjectName("centralWidget");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        centralWidget->setPalette(palette1);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1271, 651));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush8(QColor(177, 177, 177, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush4);
        tabWidget->setPalette(palette2);
        tabWidget->setAutoFillBackground(true);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideLeft);
        admin_mode = new QWidget();
        admin_mode->setObjectName("admin_mode");
        label = new QLabel(admin_mode);
        label->setObjectName("label");
        label->setGeometry(QRect(11, 11, 611, 20));
        label->setMinimumSize(QSize(181, 0));
        label->setMaximumSize(QSize(16777215, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        label->setPalette(palette3);
        label->setTextFormat(Qt::MarkdownText);
        movieList = new QListWidget(admin_mode);
        movieList->setObjectName("movieList");
        movieList->setGeometry(QRect(11, 38, 611, 521));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush);
        QBrush brush9(QColor(245, 245, 245, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush10(QColor(148, 148, 148, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        movieList->setPalette(palette4);
        layoutWidget = new QWidget(admin_mode);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(710, 70, 501, 341));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLine = new QLineEdit(layoutWidget);
        titleLine->setObjectName("titleLine");
        titleLine->setAutoFillBackground(true);

        verticalLayout->addWidget(titleLine);

        likesLine = new QLineEdit(layoutWidget);
        likesLine->setObjectName("likesLine");
        likesLine->setAutoFillBackground(true);

        verticalLayout->addWidget(likesLine);

        yearLine = new QLineEdit(layoutWidget);
        yearLine->setObjectName("yearLine");
        yearLine->setAutoFillBackground(true);

        verticalLayout->addWidget(yearLine);

        genreLine = new QLineEdit(layoutWidget);
        genreLine->setObjectName("genreLine");
        genreLine->setAutoFillBackground(true);

        verticalLayout->addWidget(genreLine);

        trailerLine = new QLineEdit(layoutWidget);
        trailerLine->setObjectName("trailerLine");
        trailerLine->setAutoFillBackground(true);

        verticalLayout->addWidget(trailerLine);

        layoutWidget1 = new QWidget(admin_mode);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(680, 450, 551, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(layoutWidget1);
        addButton->setObjectName("addButton");

        horizontalLayout->addWidget(addButton);

        updateButton = new QPushButton(layoutWidget1);
        updateButton->setObjectName("updateButton");

        horizontalLayout->addWidget(updateButton);

        deleteButton_ADMIN = new QPushButton(layoutWidget1);
        deleteButton_ADMIN->setObjectName("deleteButton_ADMIN");

        horizontalLayout->addWidget(deleteButton_ADMIN);

        widget = new QWidget(admin_mode);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(810, 520, 271, 28));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        undoButton = new QPushButton(widget);
        undoButton->setObjectName("undoButton");

        horizontalLayout_6->addWidget(undoButton);

        redoButton = new QPushButton(widget);
        redoButton->setObjectName("redoButton");

        horizontalLayout_6->addWidget(redoButton);

        viewTable = new QPushButton(widget);
		viewTable->setObjectName("viewTable");

		horizontalLayout_6->addWidget(viewTable);

        QIcon icon(QIcon::fromTheme(QString::fromUtf8("appointment-missed")));
        tabWidget->addTab(admin_mode, icon, QString());
        user_mode = new QWidget();
        user_mode->setObjectName("user_mode");
        layoutWidget2 = new QWidget(user_mode);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 0, 551, 431));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        verticalLayout_2->addWidget(label_7, 0, Qt::AlignHCenter);

        watchlist = new QListWidget(layoutWidget2);
        watchlist->setObjectName("watchlist");
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        watchlist->setPalette(palette5);

        verticalLayout_2->addWidget(watchlist);

        layoutWidget3 = new QWidget(user_mode);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(90, 456, 391, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        titleLine_User = new QLineEdit(layoutWidget3);
        titleLine_User->setObjectName("titleLine_User");

        horizontalLayout_2->addWidget(titleLine_User);

        deleteButton_USER = new QPushButton(layoutWidget3);
        deleteButton_USER->setObjectName("deleteButton_USER");

        horizontalLayout_2->addWidget(deleteButton_USER);

        layoutWidget4 = new QWidget(user_mode);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(800, 290, 311, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        searchLine = new QLineEdit(layoutWidget4);
        searchLine->setObjectName("searchLine");

        horizontalLayout_3->addWidget(searchLine);

        searchButton = new QPushButton(layoutWidget4);
        searchButton->setObjectName("searchButton");

        horizontalLayout_3->addWidget(searchButton);

        layoutWidget5 = new QWidget(user_mode);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(800, 360, 311, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        fileFormatLine = new QLineEdit(layoutWidget5);
        fileFormatLine->setObjectName("fileFormatLine");
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        fileFormatLine->setPalette(palette6);

        horizontalLayout_4->addWidget(fileFormatLine);

        fileFormatButton = new QPushButton(layoutWidget5);
        fileFormatButton->setObjectName("fileFormatButton");

        horizontalLayout_4->addWidget(fileFormatButton);

        layoutWidget6 = new QWidget(user_mode);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(760, 220, 411, 28));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_5->setSpacing(200);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        nextButton = new QPushButton(layoutWidget6);
        nextButton->setObjectName("nextButton");

        horizontalLayout_5->addWidget(nextButton);

        showFileButton = new QPushButton(layoutWidget6);
        showFileButton->setObjectName("showFileButton");

        horizontalLayout_5->addWidget(showFileButton);

        layoutWidget7 = new QWidget(user_mode);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(750, 100, 411, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget7);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget7);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8, 0, Qt::AlignHCenter);

        currentMovie = new QListWidget(layoutWidget7);
        currentMovie->setObjectName("currentMovie");
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        currentMovie->setPalette(palette7);

        verticalLayout_3->addWidget(currentMovie);

        tabWidget->addTab(user_mode, QString());
        Movies2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Movies2Class);
        statusBar->setObjectName("statusBar");
        Movies2Class->setStatusBar(statusBar);

        retranslateUi(Movies2Class);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Movies2Class);
    } // setupUi

    void retranslateUi(QMainWindow* Movies2Class)
    {
        Movies2Class->setWindowTitle(QCoreApplication::translate("Movies2Class", "Movies2", nullptr));
        label->setText(QCoreApplication::translate("Movies2Class", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Movie List</span></p></body></html>", nullptr));
        titleLine->setPlaceholderText(QCoreApplication::translate("Movies2Class", "Enter title", nullptr));
        likesLine->setPlaceholderText(QCoreApplication::translate("Movies2Class", "Enter number of likes", nullptr));
        yearLine->setPlaceholderText(QCoreApplication::translate("Movies2Class", "Enter year ", nullptr));
        genreLine->setPlaceholderText(QCoreApplication::translate("Movies2Class", "Enter genre", nullptr));
        trailerLine->setPlaceholderText(QCoreApplication::translate("Movies2Class", "Enter trailer", nullptr));
        addButton->setText(QCoreApplication::translate("Movies2Class", "ADD", nullptr));
        updateButton->setText(QCoreApplication::translate("Movies2Class", "UPDATE", nullptr));
        deleteButton_ADMIN->setText(QCoreApplication::translate("Movies2Class", "REMOVE", nullptr));
        undoButton->setText(QCoreApplication::translate("Movies2Class", "UNDO", nullptr));
        redoButton->setText(QCoreApplication::translate("Movies2Class", "REDO", nullptr));
		viewTable->setText(QCoreApplication::translate("Movies2Class", "VIEW TABLE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(admin_mode), QCoreApplication::translate("Movies2Class", "Admin Mode", nullptr));
        label_7->setText(QCoreApplication::translate("Movies2Class", "Watchlist", nullptr));
        titleLine_User->setPlaceholderText(QCoreApplication::translate("Movies2Class", "Enter movie title", nullptr));
        deleteButton_USER->setText(QCoreApplication::translate("Movies2Class", "DELETE", nullptr));
        searchLine->setPlaceholderText(QCoreApplication::translate("Movies2Class", "Enter genre", nullptr));
        searchButton->setText(QCoreApplication::translate("Movies2Class", "SEARCH", nullptr));
        fileFormatLine->setPlaceholderText(QCoreApplication::translate("Movies2Class", "Enter file format  ( csv / html )", nullptr));
        fileFormatButton->setText(QCoreApplication::translate("Movies2Class", "ENTER", nullptr));
        nextButton->setText(QCoreApplication::translate("Movies2Class", "NEXT", nullptr));
        showFileButton->setText(QCoreApplication::translate("Movies2Class", "SHOW FILE", nullptr));
        label_8->setText(QCoreApplication::translate("Movies2Class", "Current Movie", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(user_mode), QCoreApplication::translate("Movies2Class", "User Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Movies2Class : public Ui_Movies2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVIES2_H
