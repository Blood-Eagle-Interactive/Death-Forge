#include <deathForge.h>

class Sandbox : public DeathForge::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

DeathForge::Application* DeathForge::CreateApplication()
{
	return new Sandbox();
}

