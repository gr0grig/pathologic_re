include std.sci
include player_base.sci

const float c_fMinDist = 0.075;
const float c_fMaxDist = 0.1;
const float c_fMinColor = 0.92;

maintask TFlashlight
{
	void init(void) {
		for (;;) {
			bool bOn;
			@IsFlashlightOn(bOn);
			if (bOn && !IsSleeping())
				StateOn();
			@sync();
		}
	}

	void StateOn(void) {
		if (BurnFuel(1)) {
			float fTotalDelta = 0;
			float fColorDelta = 0;
			for (;;) {
				for (;;) {
					if (fColorDelta <= 0) {
						float fColorMod;
						@rand(fColorMod, c_fMinColor, 1.0);
						@SetFlashlightColor([245, 221, 148] / 2 / 255 * fColorMod);
						@rand(fColorDelta, c_fMinDist, c_fMaxDist);
					}

					float fDelta;
					@sync(fDelta);

					bool bOn;
					@IsFlashlightOn(bOn);
					if (!bOn || IsSleeping())
						return;

					fColorDelta -= fDelta;
					fTotalDelta += fDelta;
					if ((int)fTotalDelta >= 5)
						break;
				}

				int iBurnAmount = (int)fTotalDelta / 5;
				if (!BurnFuel(iBurnAmount))
					break;
				fTotalDelta %= 5;
			}
		}
		@SwitchFlashlight(false);
		@PlaySound("flashlight_off");
	}
	
	bool BurnFuel(int iAmount) {
		int iRemoved;
		@RemoveItemByType(iRemoved, "kerosene", iAmount);
		return iRemoved == iAmount;
	}
}
