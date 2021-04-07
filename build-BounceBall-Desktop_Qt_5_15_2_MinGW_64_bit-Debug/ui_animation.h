/********************************************************************************
** Form generated from reading UI file 'animation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATION_H
#define UI_ANIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>

QT_BEGIN_NAMESPACE

class Ui_animation
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *animation)
    {
        if (animation->objectName().isEmpty())
            animation->setObjectName(QString::fromUtf8("animation"));
        animation->resize(800, 600);
        graphicsView = new QGraphicsView(animation);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(105, 40, 551, 491));

        retranslateUi(animation);

        QMetaObject::connectSlotsByName(animation);
    } // setupUi

    void retranslateUi(QDialog *animation)
    {
        animation->setWindowTitle(QCoreApplication::translate("animation", "animation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class animation: public Ui_animation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATION_H
