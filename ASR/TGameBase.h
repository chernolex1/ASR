#pragma once

#include "IDisplay.h"

namespace ASRGame {
	class TGameBase
	{
	public:
		TGameBase(const IDisplay& display);

		void DrawGameState();

	private:
		const IDisplay& Dislpay;
	};
}
