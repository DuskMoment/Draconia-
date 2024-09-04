#pragma once
#include <EventListener.h>

class InputTranslator : public EventListener
{
public:
	InputTranslator();
	~InputTranslator();

	void handleEvent(const Event& theEvent);
private:
	int mLanguage;
	int MAX_LANGUAGES = 3;
};

