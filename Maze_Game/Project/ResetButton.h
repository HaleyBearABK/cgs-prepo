#pragma once
#include "PlaceableActor.h"
class ResetButton : public PlaceableActor
{
public:
	ResetButton(int x, int y);

	virtual ActorType GetType() override { return ActorType::ResetButton; }
	virtual void Draw() override;
};

