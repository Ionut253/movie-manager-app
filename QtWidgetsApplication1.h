#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include <qlistwidget.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <QHBoxLayout>
#include <qlabel.h>
#include <QtWebEngineWidgets/qwebengineview.h>
#include <iostream>
#include "CTRL.h"
#include <qmessagebox.h>
#include <qabstractitemmodel.h>

class TableModel : public QAbstractTableModel
{
private:
	Controller& ctrl;
public:
	TableModel(Controller& c, QObject* parent = nullptr) : ctrl{ c }, QAbstractTableModel{ parent } {}
	
	int rowCount(const QModelIndex& parent = QModelIndex{}) const override
	{
		return this->ctrl.getMovies().size();
	}

	int columnCount(const QModelIndex& parent = QModelIndex{}) const override
	{
		return 5;
	}

	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override
	{
		int row = index.row();
		int column = index.column();

		vector<Movie> movies = this->ctrl.getMovies();
		Movie movie = movies[row];
		if (role == Qt::DisplayRole)
		{
			switch (column)
			{
			case 0:
				return QString::fromStdString(movie.getTitle());
			case 1:
				return QString::fromStdString(movie.getGenre());
			case 2:
				return QString::number(movie.getYear());
			case 3:
				return QString::number(movie.getLikes());
			case 4:
				return QString::fromStdString(movie.getTrailer());
			default:
				break;
			}
		}
		return QVariant{};
	}

	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override
	{
		if (role != Qt::DisplayRole)
			return QVariant{};

		if (orientation == Qt::Horizontal)
		{
			switch (section)
			{
			case 0:
				return QString{ "Title" };
			case 1:
				return QString{ "Genre" };
			case 2:
				return QString{ "Year" };
			case 3:
				return QString{ "Likes" };
			case 4:
				return QString{ "Trailer" };
			default:
				break;
			}
		}
		return QVariant{};
	}


};

class Movies2 : public QMainWindow
{
	Q_OBJECT

public:
	Movies2(QWidget* parent = nullptr, Controller ctrl = Controller());
	void populateList();
	void connectSignalsAndSlots();
	void addMovie();
	void deleteMovie();
	void updateMovie();
	void addMovieToWatchlist();
	void deleteMovieFromWatchlist();
	void searchMovies();
	void nextMovie();
	void openURL(string url);
	void openWatchlistFile(vector<Movie>& watchlist, string format);
	void undo();
	void redo();


	~Movies2();

private:
	Ui::Movies2Class ui;
	Controller ctrl;
	int currentMovieIndex = 0;

};
