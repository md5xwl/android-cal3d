#ifndef GAME_STATE_MANAGER
#define GAME_STATE_MANAGER

#include "Stack.h"

class GameStateManager
{
	public:
		GameStateManager();
		~GameStateManager();
		void changeState(GameState * state);
		void pushState(GameState * state);
		void popState();
		void clear();
		GameState * getCurrentState();

	private:
		Stack<GameState *> mGameState;

};

#endif