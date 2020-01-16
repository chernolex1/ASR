#include "TGameBase.h"

namespace ASRGame {
	TGameBase::TGameBase(const IDisplay& display)
		: Dislpay(display)
	{}

	void TGameBase::DrawGameState()
	{
		std::string state = "Game State";

		Dislpay.DrawState(state);
	}
}
