#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QPainter;
class QImage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:

    void paintEvent(QPaintEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseMoveEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;
    void closeEvent(QCloseEvent *event) override;

public slots:

    void dibujarLinea(const QPoint &inicio, const QPoint &final, const QColor &color, int tamaño);
    void dibujarCuadrado(const QPoint &start, const QPoint &end, const QColor &color, int tamaño);
    void dibujarCirculo(const QPoint &centro, int radio, const QColor &color, int tamaño);
    void dibujarElipse(const QPoint &inicio, int width, int height, const QColor &color, int tamaño);

private slots:
    void on_actionGuardar_triggered();
    void on_actionAbrir_triggered();
    void on_actionLimpiar_triggered();
    void on_actionGrosor_triggered();
    void on_actionColor_triggered();
    void on_actionBorrador_triggered();
    void on_actionLibre_triggered();
    void on_actionLinea_triggered();
    void on_actionCuadrado_triggered();
    void on_actionCirculo_triggered();
    void on_actionElipse_triggered();

private:
    Ui::MainWindow *ui;
    QImage *imagen;
    QPainter *painter;
    QPoint inicio;
    QPoint cursorPos;
    bool primerClick = true;
    QPoint final;
    bool pintando;
    QRect drawingArea;
    QColor color;
    int tamaño;
    bool guardado;
    bool usborrador;
    //variables de las figuras
    int figura = 0;
    int radio;//circulo
    int height;//elipse
    int width;//elipse

};
#endif // MAINWINDOW_H
