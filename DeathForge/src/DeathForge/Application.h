#pragma once

#include "Core.h"

namespace DeathForge {

	class DF_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	//To be defined in client.
	Application* CreateApplication();
	
}

