#pragma once

#ifdef DF_PLATFORM_WINDOWS

extern DeathForge::Application* DeathForge::CreateApplication();

int main(int argc, char** argv)
{
	auto app = DeathForge::CreateApplication();
	app->Run();
	delete app;
}
	
#endif