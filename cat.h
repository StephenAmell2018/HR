#ifndef CAT_H
#define CAT_H
#include <QTimer>
#include <QPainter>
#include <QPixmap>
#include <QLabel>
#include <QImage>
#include <QDebug>
#include <opencv2/opencv.hpp>
#include <QMainWindow>

namespace Ui {
class cat;
}

class cat : public QMainWindow
{
    Q_OBJECT

public:
    explicit cat(QWidget *parent = 0);
    ~cat();

private slots:
    void camera_clicked();
    void getFrame();
    void getROI();
    IplImage* get_ipl_roi(IplImage* src, CvRect rect);


private:
    Ui::cat *ui;
    QImage *imag;
    CvCapture *capture;//highgui里提供的一个专门处理摄像头图像的结构体
    IplImage *frame;//摄像头每次抓取的图像为一帧，使用该指针指向一帧图像的内存空间
    QTimer *timer;//定时器用于定时取帧，上面说的隔一段时间就去取就是用这个实现
};

#endif // CAT_H
