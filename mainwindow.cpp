#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPaintEvent>
#include <QPainter>
#include <QMouseEvent>
#include <QImage>
#include <QScreen>
#include <QInputDialog>
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QCloseEvent>
#include <QPushButton>

#define DEFAULT_SIZE 2
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    imagen = new QImage(QApplication::primaryScreen()->geometry().size(),
                        QImage::Format_ARGB32_Premultiplied
                        );
    painter = new QPainter(imagen);
    pintando = false;
    color= QColor(Qt::black);
    tamaño = DEFAULT_SIZE;
    guardado = true;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete painter;
    delete imagen;
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.fillRect(imagen->rect(), Qt::white);
    painter.drawImage(0, 0, *imagen);
    e->accept();
}
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    switch (figura) {
    case 0:
        inicio = e->pos();
        break;
    case 1:
        inicio = e->pos();
        break;
    case 2:
        inicio = e->pos();
        break;
    case 3:
        inicio = e->pos();
        break;
    case 4:
        inicio = e->pos();
        break;
    }
    pintando = true;
    e->accept();
    guardado = false;
}
void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    QPen pen(color);
    pen.setCapStyle(Qt::RoundCap);
    pen.setWidth(tamaño);
    switch (figura) {
    case 0:
        final = e->pos();
        painter->setPen(pen);
        painter->drawLine(inicio, final);
        inicio = final;
        update();
        e->accept();
        break;

    case 1:
        final = e->pos();
        update();
        break;

    case 2:
        final = e->pos();
        update();
        break;

    case 3:
        final = e->pos();
        update();
        break;

    case 4:
        final = e->pos();
        update();
        break;

    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    switch (figura) {
    case 0://Libre
        final = e->pos();
        break;
    case 1://Linea
        final = e->pos();
        dibujarLinea(inicio, final, color, tamaño);
        break;
    case 2://Cuadrado
        final = e->pos();
        dibujarCuadrado(inicio, final, color, tamaño);
        break;
    case 3: // Círculo
        final = e->pos();
        radio = qRound(QLineF(inicio, final).length());
        dibujarCirculo(inicio, radio, color, tamaño);
        break;
    case 4: // Elipse
        final = e->pos();
        width = qAbs(final.x() - inicio.x());
        height = qAbs(final.y() - inicio.y());
        dibujarElipse(inicio, width, height, color, tamaño);
        break;
    }

    pintando = false;
    e->accept();
}
/////////////////////////////////////////////////////////////////////////////
//funcion guardar
void MainWindow::on_actionGuardar_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, tr("Guardar imagen"), "", tr("Archivos de imagen (*.png *.jpg *.bmp *.gif)"));
    if (!filePath.isEmpty()) {
        // Crea una nueva imagen en blanco
        QImage imagenGuardada(size(), QImage::Format_ARGB32_Premultiplied);
        imagenGuardada.fill(Qt::white); // Llena con blanco

        // Crea un pintor para la nueva imagen
        QPainter painter(&imagenGuardada);

        menuBar()->hide();

        // Dibuja el contenido del widget en la nueva imagen
        render(&painter);

        // Guarda la nueva imagen
        QFileInfo fileInfo(filePath);
        QString extension = fileInfo.suffix().toLower();
        if (extension == "png") {
            imagenGuardada.save(filePath, "PNG");
        } else if (extension == "jpg" || extension == "jpeg") {
            imagenGuardada.save(filePath, "JPEG");
        } else if (extension == "bmp") {
            imagenGuardada.save(filePath, "BMP");
        } else if (extension == "gif") {
            imagenGuardada.save(filePath, "GIF");
        } else {
            QMessageBox::critical(this, tr("Error"), tr("Formato de archivo no compatible."));
        }
        menuBar()->show();
    }
    guardado = true;
}
/////////////////////////////////////////////////////////////////////////////
//funcion abrir
void MainWindow::on_actionAbrir_triggered()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Abrir imagen"), "", tr("Archivos de imagen (*.png *.jpg *.bmp *.gif)"));
    if (!filePath.isEmpty()) {
        // Cargar la imagen seleccionada sin escalar
        QImage imagenCargada(filePath);
        if (imagenCargada.isNull()) {
            QMessageBox::critical(this, tr("Error"), tr("No se pudo cargar la imagen."));
            return;
        }

        // Escalar la imagen para que se ajuste al tamaño del widget de dibujo
        QSize editorSize = imagen->size(); // Tamaño del widget de dibujo
        QImage imagenEscalada = imagenCargada.scaled(editorSize, Qt::KeepAspectRatio);

        // Dibujar la imagen escalada en el centro del widget de dibujo
        int x = (editorSize.width() - imagenEscalada.width()) / 2;
        int y = (editorSize.height() - imagenEscalada.height()) / 2;

        // Borrar la imagen existente en el widget de dibujo
        imagen->fill(Qt::white);

        // Dibujar la imagen escalada
        painter->drawImage(x, y, imagenEscalada);


    }  // Actualizar la ventana de dibujo
    update();
}
/////////////////////////////////////////////////////////////////////////////
//funcion limpiar
void MainWindow::on_actionLimpiar_triggered()
{
    imagen = new QImage(QApplication::primaryScreen()->geometry().size(),
                        QImage::Format_ARGB32_Premultiplied
                        );
    painter = new QPainter(imagen);
    color= QColor(Qt::black);
    tamaño = DEFAULT_SIZE;
    update();
}
/////////////////////////////////////////////////////////////////////////////
//funcion cambiar grosor
void MainWindow::on_actionGrosor_triggered()
{
    tamaño = QInputDialog::getInt(this, "Tamaño ", "Ingrese el tamaño: ", 2, 1);
    guardado = false;
}
/////////////////////////////////////////////////////////////////////////////
//funcion cambiar color
void MainWindow::on_actionColor_triggered()
{
    color = QColorDialog::getColor(Qt::black, this, "Color del lapiz");
    guardado = false;
}
/////////////////////////////////////////////////////////////////////////////
//funcion borrador
void MainWindow::on_actionBorrador_triggered()
{
    color= QColor(Qt::white);
    MainWindow::on_actionGrosor_triggered();
    figura = 0;
}
//////////////////////////////////////////////////////////////////////////////
//funcion de advertencia de guardado
void MainWindow::closeEvent(QCloseEvent *e)
{
    if (!guardado) {
        QMessageBox msgBox;
        msgBox.setWindowTitle(tr("¡Precaución!"));
        msgBox.setText(tr("¿Estás seguro de que quieres salir sin guardar?"));
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        QPushButton *saveButton = msgBox.addButton(tr("Guardar"), QMessageBox::ActionRole);
        QPushButton *yesButton = qobject_cast<QPushButton *>(msgBox.button(QMessageBox::Yes));
        if (yesButton)
            yesButton->setText(tr("Sí"));

        msgBox.exec();


        QAbstractButton *clickedButton = msgBox.clickedButton();

        if (clickedButton == saveButton) {

            on_actionGuardar_triggered();
            e->accept();
        } else if (clickedButton == yesButton) {
            e->accept();
        } else {

            e->ignore();
        }
    }
}
/////////////////////////////////////////////////////////////////////////////
//valores numericos para las figuras
void MainWindow::on_actionLibre_triggered()
{
    figura = 0;
}
void MainWindow::on_actionLinea_triggered()
{
    figura = 1;
}
void MainWindow::on_actionCuadrado_triggered()
{
    figura = 2;
}
void MainWindow::on_actionCirculo_triggered()
{
    figura = 3;
}
void MainWindow::on_actionElipse_triggered()
{
    figura = 4;
}

