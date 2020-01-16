#pragma once

#include <string>

namespace ASRGame {

	class IDisplay
	{
	public:
		virtual void DrawState(std::string& state) const = 0;
	};
}

