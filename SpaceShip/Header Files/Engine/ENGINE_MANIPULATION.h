#pragma once
#include "Nomad_F1G_Elipsion_Engine.h"
#include "AI_Auxiliary_Engine.h"
#include "Cheetah_ZZ8J_Engine.h"

class EngineManipulation {
public:
	virtual ~EngineManipulation() = default;
	virtual void AddEngine(const Engine&) = 0;
	virtual void RemoveEngine() = 0;
	virtual void AboutEngine(const Engine&) = 0;
	virtual void AboutEngine(const Nomad_F1G_Elipsion_Engine&) = 0;
	virtual void AboutEngine(const AI_Auxiliary_Engine&) = 0;
	virtual void AboutEngine(const Cheetah_ZZ8J_Engine&) = 0;
};