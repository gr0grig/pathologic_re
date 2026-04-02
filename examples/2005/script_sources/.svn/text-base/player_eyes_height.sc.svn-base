include std.sci

const float c_fSneakHeight = 0.8;
const float c_fDownSpeed = 1.2;
const float c_fUpSpeed = 1.2;

maintask TPlayerEyesHeight
{
	void init(void) {
		for (;;) {
			bool bSneak;
			float fCoef;
			@GetEyesHeightCoef(fCoef);
			if (fCoef == 1) {
				for (;;) {
					@sync();
					@IsSneakEnabled(bSneak);
					if (bSneak)
						break;
				}
				SneakAnim();
			}
			else {
				@IsSneakEnabled(bSneak);
				if (bSneak) {
					SneakAnim();
				}
				else {
					RaiseAnim();
				}
			}
		}
	}
	
	void SneakAnim() {
		bool bSneak;
		for (;;) {
			float fDeltaTime;
			@sync(fDeltaTime);
			float fCoef;
			@GetEyesHeightCoef(fCoef);
			fCoef -= c_fDownSpeed * fDeltaTime;
			if (fCoef <= c_fSneakHeight) {
				@SetEyesHeightCoef(c_fSneakHeight);
				break;
			}
			@SetEyesHeightCoef(fCoef);
		}
		for (;;) {
			@sync();
			@IsSneakEnabled(bSneak);
			if (!bSneak)
				break;
		}
	}

	void RaiseAnim() {
		bool bSneak;
		for (;;) {
			float fDeltaTime;
			@sync(fDeltaTime);
			float fCoef;
			@GetEyesHeightCoef(fCoef);
			fCoef += c_fUpSpeed * fDeltaTime;
			if (fCoef >= 1)
				break;
			@SetEyesHeightCoef(fCoef);
		}
		@SetEyesHeightCoef(1);
	}
}