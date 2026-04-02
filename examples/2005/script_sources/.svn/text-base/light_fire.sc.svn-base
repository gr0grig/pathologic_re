include std.sci

const float c_fMinDist = 0.075;
const float c_fMaxDist = 0.1;
const float c_fMinColor = 0.92;

maintask TLightFire
{
	var float fMinDist, fMaxDist;

	void init(void) {
		TWaitForLoad{};

		Vector cvBaseColor;
		@GetColor(cvBaseColor);
		for (;;) {
			float fColorMod;
			@rand(fColorMod, c_fMinColor, 1.0);
			@SetColor(cvBaseColor * fColorMod);
			float fDist;
			@rand(fDist, c_fMinDist, c_fMaxDist);
			@Sleep(fDist);
		}
	}
	
	void OnUnload(void) {
		@sync();
		TWaitForLoad{};
	}
}