#ifndef STANDARD_H
#define STANDARD_H

#include <QWidget>
#include <QtScript/QScriptEngine>

namespace Ui {
class biaozhun;
}

class biaozhun : public QWidget
{
    Q_OBJECT

public:
    explicit biaozhun(QWidget *parent = nullptr);
    ~biaozhun();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_textBrowser_textChanged();

    void on_pushButton_22_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();


private:
    Ui::biaozhun *ui;

    void input(QString num);

    void shuangMu(QString fuhao);

    QString str= "";
    bool isFinish = false;
};

#endif // STANDARD_H
