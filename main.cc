#include "tui.h"
#include "gui.h"
#include "game.h"
#include "humanc.h"
#include "botc.h"
#include <cstring>
#include <memory>

int main(int argc, char **argv) 
{
	std::unique_ptr<View> view{ View::get(argc > 1 ? argv[1] : "tui") };
	view->draw();
	Game game{};
	HumanC huc{game};
	BotC bot1{game};
	BotC bot2{game};
	view ->runloop();
}
