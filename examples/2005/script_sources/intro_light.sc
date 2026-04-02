include std.sci

const float c_fFadeAmount = 0.01;
const float c_fFadeTime = 44 / 40.0;

maintask TIntroLight
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		if (name == "off") {
			TOff{};
		}
	}
}

task TOff
{
	void init(void) {
		Vector color;
		@GetColor(color);
		
		float fAmount = 1;
		float fFadeSpeed = (1 - c_fFadeAmount) / c_fFadeTime;

		for (;;) {
			float fDeltaTime;
			@sync(fDeltaTime);
			fAmount -= fDeltaTime * fFadeSpeed;
			if (fAmount <= c_fFadeAmount)
				break;
			@SetColor(color * fAmount);
		}
		@SetColor(color * c_fFadeAmount);
	}
}