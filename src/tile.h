/*
 *  tile.h
 *  SNESGfxEdit
 *
 *  Created by bazz on 3/1/12.
 *  Copyright 2012 S.Crew. All rights reserved.
 *
 */

#ifndef TILE_H
#define TILE_H

#include <QGraphicsPixmapItem>

class TileView;

class Tile : public QGraphicsPixmapItem
{
    //Q_OBJECT
	
public:
    Tile(QGraphicsItem *parent = 0);
	int gridx, gridy;
	bool shit;
	Tile* prev_collided_Tile, *approvedTile, *ref;
	QPointF newPos;
	QPoint collide_center, collide_center_old;
	bool alreadyentered_tilezone;
	int colliding_different_tile;
	int row,col, row_offset, col_offset;
	bool selected;
	QPixmap originalpix;
	TileView *view;
	int movebywidth,movebyheight;
	bool zone16x16, zone32x32;
	Tile *topleft16x16, *topleft32x32, *topleft64x64;
	int sig;
	
	bool hovering;
	
	//void doMouseReleaseEvent(QGraphicsSceneMouseEvent *event);
	
protected:
	void mouseMoveEvent ( QGraphicsSceneMouseEvent * event );
	void mousePressEvent ( QGraphicsSceneMouseEvent * event );
	void mouseReleaseEvent ( QGraphicsSceneMouseEvent * event );
	QVariant itemChange(GraphicsItemChange change, const QVariant &value);
	void hoverEnterEvent ( QGraphicsSceneHoverEvent * event );
	void hoverLeaveEvent ( QGraphicsSceneHoverEvent * event );
	/*QSize sizeHint() const;
	void paintEvent ( QPaintEvent * event );
    void wheelEvent(QWheelEvent *event);
	void showEvent ( QShowEvent * event );
	void resizeEvent ( QResizeEvent * event );*/
	
};

#endif
