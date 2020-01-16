#pragma once
#include "IDisplay.h"

#include "iostream""

namespace ASRGame {
	class TSimpleDisplay :
		public IDisplay
	{
	public:
		void DrawState(std::string& state) const override;
	};
}