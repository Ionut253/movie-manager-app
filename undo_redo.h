#pragma once 
#include "domain.h"
#include "repo.h"
class Command {
public:
	virtual void executeUndo() = 0;
	virtual void executeRedo() = 0;
	virtual ~Command() = default;
};

class ActionAdd : public Command {

private:
	Repository& repo;
	Movie addedMovie;

public:

	ActionAdd(Repository& repo, Movie addedMovie);
	~ActionAdd();
	void executeUndo() override;
	void executeRedo() override;
};

class ActionRemove : public Command {

private:
	Repository& repo;
	Movie removedMovie;

public:

	ActionRemove(Repository& repo, Movie removedMovie);
	~ActionRemove();
	void executeUndo() override;
	void executeRedo() override;
};

class ActionUpdate : public Command {

private:
	Repository& repo;
	Movie oldMovie;
	Movie newMovie;

public:

	ActionUpdate(Repository& repo, Movie oldMovie, Movie newMovie);
	~ActionUpdate();
	void executeUndo() override;
	void executeRedo() override;
};