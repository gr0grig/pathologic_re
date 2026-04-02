include std.sci

const float c_fMinDist = 0.05;
const float c_fMaxDist = 1.0;

maintask TLightBroken
{
	var float fMinDist, fMaxDist;

	void init(void) {

		float fDist;
		for (;;) {
			@Switch(true);
			@rand(fDist, c_fMinDist, c_fMaxDist);
			@Sleep(fDist);
			@Switch(false);
			@rand(fDist, c_fMinDist, c_fMaxDist);
			@Sleep(fDist);
		}
	}
}