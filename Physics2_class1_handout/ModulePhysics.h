#pragma once
#include "Module.h"
#include "Globals.h"
#include "../Physics2_class1_handout/Box2D/Box2D/Box2D.h"
class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, b2World* world, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:
	//b2Vec2 gravity;	b2World *world;	bool debug;
};