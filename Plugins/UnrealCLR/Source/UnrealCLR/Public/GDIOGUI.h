#pragma once


#include "Framework/Application/SlateApplication.h"
#include "SlateBasics.h"

class GDIOPanel : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(GDIOPanel)
	{}
	SLATE_ARGUMENT(float, x_location)
		SLATE_ARGUMENT(float, y_location)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	FVector2D loadSettingsFromFile();
	FText getDateTimeText() const;
	FText getPort() const;
	FText getMouseCoordinates() const;
	FText getClientCount() const;
	FSlateColor getGuiColor() const;
	FText getLicenceText() const;
	EVisibility getLicenceVisibility() const;
protected:
	int daysToDisplay = 60;
	TSharedPtr<STextBlock> dateTime;
	TSharedPtr<STextBlock> mouseCoords;
	TSharedPtr<STextBlock> listeningPort;
	TSharedPtr<STextBlock> clientCount;
	TSharedPtr<float> x_location;
	TSharedPtr<float> y_location;
};