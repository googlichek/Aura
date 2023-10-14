// Copyright Turtle Shell Games


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetcontroller)
{
	WidgetController = InWidgetcontroller;
	WidgetControllerSet();
}
