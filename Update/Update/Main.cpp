#include "MainUpdate.h"

int main(void)
{
	MainUpdate Main;
	Main.Start();

	ULONGLONG Time = GetTickCount64();

	float DeltaTime = 0;
	float StartTime = 0;
	float EndTime = 0;

	while (true)
	{
		StartTime = float(GetTickCount64() % 1000) / 1000;

		if (Time + DeltaTime < GetTickCount64())
		{
			Time = GetTickCount64();

			Main.FixedUpdate();
		}
		else
		{
			Main.Update();
			Main.LateUpdate();
			Main.Render();
		}

		EndTime = float(GetTickCount64() % 1000) / 1000;
		DeltaTime = EndTime - StartTime;
	}

	Main.Destroy();

	return 0;
}