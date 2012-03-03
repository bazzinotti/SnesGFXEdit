#ifndef TILEVIEW_H
#define TILEVIEW_H

#include <QGraphicsView>
#include "tile.h"

class TileView : public QGraphicsView
{
    Q_OBJECT

public:
    TileView(QWidget *parent = 0);
	void updateCursor();
	double zoom,oldzoom;
	int tileWHLSize, tileHHLSize;
	QGraphicsPixmapItem *cursoritem;
	QPixmap cursorbuf, cursorbuf2,cursorpix;
	bool firstPaint, swap;
	Tile *VRAMgrid[32][16];

protected:
	QSize sizeHint() const;
	void paintEvent ( QPaintEvent * event );
    void wheelEvent(QWheelEvent *event);
	void showEvent ( QShowEvent * event );
	void resizeEvent ( QResizeEvent * event );
	
};

#endif