////////////////////////////////////////////////////////////////////////////
//figura prediseñada: linea
void MainWindow::dibujarLinea(const QPoint &inicio, const QPoint &final, const QColor &color, int tamaño)
{
    QPen pen(color);
    pen.setCapStyle(Qt::RoundCap);
    pen.setWidth(tamaño);
    painter->setPen(pen);
    painter->drawLine(inicio, final);
    update();
}
/////////////////////////////////////////////////////////////////////////////
//figura prediseñada: Cuadrado
void MainWindow::dibujarCuadrado(const QPoint &start, const QPoint &end, const QColor &color, int tamaño)
{
    // Calcular el rectángulo a partir de la posición inicial y final
    int x = qMin(start.x(), end.x());
    int y = qMin(start.y(), end.y());
    int width = qAbs(start.x() - end.x());
    int height = qAbs(start.y() - end.y());

    // Dibujar el rectángulo
    QPen pen(color);
    pen.setCapStyle(Qt::RoundCap);
    pen.setWidth(tamaño);
    painter->setPen(pen);
    painter->drawRect(x, y, width, height);
    update();
}
///////////////////////////////////////////////////////////////////////////////
//figura prediseñada circulo
void MainWindow::dibujarCirculo(const QPoint &centro, int radio, const QColor &color, int tamaño)
{
    // Dibujar el círculo
    QPen pen(color);
    pen.setCapStyle(Qt::RoundCap);
    pen.setWidth(tamaño);
    painter->setPen(pen);
    painter->drawEllipse(centro, radio, radio);
    update();
}
///////////////////////////////////////////////////////////////////////////////
//figura prediseñada elipse
void MainWindow::dibujarElipse(const QPoint &inicio, int width, int height, const QColor &color, int tamaño)
{
    // Calcular la posición del rectángulo que contiene la elipse
    int x = inicio.x() - width / 2;
    int y = inicio.y() - height / 2;

    // Dibujar la elipse
    QPen pen(color);
    pen.setCapStyle(Qt::RoundCap);
    pen.setWidth(tamaño);
    painter->setPen(pen);
    painter->drawEllipse(x, y, width, height);
    update();
}



