include std.sci
include player_base.sci

maintask TFlashlight
{
	void init(void) {
		float fTotalDelta = 0;
		for (;;) {
			float fDeltaTime;
			@sync(fDeltaTime);

			bool bOn;
			@IsVisirOn(bOn);
			if (bOn) {
				if (!IsSleeping()) {
					StateOn();
					fTotalDelta = 0;
				}
			}
			else {
				bool bVisir;
				@GetProperty("visir", bVisir);
				if (bVisir) {
					fTotalDelta += fDeltaTime;
					int iAddAmount = (int)fTotalDelta / 3;
					if (iAddAmount) {
						int iValue;
						@GetProperty("vcharge", iValue);
						@SetProperty("vcharge", clampi(iValue + iAddAmount, 0, 100));
						fTotalDelta %= 3;
					}
				}
				else {
					fTotalDelta = 0;
				}
			}
		}
	}

	void StateOn(void) {
		if (BurnFuel(5)) {
			float fTotalDelta = 0;
			for (;;) {
				for (;;) {
					float fDelta;
					@sync(fDelta);

					bool bOn;
					@IsVisirOn(bOn);
					if (!bOn || IsSleeping())
						return;

					fTotalDelta += fDelta;
					if ((int)fTotalDelta >= 1)
						break;
				}

				int iBurnAmount = (int)fTotalDelta;
				if (!BurnFuel(iBurnAmount))
					break;
				fTotalDelta %= 1;
			}
		}
		@SwitchVisir(false);
		@SendWorldWndMessage(c_iWM_PlayerVisirOff);
	}
	
	bool BurnFuel(int iAmount) {
		int iValue;
		@GetProperty("vcharge", iValue);
		iValue = clampi(iValue - iAmount, 0, 100);
		@SetProperty("vcharge", iValue);
		return iValue;
	}
}
