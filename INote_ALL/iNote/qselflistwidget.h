#ifndef QSELFLISTWIDGET_H
#define QSELFLISTWIDGET_H
#include "QListWidget"
#include <QWidget>
#include "QFileInfo"
#include "qselfitem.h"
class QSelfListWidget : public QListWidget
{
public:
    QSelfListWidget(QWidget *paretn);
	void InitListData(QList<QFileInfo> *fileInfo);
	void SetParentWidth(int Wid);
private:
	int  m_Wid;
};

#endif // QSELFLISTWIDGET_H
