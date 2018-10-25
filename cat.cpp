#include "cat.h"
#include "ui_cat.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

cat::cat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cat)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(ui->camera,SIGNAL(clicked()),this,SLOT(camera_clicked()));//打开摄像头按钮
    connect(timer, SIGNAL(timeout()), this, SLOT(getFrame()));//超时就读取当前摄像头信息,通过此可以控制采样帧率
    connect(ui->roi,SIGNAL(clicked()),this,SLOT(getROI()));//打开摄像头按钮
    connect(timer, SIGNAL(timeout()), this, SLOT(getROI()));//超时就读取当前摄像头信息,通过此可以控制采样帧率



}

void cat::camera_clicked()  //注意 是clicked 不是click
{
     capture = cvCreateCameraCapture(0);//打开摄像头，从摄像头中获取视频
     timer->start(40);//开始计时，超时则发出timeout()信号,1000为1秒，50毫秒取一帧，20帧/秒


}

void cat::getFrame()
{
    frame = cvQueryFrame(capture);//从摄像头中抓取并返回每一帧

    // 将抓取到的帧，从IplImage格式转换为QImage格式,rgbSwapped是为了显示效果色彩好一些
    //QImage::Format_RGB888不同的摄像头用不同的格式。
   QImage image = QImage((const uchar*)frame->imageData,
                         frame->width, frame->height,
                         QImage::Format_RGB888).rgbSwapped();

    ui->label->setScaledContents(true);//很重要，通过这个设置可以使label自适应显示图片
    ui->label->setPixmap(QPixmap::fromImage(image));//将视频显示到label上
}

void cat::getROI()
{
    frame = cvQueryFrame(capture);//从摄像头中抓取并返回每一帧
    //?如何对Iplimage格式的文件进行裁剪
    CvRect rect = cvRect(540, 250, 400, 400);
    IplImage *roi = get_ipl_roi(frame, rect);
    QImage image = QImage((const uchar*)roi->imageData,
                          roi->width, roi->height,
                          QImage::Format_RGB888).rgbSwapped();

     ui->label2->setScaledContents(true);//很重要，通过这个设置可以使label自适应显示图片
     ui->label2->setPixmap(QPixmap::fromImage(image));//将视频显示到label上

}

//获取Iplimage格式图像的ROI的转化函数，src原图，rect 感兴趣roi
IplImage* cat::get_ipl_roi(IplImage* src, CvRect rect)
{
    cvSetImageROI(src, rect);
    IplImage* tmp = cvCreateImage(cvSize(src->roi->width, src->roi->height), src->depth, src->nChannels);
    cvCopy(src, tmp, NULL);
    cvResetImageROI(src);

    return tmp;
}


cat::~cat()
{
    delete ui;
}
