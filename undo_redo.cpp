#include "undo_redo.h"

ActionAdd::ActionAdd(Repository& repo, Movie addedMovie) : repo{ repo }, addedMovie{ addedMovie }
{
}

ActionAdd::~ActionAdd()
{
}

void ActionAdd::executeUndo()
{
	this->repo.deleteMovie(this->addedMovie.getTitle());
}

void ActionAdd::executeRedo()
{
	this->repo.addMovie(this->addedMovie.getTitle(), this->addedMovie.getGenre(), this->addedMovie.getYear(), this->addedMovie.getLikes(), this->addedMovie.getTrailer());
}

ActionRemove::ActionRemove(Repository& repo, Movie removedMovie) : repo{ repo }, removedMovie{ removedMovie }
{
}

ActionRemove::~ActionRemove()
{
}
	
void ActionRemove::executeUndo()
{
	this->repo.addMovie(this->removedMovie.getTitle(), this->removedMovie.getGenre(), this->removedMovie.getYear(), this->removedMovie.getLikes(), this->removedMovie.getTrailer());
}

void ActionRemove::executeRedo()
{
	this->repo.deleteMovie(this->removedMovie.getTitle());
}

ActionUpdate::ActionUpdate(Repository& repo, Movie oldMovie, Movie newMovie) : repo{ repo }, oldMovie{ oldMovie }, newMovie{ newMovie }
{
}

ActionUpdate::~ActionUpdate()
{
}

void ActionUpdate::executeUndo()
{
	this->repo.updateMovie(this->newMovie.getTitle(), this->oldMovie.getTitle(), this->oldMovie.getGenre(), this->oldMovie.getYear(), this->oldMovie.getLikes(), this->oldMovie.getTrailer());
}

void ActionUpdate::executeRedo()
{
	this->repo.updateMovie(this->oldMovie.getTitle(), this->newMovie.getTitle(), this->newMovie.getGenre(), this->newMovie.getYear(), this->newMovie.getLikes(), this->newMovie.getTrailer());
}

