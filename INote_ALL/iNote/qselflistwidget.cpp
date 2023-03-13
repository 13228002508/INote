#include "qselflistwidget.h"
#include "QListWidget"
#include "QDateTime"
QSelfListWidget::QSelfListWidget(QWidget *paretn)
{

}

void QSelfListWidget::InitListData(QList<QFileInfo> *fileInfo)
{
	for (auto it=fileInfo->begin() ; it != fileInfo->end(); it++)//fileInfo->size()
	{
		int iWid = this->width();
		QListWidgetItem *newItem = new QListWidgetItem(this);
		QSelfItem * pSelfItem = new QSelfItem();
		pSelfItem->SetFileName(it->fileName());
		pSelfItem->SetFileLastModifyData((it->lastModified()).toString("yyyy-MM-dd hh:mm:ss"));
		pSelfItem->SetParetControlWidth(m_Wid);//this->width() / 2 - 10
		QString str= QString::asprintf("QListWidget::item{border:none; height: 80px; Width : %d}", m_Wid);//this->width() / 2 - 10
		this->setStyleSheet(str);
		pSelfItem->InitUi();
		this->insertItem(this->count(), newItem);
		this->setItemWidget(newItem, pSelfItem);
	}
}

void QSelfListWidget::SetParentWidth(int Wid)
{
	m_Wid = Wid;
}

