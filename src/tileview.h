#ifndef TILEVIEW_H
#define TILEVIEW_H

#include <QGraphicsView>
#include <QMenu>
#include "tile.h"

struct VRAM_Marker {
	//int x,y;
	QGraphicsEllipseItem *circle;
	int row,col;
	
	// remember to remove the rest of this if not needed *NEEDED*
	QPen pen;
	QBrush brush;
};

class TileView : public QGraphicsView
{
    Q_OBJECT // i forget why we need this

public:
    TileView(QWidget *parent = 0);
	void updateCursor();
	void setupActions();
	
	double zoom,oldzoom;
	int tileWHLSize, tileHHLSize;
	QGraphicsPixmapItem *cursoritem;
	
	QMenu right_click_menu;
	
	Tile *placeritem;
	Tile *selected_tile, *hovering_tile;
	QPixmap cursorbuf, cursorpix;
	QPixmap placerbuf, placerpix;
	bool firstPaint;
	unsigned int tilemode, tilesize;
	bool preview_original;
	Tile *VRAMgrid[32][16];
	QImage VRAMgrid_img[32][16];
	QPixmap blanktile, VRAMpixmap;
	bool tilesize_lock;
	QCursor cursor;
	QPixmap mousepix,mousepixbuf;
	
	VRAM_Marker start_marker, stop_marker;
	QAction *setVRAMStartMarker, *setVRAMStopMarker;
	
private slots:
	void setStartMarker();
	void setStopMarker();

protected:
	QSize sizeHint() const;
	void paintEvent ( QPaintEvent * event );
    void wheelEvent(QWheelEvent *event);
	void showEvent ( QShowEvent * event );
	void resizeEvent ( QResizeEvent * event );
	void mouseReleaseEvent ( QMouseEvent * event );
	
	
	
};

#endif
